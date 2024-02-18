#include "unit_tests.h"

TEST(ModifiersErase, DeletingFromBeginCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {2, 3, 4, 5};

  test.erase(test.begin());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromBeginCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {'b', 'c', 'd', 'e'};

  test.erase(test.begin());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromBeginCorrectStr) {
  s21::list<std::string> test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  s21::list<std::string> compare = {"abobus", "aboba", "amogus", "a mongoose"};

  test.erase(test.begin());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromBeginCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.erase(s21_test.begin());
  std_test.erase(std_test.begin());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromBeginCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.erase(s21_test.begin());
  std_test.erase(std_test.begin());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromBeginCompareStr) {
  s21::list<std::string> s21_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  std::list<std::string> std_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  s21_test.erase(s21_test.begin());
  std_test.erase(std_test.begin());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromMiddleCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {1, 2, 4, 5};

  test.erase(test.begin() + 2);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromMiddleCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {'a', 'b', 'd', 'e'};

  test.erase(test.begin() + 2);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromMiddleCorrectStr) {
  s21::list<std::string> test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  s21::list<std::string> compare = {"sus", "abobus", "amogus", "a mongoose"};

  test.erase(test.begin() + 2);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromMiddleCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.erase(++s21_test.begin());
  std_test.erase(++std_test.begin());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromMiddleCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.erase(++s21_test.begin());
  std_test.erase(++std_test.begin());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromMiddleCompareStr) {
  s21::list<std::string> s21_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  std::list<std::string> std_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  s21_test.erase(++s21_test.begin());
  std_test.erase(++std_test.begin());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromEndCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {1, 2, 3, 4};

  test.erase(test.end());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromEndCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {'a', 'b', 'c', 'd'};

  test.erase(test.end());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromEndCorrectStr) {
  s21::list<std::string> test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  s21::list<std::string> compare = {"sus", "abobus", "aboba", "amogus"};

  test.erase(test.end());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersErase, DeletingFromEndCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.erase(s21_test.end()); // same with --
  std_test.erase(--std_test.end()); // somnitelno no ok, without --: pointer being freed was not allocated
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromEndCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.erase(s21_test.end()); // same with --
  std_test.erase(--std_test.end()); // somnitelno no ok, without --: pointer being freed was not allocated
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersErase, DeletingFromEndCompareStr) {
  s21::list<std::string> s21_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  std::list<std::string> std_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  s21_test.erase(s21_test.end()); // same with --
  std_test.erase(--std_test.end()); // somnitelno no ok, without --: pointer being freed was not allocated
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

// cannot compare with stl 'cause it returns: "free(): invalid pointer"
TEST(ModifiersErase, DeletingFromEmptyBeginInt) {
  s21::list<int> test;
  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 0);
}

// cannot compare with stl 'cause it returns: "free(): invalid pointer"
TEST(ModifiersErase, DeletingFromEmptyEndInt) {
  s21::list<int> test;
  test.erase(test.end());
  EXPECT_TRUE(test.size() == 0);
}

// cannot compare with stl 'cause it returns: "free(): invalid pointer"
TEST(ModifiersErase, DeletingFromEmptyBeginChar) {
  s21::list<char> test;
  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 0);
}

// cannot compare with stl 'cause it returns: "free(): invalid pointer"
TEST(ModifiersErase, DeletingFromEmptyEndChar) {
  s21::list<char> test;
  test.erase(test.end());
  EXPECT_TRUE(test.size() == 0);
}

// cannot compare with stl 'cause it returns: "free(): invalid pointer"
TEST(ModifiersErase, DeletingFromEmptyBeginStr) {
  s21::list<std::string> test;
  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 0);
}

// cannot compare with stl 'cause it returns: "free(): invalid pointer"
TEST(ModifiersErase, DeletingFromEmptyEndStr) {
  s21::list<std::string> test;
  test.erase(test.end());
  EXPECT_TRUE(test.size() == 0);
}
