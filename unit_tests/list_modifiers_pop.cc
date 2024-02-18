#include "unit_tests.h"

TEST(ModifiersPop, PopFrontEmptyCorrectInt) {
  s21::list<int> test{0};
  test.pop_front();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersPop, PopFrontEmptyCorrectChar) {
  s21::list<char> test{'a'};
  test.pop_front();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersPop, PopFrontEmptyCorrectStr) {
  s21::list<std::string> test{"yeet"};
  test.pop_front();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersPop, PopBackEmptyCorrectInt) {
  s21::list<int> test{0};
  test.pop_back();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersPop, PopBackEmptyCorrectChar) {
  s21::list<char> test{'a'};
  test.pop_back();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersPop, PopBackEmptyCorrectStr) {
  s21::list<std::string> test{"yeet"};
  test.pop_back();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersPop, PopFrontEmptyCompareInt) {
  s21::list<int> s21_test{0};
  std::list<int> std_test{0};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopFrontEmptyCompareChar) {
  s21::list<char> s21_test{'a'};
  std::list<char> std_test{'a'};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopFrontEmptyCompareStr) {
  s21::list<std::string> s21_test{"vfr"};
  std::list<std::string> std_test{"vfr"};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopBackEmptyCompareInt) {
  s21::list<int> s21_test{0};
  std::list<int> std_test{0};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopBackEmptyCompareChar) {
  s21::list<char> s21_test{'a'};
  std::list<char> std_test{'a'};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopBackEmptyCompareStr) {
  s21::list<std::string> s21_test{"qaz"};
  std::list<std::string> std_test{"qaz"};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopFrontCorrectInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare{2, 3};
  test.pop_front();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersPop, PopFrontCorrectChar) {
  s21::list<char> test{'X', 'Y', 'Z'};
  s21::list<char> compare{'Y', 'Z'};
  test.pop_front();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersPop, PopFrontCorrectStr) {
  s21::list<std::string> test{"qaz", "wsx", "edc"};
  s21::list<std::string> compare{"wsx", "edc"};
  test.pop_front();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersPop, PopBackCorrectInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare{1, 2};
  test.pop_back();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersPop, PopBackCorrectChar) {
  s21::list<char> test{'X', 'Y', 'Z'};
  s21::list<char> compare{'X', 'Y'};
  test.pop_back();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersPop, PopBackCorrectStr) {
  s21::list<std::string> test{"qaz", "wsx", "edc"};
  s21::list<std::string> compare{"qaz", "wsx"};
  test.pop_back();
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersPop, PopFrontCompareInt) {
  s21::list<int> s21_test{1, 2, 3};
  std::list<int> std_test{1, 2, 3};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopFrontCompareChar) {
  s21::list<char> s21_test{'X', 'Y', 'Z'};
  std::list<char> std_test{'X', 'Y', 'Z'};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopFrontCompareStr) {
  s21::list<std::string> s21_test{"qaz", "wsx", "edc"};
  std::list<std::string> std_test{"qaz", "wsx", "edc"};
  s21_test.pop_front();
  std_test.pop_front();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopBackCompareInt) {
  s21::list<int> s21_test{1, 2, 3};
  std::list<int> std_test{1, 2, 3};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopBackCompareChar) {
  s21::list<char> s21_test{'X', 'Y', 'Z'};
  std::list<char> std_test{'X', 'Y', 'Z'};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopBackCompareStr) {
  s21::list<std::string> s21_test{"qaz", "wsx", "edc"};
  std::list<std::string> std_test{"qaz", "wsx", "edc"};
  s21_test.pop_back();
  std_test.pop_back();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersPop, PopFrontIncorrectInt) {
  s21::list<int> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ModifiersPop, PopFrontIncorrectChar) {
  s21::list<char> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ModifiersPop, PopFrontIncorrectStr) {
  s21::list<std::string> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ModifiersPop, PopBackIncorrectInt) {
  s21::list<int> test;
  EXPECT_ANY_THROW(test.pop_back());
}

TEST(ModifiersPop, PopBackIncorrectChar) {
  s21::list<char> test;
  EXPECT_ANY_THROW(test.pop_back());
}

TEST(ModifiersPop, PopBackIncorrectStr) {
  s21::list<std::string> test;
  EXPECT_ANY_THROW(test.pop_back());
}
