#include "unit_tests.h"

/* empty */

TEST(Capacity, IsEmptyCorrectInt) {
  s21::list<int> emptyList;
  EXPECT_TRUE(emptyList.empty());
}

TEST(Capacity, IsEmptyCorrectChar) {
  s21::list<char> emptyList;
  EXPECT_TRUE(emptyList.empty());
}

TEST(Capacity, IsEmptyCorrectStr) {
  s21::list<std::string> emptyList;
  EXPECT_TRUE(emptyList.empty());
}

TEST(Capacity, IsEmptyCompareInt) {
  s21::list<int> s21_emptyList;
  std::list<int> std_emptyList;
  EXPECT_TRUE(s21_emptyList.empty() == std_emptyList.empty());
}

TEST(Capacity, IsEmptyCompareChar) {
  s21::list<char> s21_emptyList;
  std::list<char> std_emptyList;
  EXPECT_TRUE(s21_emptyList.empty() == std_emptyList.empty());
}

TEST(Capacity, IsEmptyCompareStr) {
  s21::list<std::string> s21_emptyList;
  std::list<std::string> std_emptyList;
  EXPECT_TRUE(s21_emptyList.empty() == std_emptyList.empty());
}

TEST(Capacity, IsntEmptyCorrectInt) {
  s21::list<int> nonEmptyListP(1);
  s21::list<int> nonEmptyListI{1};
  EXPECT_FALSE(nonEmptyListP.empty());
  EXPECT_FALSE(nonEmptyListI.empty());
}

TEST(Capacity, IsntEmptyCorrectChar) {
  s21::list<char> nonEmptyListP(1);
  s21::list<char> nonEmptyListI{'a'};
  EXPECT_FALSE(nonEmptyListP.empty());
  EXPECT_FALSE(nonEmptyListI.empty());
}

TEST(Capacity, IsntEmptyCorrectStr) {
  s21::list<std::string> nonEmptyListP(1);
  s21::list<std::string> nonEmptyListI{"asd"};
  EXPECT_FALSE(nonEmptyListP.empty());
  EXPECT_FALSE(nonEmptyListI.empty());
}

TEST(Capacity, IsntEmptyCompareInt) {
  s21::list<int> s21_nonEmptyListP(1);
  std::list<int> std_nonEmptyListP(1);
  s21::list<int> s21_nonEmptyListI{1};
  std::list<int> std_nonEmptyListI{1};
  EXPECT_TRUE(!s21_nonEmptyListP.empty() == !std_nonEmptyListP.empty());
  EXPECT_TRUE(!s21_nonEmptyListI.empty() == !std_nonEmptyListI.empty());
}

TEST(Capacity, IsntEmptyCompareChar) {
  s21::list<char> s21_nonEmptyListP(1);
  std::list<char> std_nonEmptyListP(1);
  s21::list<char> s21_nonEmptyListI{'a'};
  std::list<char> std_nonEmptyListI{'a'};
  EXPECT_TRUE(!s21_nonEmptyListP.empty() == !std_nonEmptyListP.empty());
  EXPECT_TRUE(!s21_nonEmptyListI.empty() == !std_nonEmptyListI.empty());
}

TEST(Capacity, IsntEmptyCompareStr) {
  s21::list<std::string> s21_nonEmptyListP(1);
  std::list<std::string> std_nonEmptyListP(1);
  s21::list<std::string> s21_nonEmptyListI{"asd"};
  std::list<std::string> std_nonEmptyListI{"asd"};
  EXPECT_TRUE(!s21_nonEmptyListP.empty() == !std_nonEmptyListP.empty());
  EXPECT_TRUE(!s21_nonEmptyListI.empty() == !std_nonEmptyListI.empty());
}

/* size */

TEST(Capacity, SizeEmptyCorrectInt) {
  s21::list<int> emptyList;
  EXPECT_TRUE(emptyList.size() == 0);
}

TEST(Capacity, SizeEmptyCorrectChar) {
  s21::list<char> emptyList;
  EXPECT_TRUE(emptyList.size() == 0);
}

TEST(Capacity, SizeEmptyCorrectStr) {
  s21::list<std::string> emptyList;
  EXPECT_TRUE(emptyList.size() == 0);
}

TEST(Capacity, SizeEmptyCompareInt) {
  s21::list<int> s21_emptyList;
  std::list<int> std_emptyList;
  EXPECT_TRUE(s21_emptyList.size() == std_emptyList.size());
}

TEST(Capacity, SizeEmptyCompareChar) {
  s21::list<char> s21_emptyList;
  std::list<char> std_emptyList;
  EXPECT_TRUE(s21_emptyList.size() == std_emptyList.size());
}

TEST(Capacity, SizeEmptyCompareStr) {
  s21::list<std::string> s21_emptyList;
  std::list<std::string> std_emptyList;
  EXPECT_TRUE(s21_emptyList.size() == std_emptyList.size());
}

TEST(Capacity, SizeCorrectInt) {
  s21::list<int> nonEmptyListP(1);
  s21::list<int> nonEmptyListI{42};
  EXPECT_TRUE(nonEmptyListP.size() == 1);
  EXPECT_TRUE(nonEmptyListI.size() == 1);
}

TEST(Capacity, SizeCorrectChar) {
  s21::list<char> nonEmptyListP(1);
  s21::list<char> nonEmptyListI{'a'};
  EXPECT_TRUE(nonEmptyListP.size() == 1);
  EXPECT_TRUE(nonEmptyListI.size() == 1);
}

TEST(Capacity, SizeCorrectStr) {
  s21::list<std::string> nonEmptyListP(1);
  s21::list<std::string> nonEmptyListI{"abcd"};
  EXPECT_TRUE(nonEmptyListP.size() == 1);
  EXPECT_TRUE(nonEmptyListI.size() == 1);
}

TEST(Capacity, SizeCompareInt) {
  s21::list<int> s21_nonEmptyListP(1);
  std::list<int> std_nonEmptyListP(1);
  s21::list<int> s21_nonEmptyListI{42};
  std::list<int> std_nonEmptyListI{42};
  EXPECT_TRUE(s21_nonEmptyListP.size() == std_nonEmptyListP.size());
  EXPECT_TRUE(s21_nonEmptyListI.size() == std_nonEmptyListI.size());
}

TEST(Capacity, SizeCompareChar) {
  s21::list<char> s21_nonEmptyListP(1);
  std::list<char> std_nonEmptyListP(1);
  s21::list<char> s21_nonEmptyListI{'a'};
  std::list<char> std_nonEmptyListI{'a'};
  EXPECT_TRUE(s21_nonEmptyListP.size() == std_nonEmptyListP.size());
  EXPECT_TRUE(s21_nonEmptyListI.size() == std_nonEmptyListI.size());
}

TEST(Capacity, SizeCompareStr) {
  s21::list<std::string> s21_nonEmptyListP(1);
  std::list<std::string> std_nonEmptyListP(1);
  s21::list<std::string> s21_nonEmptyListI{"ABCD"};
  std::list<std::string> std_nonEmptyListI{"ABCD"};
  EXPECT_TRUE(s21_nonEmptyListP.size() == std_nonEmptyListP.size());
  EXPECT_TRUE(s21_nonEmptyListI.size() == std_nonEmptyListI.size());
}

/* max_size */

TEST(Capacity, MaxSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.max_size() == std_test.max_size());
}

TEST(Capacity, MaxSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.max_size() == std_test.max_size());
}

TEST(Capacity, MaxSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.max_size() == std_test.max_size());
}
