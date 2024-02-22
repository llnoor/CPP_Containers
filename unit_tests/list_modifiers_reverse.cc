#include "unit_tests.h"

TEST(ListModifiersReverse, IntCorrect) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {5, 4, 3, 2, 1};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, CharCorrect) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {'e', 'd', 'c', 'b', 'a'};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, StrCorrect) {
  s21::list<std::string> test = {"aboba", "sus", "sugoma", "ligma", "yeet"};
  s21::list<std::string> compare = {"yeet", "ligma", "sugoma", "sus", "aboba"};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, IntCompare) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, CharCompare) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, StrCompare) {
  s21::list<std::string> s21_test = {"aboba", "sus", "sugoma", "ligma", "yeet"};
  std::list<std::string> std_test = {"aboba", "sus", "sugoma", "ligma", "yeet"};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, IntOneCorrect) {
  s21::list<int> test = {1};
  s21::list<int> compare = {1};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, CharOneCorrect) {
  s21::list<char> test = {'a'};
  s21::list<char> compare = {'a'};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, StrOneCorrect) {
  s21::list<std::string> test = {"aboba"};
  s21::list<std::string> compare = {"aboba"};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, IntOneCompare) {
  s21::list<int> s21_test = {1};
  std::list<int> std_test = {1};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, CharOneCompare) {
  s21::list<char> s21_test = {'a'};
  std::list<char> std_test = {'a'};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, StrOneCompare) {
  s21::list<std::string> s21_test = {"aboba"};
  std::list<std::string> std_test = {"aboba"};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, IntTwoCorrect) {
  s21::list<int> test = {1, 2};
  s21::list<int> compare = {2, 1};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, CharTwoCorrect) {
  s21::list<char> test = {'a', 'z'};
  s21::list<char> compare = {'z', 'a'};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, StrTwoCorrect) {
  s21::list<std::string> test = {"among", "us"};
  s21::list<std::string> compare = {"us", "among"};
  test.reverse();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersReverse, IntTwoCompare) {
  s21::list<int> s21_test = {1, 2};
  std::list<int> std_test = {1, 2};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, CharTwoCompare) {
  s21::list<char> s21_test = {'a', 'b'};
  std::list<char> std_test = {'a', 'b'};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersReverse, StrTwoCompare) {
  s21::list<std::string> s21_test = {"among", "us"};
  std::list<std::string> std_test = {"among", "us"};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}
