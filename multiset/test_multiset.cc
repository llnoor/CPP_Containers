#include "team_multiset.h"

TEST(Multiset, EqualRange) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  auto x = team_multiset.equal_range(-5);
  ASSERT_EQ(*x.first, -5);
  ASSERT_EQ(*x.second, -1);
}

TEST(Multiset, LowerBound) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  team::multiset<double>::iterator x = team_multiset.lower_bound(-5);
  --x;
  ASSERT_EQ(*x, -6);
}

TEST(Multiset, UpperBound) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  auto x = team_multiset.upper_bound(45);
  --x;
  ASSERT_EQ(*x, 45);
}

TEST(Multiset, Constructor1) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};

  ASSERT_EQ(*team_multiset.begin(), *std_multiset.begin());
  ASSERT_EQ(team_multiset.empty(), std_multiset.empty());
  ASSERT_EQ(team_multiset.size(), std_multiset.size());
}

TEST(Multiset, Constructor2) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  auto x = team_multiset.begin();
  auto y = std_multiset.begin();

  for (; x != team_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Insert) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  team_multiset.insert(15);
  std_multiset.insert(15);
  team_multiset.erase(team_multiset.begin());
  std_multiset.erase(std_multiset.begin());
  auto x = team_multiset.begin();
  auto y = std_multiset.begin();
  for (; x != team_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Swap) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  team::multiset<double> team_multiset1 = {10, 20, 30, 40, 50};
  std::multiset<double> std_multiset1 = {10, 20, 30, 40, 50};
  team_multiset.swap(team_multiset1);
  std_multiset.swap(std_multiset1);
  auto x = team_multiset.begin();
  auto y = std_multiset.begin();
  for (; x != team_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Merge) {
  team::multiset<double> team_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  team::multiset<double> team_multiset1 = {543, 345, 654, 35, 65};
  team_multiset.merge(team_multiset1);

  team::multiset<double> std_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};

  auto x = team_multiset.begin();
  auto y = std_multiset.begin();
  for (; x != team_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Find) {
  team::multiset<double> team_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};
  std::multiset<double> std_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};
  ASSERT_EQ(*team_multiset.find(45), *std_multiset.find(45));
}

TEST(Multiset, Contains) {
  team::multiset<double> team_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};
  team_multiset.count(-6);
  ASSERT_EQ(team_multiset.contains(200), false);
}
