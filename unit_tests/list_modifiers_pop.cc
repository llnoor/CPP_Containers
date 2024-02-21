#include "unit_tests.h"

TEST(ListModifiersPop, PopFrontOneCorrectInt) {
  s21::list<int> test{0};
  test.pop_front();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersPop, PopFrontOneCorrectChar) {
  s21::list<char> test{'a'};
  test.pop_front();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersPop, PopFrontOneCorrectStr) {
  s21::list<std::string> test{"yeet"};
  test.pop_front();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersPop, PopBackOneCorrectInt) {
  s21::list<int> test{0};
  test.pop_back();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersPop, PopBackOneCorrectChar) {
  s21::list<char> test{'a'};
  test.pop_back();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersPop, PopBackOneCorrectStr) {
  s21::list<std::string> test{"yeet"};
  test.pop_back();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersPop, PopFrontOneCompareInt) {
  s21::list<int> s21_test{0};
  std::list<int> std_test{0};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopFrontOneCompareChar) {
  s21::list<char> s21_test{'a'};
  std::list<char> std_test{'a'};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopFrontOneCompareStr) {
  s21::list<std::string> s21_test{"vfr"};
  std::list<std::string> std_test{"vfr"};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopBackOneCompareInt) {
  s21::list<int> s21_test{0};
  std::list<int> std_test{0};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopBackOneCompareChar) {
  s21::list<char> s21_test{'a'};
  std::list<char> std_test{'a'};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopBackOneCompareStr) {
  s21::list<std::string> s21_test{"qaz"};
  std::list<std::string> std_test{"qaz"};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopFrontCorrectInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare{2, 3};
  test.pop_front();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersPop, PopFrontCorrectChar) {
  s21::list<char> test{'X', 'Y', 'Z'};
  s21::list<char> compare{'Y', 'Z'};
  test.pop_front();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersPop, PopFrontCorrectStr) {
  s21::list<std::string> test{"qaz", "wsx", "edc"};
  s21::list<std::string> compare{"wsx", "edc"};
  test.pop_front();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersPop, PopBackCorrectInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare{1, 2};
  test.pop_back();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersPop, PopBackCorrectChar) {
  s21::list<char> test{'X', 'Y', 'Z'};
  s21::list<char> compare{'X', 'Y'};
  test.pop_back();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersPop, PopBackCorrectStr) {
  s21::list<std::string> test{"qaz", "wsx", "edc"};
  s21::list<std::string> compare{"qaz", "wsx"};
  test.pop_back();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersPop, PopFrontCompareInt) {
  s21::list<int> s21_test{1, 2, 3};
  std::list<int> std_test{1, 2, 3};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopFrontCompareChar) {
  s21::list<char> s21_test{'X', 'Y', 'Z'};
  std::list<char> std_test{'X', 'Y', 'Z'};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopFrontCompareStr) {
  s21::list<std::string> s21_test{"qaz", "wsx", "edc"};
  std::list<std::string> std_test{"qaz", "wsx", "edc"};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopBackCompareInt) {
  s21::list<int> s21_test{1, 2, 3};
  std::list<int> std_test{1, 2, 3};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopBackCompareChar) {
  s21::list<char> s21_test{'X', 'Y', 'Z'};
  std::list<char> std_test{'X', 'Y', 'Z'};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopBackCompareStr) {
  s21::list<std::string> s21_test{"qaz", "wsx", "edc"};
  std::list<std::string> std_test{"qaz", "wsx", "edc"};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersPop, PopFrontIncorrectInt) {
  s21::list<int> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ListModifiersPop, PopFrontIncorrectChar) {
  s21::list<char> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ListModifiersPop, PopFrontIncorrectStr) {
  s21::list<std::string> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ListModifiersPop, PopBackIncorrectInt) {
  s21::list<int> test;
  EXPECT_ANY_THROW(test.pop_back());
}

TEST(ListModifiersPop, PopBackIncorrectChar) {
  s21::list<char> test;
  EXPECT_ANY_THROW(test.pop_back());
}

TEST(ListModifiersPop, PopBackIncorrectStr) {
  s21::list<std::string> test;
  EXPECT_ANY_THROW(test.pop_back());
}
