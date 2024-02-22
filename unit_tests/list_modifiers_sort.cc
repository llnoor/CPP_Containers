#include "unit_tests.h"

TEST(ListModifiersSort, MultipleUniqueElementsCorrectInt) {
  s21::list<int> test = {5, 3, 2, 4, 1};
  s21::list<int> result = {1, 2, 3, 4, 5};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleUniqueElementsCorrectChar) {
  s21::list<char> test = {'d', 'a', 'c', 'b', 'e'};
  s21::list<char> result = {'a', 'b', 'c', 'd', 'e'};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleUniqueElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  s21::list<std::string> result = {"!!!", "123", "ABOBA", "amogus", "sus"};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleUniqueElementsCompareInt) {
  s21::list<int> s21_test = {5, 3, 2, 4, 1};
  std::list<int> std_test = {5, 3, 2, 4, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleUniqueElementsCompareChar) {
  s21::list<char> s21_test = {'d', 'a', 'c', 'b', 'e'};
  std::list<char> std_test = {'d', 'a', 'c', 'b', 'e'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleUniqueElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  std::list<std::string> std_test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleSameElementsCorrectInt) {
  s21::list<int> test = {4, 1, 2, 4, 1};
  s21::list<int> result = {1, 1, 2, 4, 4};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleSameElementsCorrectChar) {
  s21::list<char> test = {'d', 'a', 'b', 'd', 'a'};
  s21::list<char> result = {'a', 'a', 'b', 'd', 'd'};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleSameElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  s21::list<std::string> result = {"ABOBA", "amogus", "amogus", "sus", "sus"};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleSameElementsCompareInt) {
  s21::list<int> s21_test = {4, 1, 2, 4, 1};
  std::list<int> std_test = {4, 1, 2, 4, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleSameElementsCompareChar) {
  s21::list<char> s21_test = {'d', 'a', 'b', 'd', 'a'};
  std::list<char> std_test = {'d', 'a', 'b', 'd', 'a'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleSameElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  std::list<std::string> std_test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleAlreadySortedCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> result = {1, 2, 3, 4, 5};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleAlreadySortedCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> result = {'a', 'b', 'c', 'd', 'e'};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleAlreadySortedCorrectStr) {
  s21::list<std::string> test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  s21::list<std::string> result = {"!!!", "123", "ABOBA", "amogus", "sus"};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, MultipleAlreadySortedCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleAlreadySortedCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, MultipleAlreadySortedCompareStr) {
  s21::list<std::string> s21_test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  std::list<std::string> std_test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, TwoUniqueElementsCorrectInt) {
  s21::list<int> test = {2, 1};
  s21::list<int> result = {1, 2};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, TwoUniqueElementsCorrectChar) {
  s21::list<char> test = {'Z', 'A'};
  s21::list<char> result = {'A', 'Z'};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, TwoUniqueElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> result = {"amogus", "sus"};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, TwoUniqueElementsCompareInt) {
  s21::list<int> s21_test = {2, 1};
  std::list<int> std_test = {2, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, TwoUniqueElementsCompareChar) {
  s21::list<char> s21_test = {'Z', 'A'};
  std::list<char> std_test = {'Z', 'A'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, TwoUniqueElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus"};
  std::list<std::string> std_test = {"sus", "amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, TwoAlreadySortedCorrectInt) {
  s21::list<int> test = {1, 2};
  s21::list<int> result = {1, 2};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, TwoAlreadySortedCorrectChar) {
  s21::list<char> test = {'A', 'Z'};
  s21::list<char> result = {'A', 'Z'};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, TwoAlreadySortedCorrectStr) {
  s21::list<std::string> test = {"amogus", "sus"};
  s21::list<std::string> result = {"amogus", "sus"};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, TwoAlreadySortedCompareInt) {
  s21::list<int> s21_test = {1, 2};
  std::list<int> std_test = {1, 2};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, TwoAlreadySortedCompareChar) {
  s21::list<char> s21_test = {'A', 'Z'};
  std::list<char> std_test = {'A', 'Z'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, TwoAlreadySortedCompareStr) {
  s21::list<std::string> s21_test = {"amogus", "sus"};
  std::list<std::string> std_test = {"amogus", "sus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, OneElementCorrectInt) {
  s21::list<int> test = {1};
  s21::list<int> result = {1};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, OneElementCorrectChar) {
  s21::list<char> test = {'A'};
  s21::list<char> result = {'A'};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, OneElementCorrectStr) {
  s21::list<std::string> test = {"amogus"};
  s21::list<std::string> result = {"amogus"};
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, OneElementCompareInt) {
  s21::list<int> s21_test = {1};
  std::list<int> std_test = {1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, OneElementCompareChar) {
  s21::list<char> s21_test = {'A'};
  std::list<char> std_test = {'A'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, OneElementCompareStr) {
  s21::list<std::string> s21_test = {"amogus"};
  std::list<std::string> std_test = {"amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, EmptyCorrectInt) {
  s21::list<int> test;
  s21::list<int> result;
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, EmptyCorrectChar) {
  s21::list<char> test;
  s21::list<char> result;
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, EmptyCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> result;
  test.sort();
  EXPECT_TRUE(EqualLists(test, result));
}

TEST(ListModifiersSort, EmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, EmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersSort, EmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}
