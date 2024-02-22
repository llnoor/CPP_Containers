#include "unit_tests.h"

TEST(ListModifiersInsertManyBack, CorrectInt) {
  s21::list<int> test = {1, 2, 3};
  s21::list<int> compare = {1, 2, 3, 4, 5, 6};
  test.insert_many_back(4, 5, 6);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, CorrectChar) {
  s21::list<char> test = {'a', 'b', 'c'};
  s21::list<char> compare = {'a', 'b', 'c', 'd', 'e', 'f'};
  test.insert_many_back('d', 'e', 'f');
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, CorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> compare = {"sus", "amogus", "aboba", "imposter"};
  test.insert_many_back("aboba", "imposter");
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, AddingToEmptyCorrectInt) {
  s21::list<int> test;
  s21::list<int> compare{4, 5, 6};
  test.insert_many_back(4, 5, 6);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, AddingToEmptyCorrectChar) {
  s21::list<int> test;
  s21::list<int> compare{'d', 'e', 'f'};
  test.insert_many_back('d', 'e', 'f');
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, AddingToEmptyCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> compare{"aboba", "imposter"};
  test.insert_many_back("aboba", "imposter");
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, AddingNoElementsInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, AddingNoElementsChar) {
  s21::list<char> test{'a', 'b', 'c'};
  s21::list<char> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, AddingNoElementsStr) {
  s21::list<std::string> test{"sus", "amogus"};
  s21::list<std::string> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyBack, AddingEmptyToEmptyInt) {
  s21::list<int> test;
  s21::list<int> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(EqualLists(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersInsertManyBack, AddingEmptyToEmptyChar) {
  s21::list<char> test;
  s21::list<char> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(EqualLists(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersInsertManyBack, AddingEmptyToEmptyStr) {
  s21::list<std::string> test;
  s21::list<std::string> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(EqualLists(test, compare));
  EXPECT_TRUE(test.empty());
}
