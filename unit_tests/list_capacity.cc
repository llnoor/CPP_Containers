#include "unit_tests.h"

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

TEST(Capacity, IsntEmptyBackInt) {
  s21::list<int> nonEmptyList;
  nonEmptyList.push_back(42);
  EXPECT_FALSE(nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyBackChar) {
  s21::list<char> nonEmptyList;
  nonEmptyList.push_back('a');
  EXPECT_FALSE(nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyBackStr) {
  s21::list<std::string> nonEmptyList;
  nonEmptyList.push_back("asd");
  EXPECT_FALSE(nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyFrontInt) {
  s21::list<int> nonEmptyList;
  nonEmptyList.push_front(42);
  EXPECT_FALSE(nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyFrontChar) {
  s21::list<char> nonEmptyList;
  nonEmptyList.push_front('a');
  EXPECT_FALSE(nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyFrontStr) {
  s21::list<std::string> nonEmptyList;
  nonEmptyList.push_front("asd");
  EXPECT_FALSE(nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyBackCompareInt) {
  s21::list<int> s21_nonEmptyList;
  std::list<int> std_nonEmptyList;
  s21_nonEmptyList.push_back(42);
  std_nonEmptyList.push_back(42);
  EXPECT_TRUE(!s21_nonEmptyList.empty() == !std_nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyBackCompareChar) {
  s21::list<char> s21_nonEmptyList;
  std::list<char> std_nonEmptyList;
  s21_nonEmptyList.push_back('a');
  std_nonEmptyList.push_back('a');
  EXPECT_TRUE(!s21_nonEmptyList.empty() == !std_nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyBackCompareStr) {
  s21::list<std::string> s21_nonEmptyList;
  std::list<std::string> std_nonEmptyList;
  s21_nonEmptyList.push_back("asd");
  std_nonEmptyList.push_back("asd");
  EXPECT_TRUE(!s21_nonEmptyList.empty() == !std_nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyFrontCompareInt) {
  s21::list<int> s21_nonEmptyList;
  std::list<int> std_nonEmptyList;
  s21_nonEmptyList.push_front(42);
  std_nonEmptyList.push_front(42);
  EXPECT_TRUE(!s21_nonEmptyList.empty() == !std_nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyFrontCompareChar) {
  s21::list<char> s21_nonEmptyList;
  std::list<char> std_nonEmptyList;
  s21_nonEmptyList.push_front('a');
  std_nonEmptyList.push_front('a');
  EXPECT_TRUE(!s21_nonEmptyList.empty() == !std_nonEmptyList.empty());
}

TEST(Capacity, IsntEmptyFrontCompareStr) {
  s21::list<std::string> s21_nonEmptyList;
  std::list<std::string> std_nonEmptyList;
  s21_nonEmptyList.push_front("asd");
  std_nonEmptyList.push_front("asd");
  EXPECT_TRUE(!s21_nonEmptyList.empty() == !std_nonEmptyList.empty());
}

TEST(Capacity, SizeEmptyInt) {
  s21::list<int> emptyList;
  EXPECT_TRUE(emptyList.size() == 0);
}

TEST(Capacity, SizeEmptyChar) {
  s21::list<char> emptyList;
  EXPECT_TRUE(emptyList.size() == 0);
}

TEST(Capacity, SizeEmptyStr) {
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

TEST(Capacity, SizeCorrectBackInt) {
  s21::list<int> nonEmptyList;
  nonEmptyList.push_back(42);
  EXPECT_TRUE(nonEmptyList.size() == 1);
}

TEST(Capacity, SizeCorrectBackChar) {
  s21::list<char> nonEmptyList;
  nonEmptyList.push_back('a');
  EXPECT_TRUE(nonEmptyList.size() == 1);
}

TEST(Capacity, SizeCorrectBackStr) {
  s21::list<std::string> nonEmptyList;
  nonEmptyList.push_back("abcd");
  EXPECT_TRUE(nonEmptyList.size() == 1);
}

TEST(Capacity, SizeCorrectFrontInt) {
  s21::list<int> nonEmptyList;
  nonEmptyList.push_front(42);
  EXPECT_TRUE(nonEmptyList.size() == 1);
}

TEST(Capacity, SizeCorrectFrontChar) {
  s21::list<char> nonEmptyList;
  nonEmptyList.push_front('a');
  EXPECT_TRUE(nonEmptyList.size() == 1);
}

TEST(Capacity, SizeCorrectFrontStr) {
  s21::list<std::string> nonEmptyList;
  nonEmptyList.push_front("abcd");
  EXPECT_TRUE(nonEmptyList.size() == 1);
}

TEST(Capacity, SizeCompareBackInt) {
  s21::list<int> s21_nonEmptyList;
  std::list<int> std_nonEmptyList;
  s21_nonEmptyList.push_back(42);
  std_nonEmptyList.push_back(42);
  EXPECT_TRUE(s21_nonEmptyList.size() == std_nonEmptyList.size());
}

TEST(Capacity, SizeCompareBackChar) {
  s21::list<char> s21_nonEmptyList;
  std::list<char> std_nonEmptyList;
  s21_nonEmptyList.push_back('a');
  std_nonEmptyList.push_back('a');
  EXPECT_TRUE(s21_nonEmptyList.size() == std_nonEmptyList.size());
}

TEST(Capacity, SizeCompareBackStr) {
  s21::list<std::string> s21_nonEmptyList;
  std::list<std::string> std_nonEmptyList;
  s21_nonEmptyList.push_back("ABCD");
  std_nonEmptyList.push_back("ABCD");
  EXPECT_TRUE(s21_nonEmptyList.size() == std_nonEmptyList.size());
}

TEST(Capacity, SizeCompareFrontInt) {
  s21::list<int> s21_nonEmptyList;
  std::list<int> std_nonEmptyList;
  s21_nonEmptyList.push_front(42);
  std_nonEmptyList.push_front(42);
  EXPECT_TRUE(s21_nonEmptyList.size() == std_nonEmptyList.size());
}

TEST(Capacity, SizeCompareFrontChar) {
  s21::list<char> s21_nonEmptyList;
  std::list<char> std_nonEmptyList;
  s21_nonEmptyList.push_front('a');
  std_nonEmptyList.push_front('a');
  EXPECT_TRUE(s21_nonEmptyList.size() == std_nonEmptyList.size());
}

TEST(Capacity, SizeCompareFrontStr) {
  s21::list<std::string> s21_nonEmptyList;
  std::list<std::string> std_nonEmptyList;
  s21_nonEmptyList.push_front("ABCD");
  std_nonEmptyList.push_front("ABCD");
  EXPECT_TRUE(s21_nonEmptyList.size() == std_nonEmptyList.size());
}
