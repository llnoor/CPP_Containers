#include "unit_tests.h"

/* empty */

TEST(ListCapacity, IsEmptyCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.empty());
}

TEST(ListCapacity, IsEmptyCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.empty());
}

TEST(ListCapacity, IsEmptyCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.empty());
}

TEST(ListCapacity, IsEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListCapacity, IsEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListCapacity, IsEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListCapacity, IsntEmptyCorrectInt) {
  s21::list<int> test_p(1);
  s21::list<int> test_il{1};
  EXPECT_FALSE(test_p.empty());
  EXPECT_FALSE(test_il.empty());
}

TEST(ListCapacity, IsntEmptyCorrectChar) {
  s21::list<char> test_p(1);
  s21::list<char> test_il{'a'};
  EXPECT_FALSE(test_p.empty());
  EXPECT_FALSE(test_il.empty());
}

TEST(ListCapacity, IsntEmptyCorrectStr) {
  s21::list<std::string> test_p(1);
  s21::list<std::string> test_il{"asd"};
  EXPECT_FALSE(test_p.empty());
  EXPECT_FALSE(test_il.empty());
}

TEST(ListCapacity, IsntEmptyCompareInt) {
  s21::list<int> s21_test_p(1);
  std::list<int> std_test_p(1);
  s21::list<int> s21_test_il{1};
  std::list<int> std_test_il{1};
  EXPECT_TRUE(!s21_test_p.empty() == !std_test_p.empty());
  EXPECT_TRUE(!s21_test_il.empty() == !std_test_il.empty());
}

TEST(ListCapacity, IsntEmptyCompareChar) {
  s21::list<char> s21_test_p(1);
  std::list<char> std_test_p(1);
  s21::list<char> s21_test_il{'a'};
  std::list<char> std_test_il{'a'};
  EXPECT_TRUE(!s21_test_p.empty() == !std_test_p.empty());
  EXPECT_TRUE(!s21_test_il.empty() == !std_test_il.empty());
}

TEST(ListCapacity, IsntEmptyCompareStr) {
  s21::list<std::string> s21_test_p(1);
  std::list<std::string> std_test_p(1);
  s21::list<std::string> s21_test_il{"asd"};
  std::list<std::string> std_test_il{"asd"};
  EXPECT_TRUE(!s21_test_p.empty() == !std_test_p.empty());
  EXPECT_TRUE(!s21_test_il.empty() == !std_test_il.empty());
}

/* size */

TEST(ListCapacity, SizeEmptyCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(ListCapacity, SizeEmptyCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(ListCapacity, SizeEmptyCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.size() == 0);
}

TEST(ListCapacity, SizeEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListCapacity, SizeEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListCapacity, SizeEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListCapacity, SizeOneCorrectInt) {
  s21::list<int> test_p(1);
  s21::list<int> test_il{42};
  EXPECT_TRUE(test_p.size() == 1);
  EXPECT_TRUE(test_il.size() == 1);
}

TEST(ListCapacity, SizeOneCorrectChar) {
  s21::list<char> test_p(1);
  s21::list<char> test_il{'a'};
  EXPECT_TRUE(test_p.size() == 1);
  EXPECT_TRUE(test_il.size() == 1);
}

TEST(ListCapacity, SizeOneCorrectStr) {
  s21::list<std::string> test_p(1);
  s21::list<std::string> test_il{"abcd"};
  EXPECT_TRUE(test_p.size() == 1);
  EXPECT_TRUE(test_il.size() == 1);
}

TEST(ListCapacity, SizeOneCompareInt) {
  s21::list<int> s21_test_p(1);
  std::list<int> std_test_p(1);
  s21::list<int> s21_test_il{42};
  std::list<int> std_test_il{42};
  EXPECT_TRUE(s21_test_p.size() == std_test_p.size());
  EXPECT_TRUE(s21_test_il.size() == std_test_il.size());
}

TEST(ListCapacity, SizeOneCompareChar) {
  s21::list<char> s21_test_p(1);
  std::list<char> std_test_p(1);
  s21::list<char> s21_test_il{'a'};
  std::list<char> std_test_il{'a'};
  EXPECT_TRUE(s21_test_p.size() == std_test_p.size());
  EXPECT_TRUE(s21_test_il.size() == std_test_il.size());
}

TEST(ListCapacity, SizeOneCompareStr) {
  s21::list<std::string> s21_test_p(1);
  std::list<std::string> std_test_p(1);
  s21::list<std::string> s21_test_il{"ABCD"};
  std::list<std::string> std_test_il{"ABCD"};
  EXPECT_TRUE(s21_test_p.size() == std_test_p.size());
  EXPECT_TRUE(s21_test_il.size() == std_test_il.size());
}

TEST(ListCapacity, SizeManyCorrectInt) {
  s21::list<int> test_p(5);
  s21::list<int> test_il{1, 2, 3, 4, 5};
  EXPECT_TRUE(test_p.size() == 5);
  EXPECT_TRUE(test_il.size() == 5);
}

TEST(ListCapacity, SizeManyCorrectChar) {
  s21::list<char> test_p(5);
  s21::list<char> test_il{'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(test_p.size() == 5);
  EXPECT_TRUE(test_il.size() == 5);
}

TEST(ListCapacity, SizeManyCorrectStr) {
  s21::list<std::string> test_p(5);
  s21::list<std::string> test_il{"abcd", "efgh", "ijkl", "mnop", "qrst"};
  EXPECT_TRUE(test_p.size() == 5);
  EXPECT_TRUE(test_il.size() == 5);
}

TEST(ListCapacity, SizeManyCompareInt) {
  s21::list<int> s21_test_p(5);
  std::list<int> std_test_p(5);
  s21::list<int> s21_test_il{1, 2, 3, 4, 5};
  std::list<int> std_test_il{1, 2, 3, 4, 5};
  EXPECT_TRUE(s21_test_p.size() == std_test_p.size());
  EXPECT_TRUE(s21_test_il.size() == std_test_il.size());
}

TEST(ListCapacity, SizeManyCompareChar) {
  s21::list<char> s21_test_p(5);
  std::list<char> std_test_p(5);
  s21::list<char> s21_test_il{'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test_il{'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(s21_test_p.size() == std_test_p.size());
  EXPECT_TRUE(s21_test_il.size() == std_test_il.size());
}

TEST(ListCapacity, SizeManyCompareStr) {
  s21::list<std::string> s21_test_p(5);
  std::list<std::string> std_test_p(5);
  s21::list<std::string> s21_test_il{"abcd", "efgh", "ijkl", "mnop", "qrst"};
  std::list<std::string> std_test_il{"abcd", "efgh", "ijkl", "mnop", "qrst"};
  EXPECT_TRUE(s21_test_p.size() == std_test_p.size());
  EXPECT_TRUE(s21_test_il.size() == std_test_il.size());
}

/* max_size */

TEST(ListCapacity, MaxSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.max_size() == std_test.max_size());
}

TEST(ListCapacity, MaxSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.max_size() == std_test.max_size());
}

TEST(ListCapacity, MaxSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.max_size() == std_test.max_size());
}
