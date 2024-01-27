#include "s21_multiset.h"

TEST(Multiset, EqualRange) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  auto x = s21_multiset.equal_range(-5);
  ASSERT_EQ(*x.first, -5);
  ASSERT_EQ(*x.second, -1);
}

TEST(Multiset, LowerBound) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  s21::multiset<double>::iterator x = s21_multiset.lower_bound(-5);
  --x;
  ASSERT_EQ(*x, -6);
}

TEST(Multiset, UpperBound) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  auto x = s21_multiset.upper_bound(45);
  --x;
  ASSERT_EQ(*x, 45);
}

TEST(Multiset, Constructor1) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};

  ASSERT_EQ(*s21_multiset.begin(), *std_multiset.begin());
  ASSERT_EQ(s21_multiset.empty(), std_multiset.empty());
  ASSERT_EQ(s21_multiset.size(), std_multiset.size());
}

TEST(Multiset, Constructor2) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  auto x = s21_multiset.begin();
  auto y = std_multiset.begin();

  for (; x != s21_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Insert) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  s21_multiset.insert(15);
  std_multiset.insert(15);
  s21_multiset.erase(s21_multiset.begin());
  std_multiset.erase(std_multiset.begin());
  auto x = s21_multiset.begin();
  auto y = std_multiset.begin();
  for (; x != s21_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Swap) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  std::multiset<double> std_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  s21::multiset<double> s21_multiset1 = {10, 20, 30, 40, 50};
  std::multiset<double> std_multiset1 = {10, 20, 30, 40, 50};
  s21_multiset.swap(s21_multiset1);
  std_multiset.swap(std_multiset1);
  auto x = s21_multiset.begin();
  auto y = std_multiset.begin();
  for (; x != s21_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Merge) {
  s21::multiset<double> s21_multiset = {-1, -6, 45, -34, 54, 23, -5, -6, -5, 0};
  s21::multiset<double> s21_multiset1 = {543, 345, 654, 35, 65};
  s21_multiset.merge(s21_multiset1);

  s21::multiset<double> std_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};

  auto x = s21_multiset.begin();
  auto y = std_multiset.begin();
  for (; x != s21_multiset.end(); ++x, ++y) {
    ASSERT_EQ(*x, *y);
  }
}

TEST(Multiset, Find) {
  s21::multiset<double> s21_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};
  std::multiset<double> std_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};
  ASSERT_EQ(*s21_multiset.find(45), *std_multiset.find(45));
}

TEST(Multiset, Contains) {
  s21::multiset<double> s21_multiset = {-1, -6, 45,  -34, 54,  23, -5, -6,
                                        -5, 0,  543, 345, 654, 35, 65};
  s21_multiset.count(-6);
  ASSERT_EQ(s21_multiset.contains(200), false);
}
