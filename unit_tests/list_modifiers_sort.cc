#include "unit_tests.h"

TEST(ModifiersSort, MultipleUniqueElementsCorrectInt) {
  s21::list<int> test = {5, 3, 2, 4, 1};
  s21::list<int> result = {1, 2, 3, 4, 5};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleUniqueElementsCorrectChar) {
  s21::list<char> test = {'d', 'a', 'c', 'b', 'e'};
  s21::list<char> result = {'a', 'b', 'c', 'd', 'e'};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleUniqueElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  s21::list<std::string> result = {"!!!", "123", "ABOBA", "amogus", "sus"};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleUniqueElementsCompareInt) {
  s21::list<int> s21_test = {5, 3, 2, 4, 1};
  std::list<int> std_test = {5, 3, 2, 4, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleUniqueElementsCompareChar) {
  s21::list<char> s21_test = {'d', 'a', 'c', 'b', 'e'};
  std::list<char> std_test = {'d', 'a', 'c', 'b', 'e'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleUniqueElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  std::list<std::string> std_test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleSameElementsCorrectInt) {
  s21::list<int> test = {4, 1, 2, 4, 1};
  s21::list<int> result = {1, 1, 2, 4, 4};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleSameElementsCorrectChar) {
  s21::list<char> test = {'d', 'a', 'b', 'd', 'a'};
  s21::list<char> result = {'a', 'a', 'b', 'd', 'd'};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleSameElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  s21::list<std::string> result = {"ABOBA", "amogus", "amogus", "sus", "sus"};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleSameElementsCompareInt) {
  s21::list<int> s21_test = {4, 1, 2, 4, 1};
  std::list<int> std_test = {4, 1, 2, 4, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleSameElementsCompareChar) {
  s21::list<char> s21_test = {'d', 'a', 'b', 'd', 'a'};
  std::list<char> std_test = {'d', 'a', 'b', 'd', 'a'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleSameElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  std::list<std::string> std_test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleAlreadySortedCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> result = {1, 2, 3, 4, 5};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleAlreadySortedCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> result = {'a', 'b', 'c', 'd', 'e'};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleAlreadySortedCorrectStr) {
  s21::list<std::string> test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  s21::list<std::string> result = {"!!!", "123", "ABOBA", "amogus", "sus"};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, MultipleAlreadySortedCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleAlreadySortedCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, MultipleAlreadySortedCompareStr) {
  s21::list<std::string> s21_test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  std::list<std::string> std_test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, TwoUniqueElementsCorrectInt) {
  s21::list<int> test = {2, 1};
  s21::list<int> result = {1, 2};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, TwoUniqueElementsCorrectChar) {
  s21::list<char> test = {'Z', 'A'};
  s21::list<char> result = {'A', 'Z'};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, TwoUniqueElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> result = {"amogus", "sus"};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, TwoUniqueElementsCompareInt) {
  s21::list<int> s21_test = {2, 1};
  std::list<int> std_test = {2, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, TwoUniqueElementsCompareChar) {
  s21::list<char> s21_test = {'Z', 'A'};
  std::list<char> std_test = {'Z', 'A'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, TwoUniqueElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus"};
  std::list<std::string> std_test = {"sus", "amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, TwoAlreadySortedCorrectInt) {
  s21::list<int> test = {1, 2};
  s21::list<int> result = {1, 2};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, TwoAlreadySortedCorrectChar) {
  s21::list<char> test = {'A', 'Z'};
  s21::list<char> result = {'A', 'Z'};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, TwoAlreadySortedCorrectStr) {
  s21::list<std::string> test = {"amogus", "sus"};
  s21::list<std::string> result = {"amogus", "sus"};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, TwoAlreadySortedCompareInt) {
  s21::list<int> s21_test = {1, 2};
  std::list<int> std_test = {1, 2};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, TwoAlreadySortedCompareChar) {
  s21::list<char> s21_test = {'A', 'Z'};
  std::list<char> std_test = {'A', 'Z'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, TwoAlreadySortedCompareStr) {
  s21::list<std::string> s21_test = {"amogus", "sus"};
  std::list<std::string> std_test = {"amogus", "sus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, OneElementCorrectInt) {
  s21::list<int> test = {1};
  s21::list<int> result = {1};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, OneElementCorrectChar) {
  s21::list<char> test = {'A'};
  s21::list<char> result = {'A'};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, OneElementCorrectStr) {
  s21::list<std::string> test = {"amogus"};
  s21::list<std::string> result = {"amogus"};
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, OneElementCompareInt) {
  s21::list<int> s21_test = {1};
  std::list<int> std_test = {1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, OneElementCompareChar) {
  s21::list<char> s21_test = {'A'};
  std::list<char> std_test = {'A'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, OneElementCompareStr) {
  s21::list<std::string> s21_test = {"amogus"};
  std::list<std::string> std_test = {"amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, EmptyCorrectInt) {
  s21::list<int> test;
  s21::list<int> result;
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, EmptyCorrectChar) {
  s21::list<char> test;
  s21::list<char> result;
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, EmptyCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> result;
  test.sort();
  EXPECT_TRUE(equalLists(test, result));
}

TEST(ModifiersSort, EmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, EmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersSort, EmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(equalLists(s21_test, std_test));
}
