#include "unit_tests.h"

/* empty */

TEST(StackCapacity, IsEmptyCorrectInt) {
  s21::stack<int> test;
  EXPECT_TRUE(test.empty());
}

TEST(StackCapacity, IsEmptyCorrectChar) {
  s21::stack<char> test;
  EXPECT_TRUE(test.empty());
}

TEST(StackCapacity, IsEmptyCorrectStr) {
  s21::stack<std::string> test;
  EXPECT_TRUE(test.empty());
}

TEST(StackCapacity, IsEmptyCompareInt) {
  s21::stack<int> s21_test;
  std::stack<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(StackCapacity, IsEmptyCompareChar) {
  s21::stack<char> s21_test;
  std::stack<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(StackCapacity, IsEmptyCompareStr) {
  s21::stack<std::string> s21_test;
  std::stack<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(StackCapacity, IsntEmptyCorrectInt) {
  s21::stack<int> test{1};
  EXPECT_FALSE(test.empty());
}

TEST(StackCapacity, IsntEmptyCorrectChar) {
  s21::stack<char> test{'a'};
  EXPECT_FALSE(test.empty());
}

TEST(StackCapacity, IsntEmptyCorrectStr) {
  s21::stack<std::string> test{"asd"};
  EXPECT_FALSE(test.empty());
}

TEST(StackCapacity, IsntEmptyCompareInt) {
  s21::stack<int> s21_test{1};
  std::stack<int> std_test;
  std_test.push(1);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
}

TEST(StackCapacity, IsntEmptyCompareChar) {
  s21::stack<char> s21_test{'a'};
  std::stack<char> std_test;
  std_test.push('a');
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
}

TEST(StackCapacity, IsntEmptyCompareStr) {
  s21::stack<std::string> s21_test{"asd"};
  std::stack<std::string> std_test;
  std_test.push("asd");
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
}

/* size */

TEST(StackCapacity, SizeEmptyCorrectInt) {
  s21::stack<int> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(StackCapacity, SizeEmptyCorrectChar) {
  s21::stack<char> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(StackCapacity, SizeEmptyCorrectStr) {
  s21::stack<std::string> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(StackCapacity, SizeEmptyCompareInt) {
  s21::stack<int> s21_test;
  std::stack<int> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeEmptyCompareChar) {
  s21::stack<char> s21_test;
  std::stack<char> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeEmptyCompareStr) {
  s21::stack<std::string> s21_test;
  std::stack<std::string> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeOneCorrectInt) {
  s21::stack<int> test{42};
  EXPECT_TRUE(test.size() == 1);
}

TEST(StackCapacity, SizeOneCorrectChar) {
  s21::stack<char> test{'a'};
  EXPECT_TRUE(test.size() == 1);
}

TEST(StackCapacity, SizeOneCorrectStr) {
  s21::stack<std::string> test{"abcd"};
  EXPECT_TRUE(test.size() == 1);
}

TEST(StackCapacity, SizeOneCompareInt) {
  s21::stack<int> s21_test{42};
  std::stack<int> std_test;
  std_test.push(42);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeOneCompareChar) {
  s21::stack<char> s21_test{'a'};
  std::stack<char> std_test;
  std_test.push('a');
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeOneCompareStr) {
  s21::stack<std::string> s21_test{"ABCD"};
  std::stack<std::string> std_test;
  std_test.push("ABCD");
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeManyCorrectInt) {
  s21::stack<int> test{1, 2, 3, 4, 5};
  EXPECT_TRUE(test.size() == 5);
}

TEST(StackCapacity, SizeManyCorrectChar) {
  s21::stack<char> test{'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(test.size() == 5);
}

TEST(StackCapacity, SizeManyCorrectStr) {
  s21::stack<std::string> test{"abcd", "defg", "hijk", "lmno", "pqrs"};
  EXPECT_TRUE(test.size() == 5);
}

TEST(StackCapacity, SizeManyCompareInt) {
  s21::stack<int> s21_test{1, 2, 3, 4, 5};
  std::stack<int> std_test;
  for (int i = 1; i != 5 + 1; ++i) {
    std_test.push(i);
  }
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeManyCompareChar) {
  s21::stack<char> s21_test{'a', 'b', 'c', 'd', 'e'};
  std::stack<char> std_test;
  for (char i = 'a'; i != 'e' + 1; ++i) {
    std_test.push(i);
  }
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackCapacity, SizeManyCompareStr) {
  s21::stack<std::string> s21_test{"abcd", "defg", "hijk", "lmno", "pqrs"};
  std::stack<std::string> std_test;
  std_test.push("abcd");
  std_test.push("defg");
  std_test.push("hijk");
  std_test.push("lmno");
  std_test.push("pqrs");
  EXPECT_TRUE(s21_test.size() == std_test.size());
}
