#include "unit_tests.h"

TEST(ModifiersPush, PushBackSizeCorrectInt) {
  s21::list<int> test;
  test.push_back(0);
  test.push_back(1);
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushBackSizeCorrectChar) {
  s21::list<char> test;
  test.push_back('a');
  test.push_back('z');
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushBackSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_back("sussy baka");
  test.push_back("amogus");
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushFrontSizeCorrectInt) {
  s21::list<int> test;
  test.push_front(0);
  test.push_front(1);
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushFrontSizeCorrectChar) {
  s21::list<char> test;
  test.push_front('a');
  test.push_front('z');
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushFrontSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_front("among us");
  test.push_front("IMPOSTER");
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushBackCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_back(0);
  std_test.push_back(0);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back(1);
  std_test.push_back(1);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back(2);
  std_test.push_back(2);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushBackCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_back('a');
  std_test.push_back('a');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back('F');
  std_test.push_back('F');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back('z');
  std_test.push_back('z');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushBackCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_back("aboba");
  std_test.push_back("aboba");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back("LUPA");
  std_test.push_back("LUPA");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back("Pupa");
  std_test.push_back("Pupa");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushFrontCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_front(0);
  std_test.push_front(0);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front(1);
  std_test.push_front(1);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front(2);
  std_test.push_front(2);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushFrontCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_front('a');
  std_test.push_front('a');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front('F');
  std_test.push_front('F');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front('z');
  std_test.push_front('z');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushFrontCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_front("LOL");
  std_test.push_front("LOL");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front("kek");
  std_test.push_front("kek");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front("Chebureck");
  std_test.push_front("Chebureck");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPop, PopFrontSizeCorrectInt) {
  s21::list<int> test;
  test.push_front(0);
  test.pop_front();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopFrontSizeCorrectChar) {
  s21::list<char> test;
  test.push_front('a');
  test.pop_front();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopFrontSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_front("yeet");
  test.pop_front();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopBackSizeCorrectInt) {
  s21::list<int> test;
  test.push_back(0);
  test.pop_back();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopBackSizeCorrectChar) {
  s21::list<char> test;
  test.push_back('a');
  test.pop_back();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopBackSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_back("yeet");
  test.pop_back();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopFrontSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_front(0);
  s21_test.pop_front();
  std_test.push_front(0);
  std_test.pop_front();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopFrontSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_front('a');
  s21_test.pop_front();
  std_test.push_front('a');
  std_test.pop_front();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopFrontSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_front("vfr");
  s21_test.pop_front();
  std_test.push_front("vfr");
  std_test.pop_front();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopBackSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_back(0);
  s21_test.pop_back();
  std_test.push_back(0);
  std_test.pop_back();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopBackSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_back('a');
  s21_test.pop_back();
  std_test.push_back('a');
  std_test.pop_back();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopBackSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_back("qaz");
  s21_test.pop_back();
  std_test.push_back("qaz");
  std_test.pop_back();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
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