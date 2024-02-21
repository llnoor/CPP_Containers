#include "unit_tests.h"

TEST(ListModifiersInsert, AddingToBeginCorrectInt) {
  int value = 10;
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {value, 1, 2, 3, 4, 5};

  test.insert(test.begin(), value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToBeginCorrectChar) {
  char value = 'Z';
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {value, 'a', 'b', 'c', 'd', 'e'};

  test.insert(test.begin(), value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToBeginCorrectStr) {
  std::string value = "awoo";
  s21::list<std::string> test = {"amogus", "sus", "aboba"};
  s21::list<std::string> compare = {value, "amogus", "sus", "aboba"};

  test.insert(test.begin(), value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToBeginCompareInt) {
  int value = 10;
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.insert(s21_test.begin(), value);
  std_test.insert(std_test.begin(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToBeginCompareChar) {
  char value = 'Z';
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.insert(s21_test.begin(), value);
  std_test.insert(std_test.begin(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToBeginCompareStr) {
  std::string value = "awoo";
  s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};
  std::list<std::string> std_test = {"amogus", "sus", "aboba"};

  s21_test.insert(s21_test.begin(), value);
  std_test.insert(std_test.begin(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToMiddleCorrectInt) {
  int value = 10;
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {1, 2, value, 3, 4, 5};

  test.insert(test.begin() + 2, value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToMiddleCorrectChar) {
  char value = 'Z';
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {'a', 'b', value, 'c', 'd', 'e'};

  test.insert(test.begin() + 2, value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToMiddleCorrectStr) {
  std::string value = "awoo";
  s21::list<std::string> test = {"amogus", "sus", "aboba"};
  s21::list<std::string> compare = {"amogus", "sus", value, "aboba"};

  test.insert(test.begin() + 2, value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToMiddleCompareInt) {
  int value = 10;
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.insert(++s21_test.begin(), value);
  std_test.insert(++std_test.begin(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToMiddleCompareChar) {
  char value = 'Z';
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.insert(++s21_test.begin(), value);
  std_test.insert(++std_test.begin(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToMiddleCompareStr) {
  std::string value = "awoo";
  s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};
  std::list<std::string> std_test = {"amogus", "sus", "aboba"};

  s21_test.insert(++s21_test.begin(), value);
  std_test.insert(++std_test.begin(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToEndCorrectInt) {
  int value = 10;
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {1, 2, 3, 4, 5, value};

  test.insert(test.end(), value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToEndCorrectChar) {
  char value = 'Z';
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {'a', 'b', 'c', 'd', 'e', value};

  test.insert(test.end(), value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToEndCorrectStr) {
  std::string value = "awoo";
  s21::list<std::string> test = {"amogus", "sus", "aboba"};
  s21::list<std::string> compare = {"amogus", "sus", "aboba", value};

  test.insert(test.end(), value);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsert, AddingToEndCompareInt) {
  int value = 10;
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.insert(s21_test.end(), value);
  std_test.insert(std_test.end(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToEndCompareChar) {
  char value = 'Z';
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.insert(s21_test.end(), value);
  std_test.insert(std_test.end(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToEndCompareStr) {
  std::string value = "awoo";
  s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};
  std::list<std::string> std_test = {"amogus", "sus", "aboba"};

  s21_test.insert(s21_test.end(), value);
  std_test.insert(std_test.end(), value);
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListModifiersInsert, AddingToEmptyCorrectInt) {
  int value = 10;
  s21::list<int> test;
  test.insert(test.begin(), value);
  EXPECT_TRUE(test.size() == 1);
  auto it = test.begin();
  EXPECT_TRUE(*it == value);
}

TEST(ListModifiersInsert, AddingToEmptyCorrectChar) {
  char value = 'A';
  s21::list<char> test;
  test.insert(test.begin(), value);
  EXPECT_TRUE(test.size() == 1);
  auto it = test.begin();
  EXPECT_TRUE(*it == value);
}

TEST(ListModifiersInsert, AddingToEmptyCorrectStr) {
  std::string value = "test";
  s21::list<std::string> test;
  test.insert(test.begin(), value);
  EXPECT_TRUE(test.size() == 1);
  auto it = test.begin();
  EXPECT_TRUE(*it == value);
}

TEST(ListModifiersInsert, AddingToEmptyCompareInt) {
  int value = 10;
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.insert(s21_test.begin(), value);
  std_test.insert(std_test.begin(), value);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListModifiersInsert, AddingToEmptyCompareChar) {
  char value = 'A';
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.insert(s21_test.begin(), value);
  std_test.insert(std_test.begin(), value);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListModifiersInsert, AddingToEmptyCompareStr) {
  std::string value = "test";
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.insert(s21_test.begin(), value);
  std_test.insert(std_test.begin(), value);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}
