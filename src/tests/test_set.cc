#include <gtest/gtest.h>

#include <set>
#include <string>

#include "../set/set.h"

using namespace std;

// ### SET ###

TEST(SET, Insert1) {
  s21::set<double> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<double> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  EXPECT_EQ(number1.size(), number2.size());
  auto it1 = number1.begin();
  for (auto it2 = number2.begin(); it2 != number2.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Insert2) {
  s21::set<double> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<double> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number1.insert(-1).second, number2.insert(-1).second);
  auto it1 = number1.begin();
  for (auto it2 = number2.begin(); it2 != number2.end(); ++it1, ++it2) {
    EXPECT_EQ(*it1, *it2);
  }
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Insert3) {
  s21::set<double> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<double> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  EXPECT_EQ(number1.size(), number2.size());
  auto it1 = number1.begin();
  for (auto it2 = number2.begin(); it2 != number2.end(); ++it1, ++it2) {
    EXPECT_EQ(*it1, *it2);
  }
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Constructor1) {
  s21::set<int> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<int> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  s21::set<int>::iterator it1 = number1.begin();
  for (auto it2 = number2.begin(); it2 != number2.end(); ++it1, ++it2)
  EXPECT_EQ(*it1, *it2);
}

TEST(SET, Constructor2) {
  s21::set<int> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<int> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  auto it1 = number1.begin();
  for (auto it2 = number2.begin(); it2 != number2.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
}

TEST(SET, Constructor3) {
  s21::set<int> number1;
  std::set<int> number2;
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Constructor4) {
  s21::set<int> number1 = {19, 23, 43};
  std::set<int> number2 = {19, 23, 43};
  auto number11 = std::move(number1);
  auto number22 = std::move(number2);
  auto it1 = number11.begin();
  for (auto it2 = number22.begin(); it2 != number22.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number11.size(), number22.size());
}

TEST(SET, Constructor5) {
  s21::set<int> number1 = {19, 23, 43};
  std::set<int> number2 = {19, 23, 43};
  auto number11 = number1;
  auto number22 = number2;
  auto it1 = number11.begin();
  for (auto it2 = number22.begin(); it2 != number22.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number11.size(), number22.size());
}

TEST(SET, Constructor6) {
  s21::set<int> number1 = {-19, -23, -43};
  std::set<int> number2 = {-19, -23, -43};
  auto it1 = number1.begin();
  for (auto it2 = number2.begin(); it2 != number2.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Constructor7) {
  s21::set<int> number1 = {19, 23, 43};
  std::set<int> number2 = {19, 23, 43};
  s21::set<int> number11;
  std::set<int> number22;
  number11 = std::move(number1);
  number22 = std::move(number2);
  auto it1 = number11.begin();
  for (auto it2 = number22.begin(); it2 != number22.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number11.size(), number22.size());
}

TEST(SET, Size1) {
  s21::set<int> number1;
  std::set<int> number2;
  number1.insert(1);
  number2.insert(1);
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Size2) {
  s21::set<int> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<int> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Size3) {
  s21::set<int> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<int> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  number1.clear();
  number2.clear();
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Clear1) {
  s21::set<double> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<double> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  number1.clear();
  number2.clear();
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number1.empty(), number2.empty());
}

TEST(SET, Clear2) {
  s21::set<double> number1;
  std::set<double> number2;
  number1.clear();
  number2.clear();
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number1.empty(), number2.empty());
}

TEST(SET, Clear3) {
  s21::set<double> number1 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  std::set<double> number2 = {19, 23, 43, 12, 33, 44, 32, 21, 10, 0};
  number1.clear();
  number2.clear();
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number1.empty(), number2.empty());
  number1.clear();
  number2.clear();
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number1.empty(), number2.empty());
}

TEST(SET, Begin) {
  s21::set<int> number1 = {19, 23, 43};
  std::set<int> number2 = {19, 23, 43};
  auto it1 = number1.begin();
  auto it2 = number2.begin();
  EXPECT_EQ(*it1, *it2);
}

TEST(SET, Empty) {
  s21::set<int> number1 = {19, 23, 43};
  std::set<int> number2 = {19, 23, 43};
  EXPECT_EQ(number1.empty(), number2.empty());
}

TEST(SET, Empty2) {
  s21::set<int> number1 = {19, 23, 43};
  std::set<int> number2 = {19, 23, 43};
  number1.clear();
  number2.clear();
  EXPECT_EQ(number1.empty(), number2.empty());
}

