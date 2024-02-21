#include "unit_tests.h"

TEST(ListModifiersInsertMany, AddingToBeginCorrectInt) {
  s21::list<int> test = {1, 2, 3};
  s21::list<int> compare = {4, 5, 6, 1, 2, 3};
  test.insert_many(test.cbegin(), 4, 5, 6);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToBeginCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c'};
  s21::list<char> compare = {'d', 'e', 'f', 'a', 'b', 'c'};
  test.insert_many(test.cbegin(), 'd', 'e', 'f');
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToBeginCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> compare = {"aboba", "imposter", "sus", "amogus"};
  test.insert_many(test.cbegin(), "aboba", "imposter");
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEndCorrectInt) {
  s21::list<int> test = {1, 2, 3};
  s21::list<int> compare = {1, 2, 3, 4, 5, 6};
  test.insert_many(test.cend(), 4, 5, 6);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEndCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c'};
  s21::list<char> compare = {'a', 'b', 'c', 'd', 'e', 'f'};
  test.insert_many(test.cend(), 'd', 'e', 'f');
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEndCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> compare = {"sus", "amogus", "aboba", "imposter"};
  test.insert_many(test.cend(), "aboba", "imposter");
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToMiddleCorrectInt) {
  s21::list<int> test = {1, 2, 3};
  s21::list<int> compare = {1, 4, 5, 6, 2, 3};
  test.insert_many(++test.cbegin(), 4, 5, 6);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToMiddleCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c'};
  s21::list<char> compare = {'a', 'd', 'e', 'f', 'b', 'c'};
  test.insert_many(++test.cbegin(), 'd', 'e', 'f');
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToMiddleCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> compare = {"sus", "aboba", "imposter", "amogus"};
  test.insert_many(++test.cbegin(), "aboba", "imposter");
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEmptyBeginCorrectInt) {
  s21::list<int> test;
  s21::list<int> compare{4, 5, 6};
  test.insert_many(test.cbegin(), 4, 5, 6);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEmptyBeginCorrectChar) {
  s21::list<int> test;
  s21::list<int> compare{'d', 'e', 'f'};
  test.insert_many(test.cbegin(), 'd', 'e', 'f');
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEmptyBeginCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> compare{"aboba", "imposter"};
  test.insert_many(test.cbegin(), "aboba", "imposter");
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEmptyEndCorrectInt) {
  s21::list<int> test;
  s21::list<int> compare{4, 5, 6};
  test.insert_many(test.cend(), 4, 5, 6);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEmptyEndCorrectChar) {
  s21::list<int> test;
  s21::list<int> compare{'d', 'e', 'f'};
  test.insert_many(test.cend(), 'd', 'e', 'f');
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingToEmptyEndCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> compare{"aboba", "imposter"};
  test.insert_many(test.cend(), "aboba", "imposter");
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingNoElementsInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare(test);
  test.insert_many(test.cbegin());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingNoElementsChar) {
  s21::list<char> test{'a', 'b', 'c'};
  s21::list<char> compare(test);
  test.insert_many(test.cbegin());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingNoElementsStr) {
  s21::list<std::string> test{"sus", "amogus"};
  s21::list<std::string> compare(test);
  test.insert_many(test.cbegin());
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ListModifiersInsertMany, AddingEmptyToEmptyInt) {
  s21::list<int> test;
  s21::list<int> compare(test);
  test.insert_many(test.cbegin());
  EXPECT_TRUE(equalLists(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersInsertMany, AddingEmptyToEmptyChar) {
  s21::list<char> test;
  s21::list<char> compare(test);
  test.insert_many(test.cbegin());
  EXPECT_TRUE(equalLists(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersInsertMany, AddingEmptyToEmptyStr) {
  s21::list<std::string> test;
  s21::list<std::string> compare(test);
  test.insert_many(test.cbegin());
  EXPECT_TRUE(equalLists(test, compare));
  EXPECT_TRUE(test.empty());
}

// no stl analogues to compare
