#include "unit_tests.h"

/* empty */

TEST(QueueCapacity, IsEmptyCorrectInt) {
  s21::queue<int> test;
  EXPECT_TRUE(test.empty());
}

TEST(QueueCapacity, IsEmptyCorrectChar) {
  s21::queue<char> test;
  EXPECT_TRUE(test.empty());
}

TEST(QueueCapacity, IsEmptyCorrectStr) {
  s21::queue<std::string> test;
  EXPECT_TRUE(test.empty());
}

TEST(QueueCapacity, IsEmptyCompareInt) {
  s21::queue<int> s21_test;
  std::queue<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(QueueCapacity, IsEmptyCompareChar) {
  s21::queue<char> s21_test;
  std::queue<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(QueueCapacity, IsEmptyCompareStr) {
  s21::queue<std::string> s21_test;
  std::queue<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(QueueCapacity, IsntEmptyCorrectInt) {
    s21::queue<int> test{1};
  EXPECT_FALSE(test.empty());
}

TEST(QueueCapacity, IsntEmptyCorrectChar) {
  s21::queue<char> test{'a'};
  EXPECT_FALSE(test.empty());
}

TEST(QueueCapacity, IsntEmptyCorrectStr) {
  s21::queue<std::string> test{"asd"};
  EXPECT_FALSE(test.empty());
}

TEST(QueueCapacity, IsntEmptyCompareInt) {
  s21::queue<int> s21_test{1};
  std::queue<int> std_test;
  std_test.push(1);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
}

TEST(QueueCapacity, IsntEmptyCompareChar) {
  s21::queue<char> s21_test{'a'};
  std::queue<char> std_test;
  std_test.push('a');
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
}

TEST(QueueCapacity, IsntEmptyCompareStr) {
  s21::queue<std::string> s21_test{"asd"};
  std::queue<std::string> std_test;
  std_test.push("asd");
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
}

/* size */

TEST(QueueCapacity, SizeEmptyCorrectInt) {
  s21::queue<int> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(QueueCapacity, SizeEmptyCorrectChar) {
  s21::queue<char> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(QueueCapacity, SizeEmptyCorrectStr) {
  s21::queue<std::string> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(QueueCapacity, SizeEmptyCompareInt) {
  s21::queue<int> s21_test;
  std::queue<int> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeEmptyCompareChar) {
  s21::queue<char> s21_test;
  std::queue<char> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeEmptyCompareStr) {
  s21::queue<std::string> s21_test;
  std::queue<std::string> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeOneCorrectInt) {
  s21::queue<int> test{42};
  EXPECT_TRUE(test.size() == 1);
}

TEST(QueueCapacity, SizeOneCorrectChar) {
  s21::queue<char> test{'a'};
  EXPECT_TRUE(test.size() == 1);
}

TEST(QueueCapacity, SizeOneCorrectStr) {
  s21::queue<std::string> test{"abcd"};
  EXPECT_TRUE(test.size() == 1);
}

TEST(QueueCapacity, SizeOneCompareInt) {
  s21::queue<int> s21_test{42};
  std::queue<int> std_test;
  std_test.push(42);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeOneCompareChar) {
  s21::queue<char> s21_test{'a'};
  std::queue<char> std_test;
  std_test.push('a');
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeOneCompareStr) {
  s21::queue<std::string> s21_test{"ABCD"};
  std::queue<std::string> std_test;
  std_test.push("ABCD");
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeManyCorrectInt) {
  s21::queue<int> test{1, 2, 3, 4, 5};
  EXPECT_TRUE(test.size() == 5);
}

TEST(QueueCapacity, SizeManyCorrectChar) {
  s21::queue<char> test{'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(test.size() == 5);
}

TEST(QueueCapacity, SizeManyCorrectStr) {
  s21::queue<std::string> test{"abcd", "defg", "hijk", "lmno", "pqrs"};
  EXPECT_TRUE(test.size() == 5);
}

TEST(QueueCapacity, SizeManyCompareInt) {
  s21::queue<int> s21_test{1, 2, 3, 4, 5};
  std::queue<int> std_test;
  for (int i = 1; i != 5 + 1; ++i) {
    std_test.push(i);
  }
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeManyCompareChar) {
  s21::queue<char> s21_test{'a', 'b', 'c', 'd', 'e'};
  std::queue<char> std_test;
  for (char i = 'a'; i != 'e' + 1; ++i) {
    std_test.push(i);
  }
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueCapacity, SizeManyCompareStr) {
  s21::queue<std::string> s21_test{"abcd", "defg", "hijk", "lmno", "pqrs"};
  std::queue<std::string> std_test;
  std_test.push("abcd");
  std_test.push("defg");
  std_test.push("hijk");
  std_test.push("lmno");
  std_test.push("pqrs");
  EXPECT_TRUE(s21_test.size() == std_test.size());
}
