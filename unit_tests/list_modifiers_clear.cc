#include "unit_tests.h"

TEST(ModifiersClear, ParameterizedSizeCorrectInt) {
  s21::list<int> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCorrectChar) {
  s21::list<char> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCorrectStr) {
  s21::list<std::string> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCompareInt) {
  s21::list<int> s21_test(3);
  std::list<int> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCompareChar) {
  s21::list<char> s21_test(3);
  std::list<char> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCompareStr) {
  s21::list<std::string> s21_test(3);
  std::list<std::string> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, DefaultSizeCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, DefaultSizeCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, DefaultSizeCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, DefaultSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, DefaultSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, DefaultSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}
