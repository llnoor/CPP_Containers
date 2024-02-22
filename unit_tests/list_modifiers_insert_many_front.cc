#include "unit_tests.h"

TEST(ListModifiersInsertManyFront, CorrectInt) {
  s21::list<int> test = {1, 2, 3};
  s21::list<int> compare = {4, 5, 6, 1, 2, 3};
  test.insert_many_front(4, 5, 6);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, CorrectChar) {
  s21::list<char> test = {'a', 'b', 'c'};
  s21::list<char> compare = {'d', 'e', 'f', 'a', 'b', 'c'};
  test.insert_many_front('d', 'e', 'f');
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, CorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> compare = {"aboba", "imposter", "sus", "amogus"};
  test.insert_many_front("aboba", "imposter");
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, AddingToEmptyCorrectInt) {
  s21::list<int> test;
  s21::list<int> compare{4, 5, 6};
  test.insert_many_front(4, 5, 6);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, AddingToEmptyCorrectChar) {
  s21::list<int> test;
  s21::list<int> compare{'d', 'e', 'f'};
  test.insert_many_front('d', 'e', 'f');
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, AddingToEmptyCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> compare{"aboba", "imposter"};
  test.insert_many_front("aboba", "imposter");
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, AddingNoElementsInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, AddingNoElementsChar) {
  s21::list<char> test{'a', 'b', 'c'};
  s21::list<char> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, AddingNoElementsStr) {
  s21::list<std::string> test{"sus", "amogus"};
  s21::list<std::string> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersInsertManyFront, AddingEmptyToEmptyInt) {
  s21::list<int> test;
  s21::list<int> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(EqualLists(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersInsertManyFront, AddingEmptyToEmptyChar) {
  s21::list<char> test;
  s21::list<char> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(EqualLists(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersInsertManyFront, AddingEmptyToEmptyStr) {
  s21::list<std::string> test;
  s21::list<std::string> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(EqualLists(test, compare));
  EXPECT_TRUE(test.empty());
}
