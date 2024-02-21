#include "unit_tests.h"

/* push */

TEST(StackModifiers, PushSizeCorrectInt) {
  s21::stack<int> test;
  s21::stack<int> compare{0, 1};
  test.push(0);
  test.push(1);
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, PushSizeCorrectChar) {
  s21::stack<char> test;
  s21::stack<char> compare{'a', 'z'};
  test.push('a');
  test.push('z');
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, PushSizeCorrectStr) {
  s21::stack<std::string> test;
  s21::stack<std::string> compare{"sussy baka", "amogus"};
  test.push("sussy baka");
  test.push("amogus");
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, PushCompareInt) {
  s21::stack<int> s21_test;
  std::stack<int> std_test;
  s21_test.push(0);
  std_test.push(0);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  s21_test.push(1);
  std_test.push(1);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  s21_test.push(2);
  std_test.push(2);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PushCompareChar) {
  s21::stack<char> s21_test;
  std::stack<char> std_test;
  s21_test.push('a');
  std_test.push('a');
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  s21_test.push('F');
  std_test.push('F');
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  s21_test.push('z');
  std_test.push('z');
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PushCompareStr) {
  s21::stack<std::string> s21_test;
  std::stack<std::string> std_test;
  s21_test.push("aboba");
  std_test.push("aboba");
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  s21_test.push("LUPA");
  std_test.push("LUPA");
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  s21_test.push("Pupa");
  std_test.push("Pupa");
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

/* pop */

TEST(StackModifiers, PopOneCorrectInt) {
  s21::stack<int> test{0};
  test.pop();
  EXPECT_TRUE(test.empty());
}

TEST(StackModifiers, PopOneCorrectChar) {
  s21::stack<char> test{'a'};
  test.pop();
  EXPECT_TRUE(test.empty());
}

TEST(StackModifiers, PopOneCorrectStr) {
  s21::stack<std::string> test{"yeet"};
  test.pop();
  EXPECT_TRUE(test.empty());
}

TEST(StackModifiers, PopOneCompareInt) {
  s21::stack<int> s21_test{0};
  std::stack<int> std_test;
  std_test.push(0);
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PopOneCompareChar) {
  s21::stack<char> s21_test{'a'};
  std::stack<char> std_test;
  std_test.push('a');
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PopOneCompareStr) {
  s21::stack<std::string> s21_test{"vfr"};
  std::stack<std::string> std_test;
  std_test.push("vfr");
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PopCorrectInt) {
  s21::stack<int> test{1, 2, 3};
  s21::stack<int> compare{1, 2};
  test.pop();
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, PopCorrectChar) {
  s21::stack<char> test{'X', 'Y', 'Z'};
  s21::stack<char> compare{'X', 'Y'};
  test.pop();
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, PopCorrectStr) {
  s21::stack<std::string> test{"qaz", "wsx", "edc"};
  s21::stack<std::string> compare{"qaz", "wsx"};
  test.pop();
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, PopCompareInt) {
  s21::stack<int> s21_test{1, 2, 3};
  std::stack<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PopCompareChar) {
  s21::stack<char> s21_test{'X', 'Y', 'Z'};
  std::stack<char> std_test;
  std_test.push('X');
  std_test.push('Y');
  std_test.push('Z');
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PopCompareStr) {
  s21::stack<std::string> s21_test{"qaz", "wsx", "edc"};
  std::stack<std::string> std_test;
  std_test.push("qaz");
  std_test.push("wsx");
  std_test.push("edc");
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackModifiers, PopEmptyCorrectInt) {
  s21::stack<int> test;
  s21::stack<int> copy(test);
  test.pop();
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackModifiers, PopEmptyCorrectChar) {
  s21::stack<char> test;
  s21::stack<char> copy(test);
  test.pop();
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackModifiers, PopEmptyCorrectStr) {
  s21::stack<std::string> test;
  s21::stack<std::string> copy(test);
  test.pop();
  EXPECT_TRUE(equalStacks(test, copy));
}

/* insert_many_front */

TEST(StackModifiers, InsertManyBackCorrectInt) {
  s21::stack<int> test = {1, 2, 3};
  s21::stack<int> compare = {1, 2, 3, 4, 5, 6};
  test.insert_many_front(4, 5, 6);
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackCorrectChar) {
  s21::stack<char> test = {'a', 'b', 'c'};
  s21::stack<char> compare = {'a', 'b', 'c', 'd', 'e', 'f'};
  test.insert_many_front('d', 'e', 'f');
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackCorrectStr) {
  s21::stack<std::string> test = {"sus", "amogus"};
  s21::stack<std::string> compare = {"sus", "amogus", "aboba", "imposter"};
  test.insert_many_front("aboba", "imposter");
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackToEmptyCorrectInt) {
  s21::stack<int> test;
  s21::stack<int> compare{4, 5, 6};
  test.insert_many_front(4, 5, 6);
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackToEmptyCorrectChar) {
  s21::stack<int> test;
  s21::stack<int> compare{'d', 'e', 'f'};
  test.insert_many_front('d', 'e', 'f');
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackToEmptyCorrectStr) {
  s21::stack<std::string> test;
  s21::stack<std::string> compare{"aboba", "imposter"};
  test.insert_many_front("aboba", "imposter");
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackNoElementsInt) {
  s21::stack<int> test{1, 2, 3};
  s21::stack<int> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackNoElementsChar) {
  s21::stack<char> test{'a', 'b', 'c'};
  s21::stack<char> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackNoElementsStr) {
  s21::stack<std::string> test{"sus", "amogus"};
  s21::stack<std::string> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(equalStacks(test, compare));
}

TEST(StackModifiers, InsertManyBackEmptyToEmptyInt) {
  s21::stack<int> test;
  s21::stack<int> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(equalStacks(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(StackModifiers, InsertManyBackEmptyToEmptyChar) {
  s21::stack<char> test;
  s21::stack<char> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(equalStacks(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(StackModifiers, InsertManyBackEmptyToEmptyStr) {
  s21::stack<std::string> test;
  s21::stack<std::string> compare(test);
  test.insert_many_front();
  EXPECT_TRUE(equalStacks(test, compare));
  EXPECT_TRUE(test.empty());
}