TEST(SET, Erase1) {
  s21::set<double> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<double> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  EXPECT_EQ(number1.size(), number2.size());
  number1.erase(number1.begin());
  number2.erase(number2.begin());
  EXPECT_EQ(number1.size(), number2.size());
}

TEST(SET, Erase2) {
  s21::set<double> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<double> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  number1.erase(number1.begin());
  number2.erase(number2.begin());
  auto it1 = number1.begin();
  auto it2 = number2.begin();
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(*it1, *it2);
}

TEST(SET, Swap1) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> number11;
  std::set<int> number22;
  number1.swap(number11);
  number2.swap(number22);
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number11.size(), number22.size());
  auto it1 = number11.begin();
  for (auto it2 = number22.begin(); it2 != number22.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
}

TEST(SET, Swap2) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> number11 = {138, 3, 101, 1, 67};
  std::set<int> number22 = {138, 3, 101, 1, 67};
  number1.swap(number11);
  number2.swap(number22);
  EXPECT_EQ(number1.size(), number2.size());
  EXPECT_EQ(number11.size(), number22.size());
  auto it1 = number11.begin();
  for (auto it2 = number22.begin(); it2 != number22.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
}

TEST(SET, Find1) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  EXPECT_EQ(*(number1.find(3)), *(number2.find(3)));
}

TEST(SET, Contains1) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  EXPECT_EQ(number1.contains(1), true);
}

TEST(SET, Contains2) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 1, 10, 5};
  EXPECT_EQ(number1.contains(0), false);
}

TEST(SET, Iterator1) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  auto it1 = number1.begin();
  auto it2 = number2.begin();
  for (int i = 0; i < 9; i++) ++it1, ++it2;
  EXPECT_EQ(*it1, *it2);
}

TEST(SET, Iterator3) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  auto it1 = number1.end();
  auto it2 = number1.end();
  EXPECT_EQ(it1 == it2, true);
}

TEST(SET, Iterator4) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  auto it1 = number1.end();
  auto it2 = number1.end();
  EXPECT_EQ(it1 != it2, false);
}

TEST(SET, Iterator5) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  auto it1 = number1.end();
  auto it2 = number1.end();
  EXPECT_EQ(it1 == it2, true);
}

TEST(Set, Iterator6) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  EXPECT_EQ(*(std_set.begin()), *(s21_set.begin()));
}

TEST(Set, Iterator7) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  auto std_it = --std_set.end();
  auto s21_it = s21_set.rbegin();
  --std_it;
  --s21_it;

  EXPECT_EQ(*std_it, *s21_it);
}

TEST(SET, Merge1) {
  s21::set<int> number1 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> number2 = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> number11 = {12, 41, 19, 109, 1234567};
  std::set<int> number22 = {12, 41, 19, 109, 1234567};
  number1.merge(number11);
  number2.merge(number22);
  EXPECT_EQ(number1.size(), number2.size());
  auto it1 = number1.begin();
  for (auto it2 = number2.begin(); it2 != number2.end(); ++it1, ++it2)
    EXPECT_EQ(*it1, *it2);
}

TEST(Set, Emplase) {
  s21::set<int> s = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> o = {13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  auto r = s.emplace(100, 300, 142, 400);
  auto pr3 = o.emplace(100, 300, 142, 400);

  EXPECT_EQ(*(r[2].first), *(pr3.first));
  EXPECT_EQ(r[2].second, pr3.second);
}

TEST(Set, Initializer_list) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  EXPECT_EQ(std_set.size(), s21_set.size());

  std::set<int, char> std_empty_set{};
  std::set<int, char> s21_empty_set{};
  EXPECT_EQ(std_empty_set.size(), s21_empty_set.size());
}

TEST(Set, Copy) {
  std::set<int> std_copy_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> std_set = std_copy_set;

  s21::set<int> s21_copy_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set = s21_copy_set;

  auto std_it = std_set.begin();
  auto s21_it = s21_set.begin();

  for (; std_it != std_set.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);
}

TEST(Set, Move) {
  std::set<int> std_moving_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  std::set<int> std_set = std::move(std_moving_set);

  s21::set<int> s21_moving_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set = std::move(s21_moving_set);

  auto std_it = std_set.begin();
  auto s21_it = s21_set.begin();

  for (; std_it != std_set.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);

  std::set<int> std_null_set;
  std::set<int> std_set_2 = std::move(std_null_set);

  s21::set<int> s21_null_set;
  s21::set<int> s21_set_2 = std::move(s21_null_set);

  EXPECT_EQ(std_null_set.size(), s21_null_set.size());
  EXPECT_EQ(std_set_2.size(), s21_set_2.size());
}

