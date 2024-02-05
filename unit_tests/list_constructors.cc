#include "unit_tests.h"

TEST(Constructor, DefaultCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(Constructor, DefaultCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(Constructor, DefaultCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(Constructor, DefaultCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(Constructor, DefaultCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(Constructor, DefaultCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

/* parameterized */
// there is no any error message shown in original stl constructor when n is negative
// but i want to implement it yet i don't know how

TEST(Constructor, ParameterizedCorrectInt) {
  const size_t val = 5;
  s21::list<int> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectChar) {
  const size_t val = 5;
  s21::list<char> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectStr) {
  const size_t val = 5;
  s21::list<std::string> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectZeroInt) {
  const size_t val = 0;
  s21::list<int> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectZeroChar) {
  const size_t val = 0;
  s21::list<char> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectZeroStr) {
  const size_t val = 0;
  s21::list<std::string> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCompareInt) {
  const size_t val = 5;
  s21::list<int> s21_test(val);
  std::list<int> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareChar) {
  const size_t val = 5;
  s21::list<char> s21_test(val);
  std::list<char> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareStr) {
  const size_t val = 5;
  s21::list<std::string> s21_test(val);
  std::list<std::string> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareZeroInt) {
  const size_t val = 0;
  s21::list<int> s21_test(val);
  std::list<int> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareZeroChar) {
  const size_t val = 0;
  s21::list<char> s21_test(val);
  std::list<char> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareZeroStr) {
  const size_t val = 0;
  s21::list<std::string> s21_test(val);
  std::list<std::string> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

/* initializer list */

TEST(Constructor, InitListCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  EXPECT_TRUE(test.size() == 5);

  auto it = test.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 3);
  ++it;
  EXPECT_TRUE(*it == 4);
  ++it;
  EXPECT_TRUE(*it == 5);
}

TEST(Constructor, InitListCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(test.size() == 5);

  auto it = test.begin();
  EXPECT_TRUE(*it == 'a');
  ++it;
  EXPECT_TRUE(*it == 'b');
  ++it;
  EXPECT_TRUE(*it == 'c');
  ++it;
  EXPECT_TRUE(*it == 'd');
  ++it;
  EXPECT_TRUE(*it == 'e');
}

TEST(Constructor, InitListCorrectStr) {
  s21::list<std::string> test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  EXPECT_TRUE(test.size() == 5);

  auto it = test.begin();
  EXPECT_TRUE(*it == "aboba");
  ++it;
  EXPECT_TRUE(*it == "sus");
  ++it;
  EXPECT_TRUE(*it == "amogus");
  ++it;
  EXPECT_TRUE(*it == "LOL");
  ++it;
  EXPECT_TRUE(*it == "KEK");
}

TEST(Constructor, InitListCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(Constructor, InitListCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(Constructor, InitListCompareString) {
  s21::list<std::string> s21_test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  std::list<std::string> std_test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(Constructor, InitListCorrectTwoInt) {
  s21::list<int> test = {42, 99};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 42);
  EXPECT_TRUE(test.back() == 99);
}

TEST(Constructor, InitListCorrectTwoChar) {
  s21::list<char> test = {'a', 'z'};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 'a');
  EXPECT_TRUE(test.back() == 'z');
}

TEST(Constructor, InitListCorrectTwoStr) {
  s21::list<std::string> test = {"sussy", "Baka"};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == "sussy");
  EXPECT_TRUE(test.back() == "Baka");
}

TEST(Constructor, InitListCompareTwoInt) {
  s21::list<int> s21_test = {42, 99};
  std::list<int> std_test = {42, 99};
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(Constructor, InitListCompareTwoChar) {
  s21::list<char> s21_test = {'a', 'z'};
  std::list<char> std_test = {'a', 'z'};
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(Constructor, InitListCompareTwoStr) {
  s21::list<std::string> s21_test = {"sussy", "Baka"};
  std::list<std::string> std_test = {"sussy", "Baka"};
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}
