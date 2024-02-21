#include "unit_tests.h"

TEST(ListModifiersClear, ParameterizedSizeCorrectInt) {
  s21::list<int> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersClear, ParameterizedSizeCorrectChar) {
  s21::list<char> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersClear, ParameterizedSizeCorrectStr) {
  s21::list<std::string> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersClear, ParameterizedSizeCompareInt) {
  s21::list<int> s21_test(3);
  std::list<int> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersClear, ParameterizedSizeCompareChar) {
  s21::list<char> s21_test(3);
  std::list<char> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersClear, ParameterizedSizeCompareStr) {
  s21::list<std::string> s21_test(3);
  std::list<std::string> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersClear, DefaultSizeCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersClear, DefaultSizeCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersClear, DefaultSizeCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersClear, DefaultSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersClear, DefaultSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersClear, DefaultSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}