TEST(Set, assignment_operator_overload) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  std::set<int> std_set_2{855, 743, 645, 523, 446, 132, -1123};
  s21::set<int> s21_set_2{855, 743, 645, 523, 446, 132, -1123};

  std_set_2 = std::move(std_set);
  s21_set_2 = std::move(s21_set);

  auto std_it = std_set_2.begin();
  auto s21_it = s21_set_2.begin();

  for (; std_it != std_set_2.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);
}

TEST(Set, empty) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  EXPECT_EQ(std_set.empty(), s21_set.empty());

  std::set<int, char> std_empty_set{};
  std::set<int, char> s21_empty_set{};
  EXPECT_EQ(std_empty_set.empty(), s21_empty_set.empty());
}

TEST(Set, size) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  EXPECT_EQ(std_set.size(), s21_set.size());

  // пустое множество
  std::set<int, char> std_empty_set{};
  std::set<int, char> s21_empty_set{};
  EXPECT_EQ(std_empty_set.size(), s21_empty_set.size());
}

TEST(Set, max_size) {
  std::set<int, char> std_empty_set{};
  std::set<int, char> s21_empty_set{};
  EXPECT_EQ(std_empty_set.max_size(), s21_empty_set.max_size());
}

// ------- Set Modifiers -------

TEST(Set, clear) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  std_set.clear();
  s21_set.clear();

  std::set<int, char> std_empty_set{};
  std::set<int, char> s21_empty_set{};

  EXPECT_EQ(std_set.size(), std_empty_set.size());
  EXPECT_EQ(s21_set.size(), s21_empty_set.size());
}

TEST(Set, insert) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  auto std_insert_pair = std_set.insert(350);
  auto s21_insert_pair = s21_set.insert(350);

  EXPECT_EQ(std_insert_pair.second, s21_insert_pair.second);

  auto std_it = std_set.begin();
  auto s21_it = s21_set.begin();

  for (; std_it != std_set.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);
}

TEST(Set, erase) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  auto std_it = std_set.begin();
  auto s21_it = s21_set.begin();

  std_set.erase(std_it);
  s21_set.erase(s21_it);

  std_it = std_set.begin();
  s21_it = s21_set.begin();
  for (; std_it != std_set.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);
}

TEST(Set, swap) {
  std::set<int> std_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};
  s21::set<int> s21_set{13, 29, 34, 44, 56, 667, 24, 31, 0, 10, 5};

  std::set<int> std_set_2{551, 843, 745, 263, 456, 142, -1123};
  s21::set<int> s21_set_2{551, 843, 745, 263, 456, 142, -1123};

  std_set.swap(std_set_2);
  s21_set.swap(s21_set_2);

  auto std_it = std_set.begin();
  auto s21_it = s21_set.begin();

  for (; std_it != std_set.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);

  std_it = std_set_2.begin();
  s21_it = s21_set_2.begin();
  for (; std_it != std_set_2.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);
}

TEST(Set, merge) {
  std::set<int> std_set{3, 2, 0, 5, 3, 2, 9, -10, 9, 0};
  s21::set<int> s21_set{3, 2, 0, 5, 3, 2, 9, -10, 9, 0};

  std::set<int> std_set_2{551, 843, 745, 263, 456, 142, -1123};
  s21::set<int> s21_set_2{551, 843, 745, 263, 456, 142, -1123};

  std_set.merge(std_set_2);
  s21_set.merge(s21_set_2);

  auto std_it = std_set.begin();
  auto s21_it = s21_set.begin();
  for (; std_it != std_set.end(); ++std_it, ++s21_it)
    EXPECT_EQ(*std_it, *s21_it);
}

TEST(Set, find) {
  std::set<int> std_set{551, 843, 745, 263, 456, 142, -1123, 9};
  s21::set<int> s21_set{551, 843, 745, 263, 456, 142, -1123, 9};

  auto std_it = std_set.find(9);
  auto s21_it = s21_set.find(9);
  EXPECT_EQ(*std_it, *s21_it);
}

TEST(Set, contains) {
  std::set<int> std_set{551, 843, 745, 263, 456, 142, -1123, -10};
  s21::set<int> s21_set{551, 843, 745, 263, 456, 142, -1123, -10};

  EXPECT_EQ(true, s21_set.contains(-10));
  EXPECT_EQ(false, s21_set.contains(9555));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
