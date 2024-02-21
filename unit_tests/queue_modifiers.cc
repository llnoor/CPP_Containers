#include "unit_tests.h"

/* push */

TEST(QueueModifiers, PushSizeCorrectInt) {
  s21::queue<int> test;
  s21::queue<int> compare{0, 1};
  test.push(0);
  test.push(1);
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, PushSizeCorrectChar) {
  s21::queue<char> test;
  s21::queue<char> compare{'a', 'z'};
  test.push('a');
  test.push('z');
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, PushSizeCorrectStr) {
  s21::queue<std::string> test;
  s21::queue<std::string> compare{"sussy baka", "amogus"};
  test.push("sussy baka");
  test.push("amogus");
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, PushCompareInt) {
  s21::queue<int> s21_test;
  std::queue<int> std_test;
  s21_test.push(0);
  std_test.push(0);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  s21_test.push(1);
  std_test.push(1);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  s21_test.push(2);
  std_test.push(2);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PushCompareChar) {
  s21::queue<char> s21_test;
  std::queue<char> std_test;
  s21_test.push('a');
  std_test.push('a');
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  s21_test.push('F');
  std_test.push('F');
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  s21_test.push('z');
  std_test.push('z');
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PushCompareStr) {
  s21::queue<std::string> s21_test;
  std::queue<std::string> std_test;
  s21_test.push("aboba");
  std_test.push("aboba");
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  s21_test.push("LUPA");
  std_test.push("LUPA");
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  s21_test.push("Pupa");
  std_test.push("Pupa");
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

/* pop */

TEST(QueueModifiers, PopOneCorrectInt) {
  s21::queue<int> test{0};
  test.pop();
  EXPECT_TRUE(test.empty());
}

TEST(QueueModifiers, PopOneCorrectChar) {
  s21::queue<char> test{'a'};
  test.pop();
  EXPECT_TRUE(test.empty());
}

TEST(QueueModifiers, PopOneCorrectStr) {
  s21::queue<std::string> test{"yeet"};
  test.pop();
  EXPECT_TRUE(test.empty());
}

TEST(QueueModifiers, PopOneCompareInt) {
  s21::queue<int> s21_test{0};
  std::queue<int> std_test;
  std_test.push(0);
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PopOneCompareChar) {
  s21::queue<char> s21_test{'a'};
  std::queue<char> std_test;
  std_test.push('a');
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PopOneCompareStr) {
  s21::queue<std::string> s21_test{"vfr"};
  std::queue<std::string> std_test;
  std_test.push("vfr");
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PopCorrectInt) {
  s21::queue<int> test{1, 2, 3};
  s21::queue<int> compare{2, 3};
  test.pop();
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, PopCorrectChar) {
  s21::queue<char> test{'X', 'Y', 'Z'};
  s21::queue<char> compare{'Y', 'Z'};
  test.pop();
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, PopCorrectStr) {
  s21::queue<std::string> test{"qaz", "wsx", "edc"};
  s21::queue<std::string> compare{"wsx", "edc"};
  test.pop();
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, PopCompareInt) {
  s21::queue<int> s21_test{1, 2, 3};
  std::queue<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PopCompareChar) {
  s21::queue<char> s21_test{'X', 'Y', 'Z'};
  std::queue<char> std_test;
  std_test.push('X');
  std_test.push('Y');
  std_test.push('Z');
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PopCompareStr) {
  s21::queue<std::string> s21_test{"qaz", "wsx", "edc"};
  std::queue<std::string> std_test;
  std_test.push("qaz");
  std_test.push("wsx");
  std_test.push("edc");
  s21_test.pop();
  std_test.pop();
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueModifiers, PopEmptyCorrectInt) {
  s21::queue<int> test;
  s21::queue<int> copy(test);
  test.pop();
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueModifiers, PopEmptyCorrectChar) {
  s21::queue<char> test;
  s21::queue<char> copy(test);
  test.pop();
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueModifiers, PopEmptyCorrectStr) {
  s21::queue<std::string> test;
  s21::queue<std::string> copy(test);
  test.pop();
  EXPECT_TRUE(equalQueues(test, copy));
}

/* insert_many_back */

TEST(QueueModifiers, InsertManyBackCorrectInt) {
  s21::queue<int> test = {1, 2, 3};
  s21::queue<int> compare = {1, 2, 3, 4, 5, 6};
  test.insert_many_back(4, 5, 6);
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackCorrectChar) {
  s21::queue<char> test = {'a', 'b', 'c'};
  s21::queue<char> compare = {'a', 'b', 'c', 'd', 'e', 'f'};
  test.insert_many_back('d', 'e', 'f');
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackCorrectStr) {
  s21::queue<std::string> test = {"sus", "amogus"};
  s21::queue<std::string> compare = {"sus", "amogus", "aboba", "imposter"};
  test.insert_many_back("aboba", "imposter");
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackToEmptyCorrectInt) {
  s21::queue<int> test;
  s21::queue<int> compare{4, 5, 6};
  test.insert_many_back(4, 5, 6);
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackToEmptyCorrectChar) {
  s21::queue<int> test;
  s21::queue<int> compare{'d', 'e', 'f'};
  test.insert_many_back('d', 'e', 'f');
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackToEmptyCorrectStr) {
  s21::queue<std::string> test;
  s21::queue<std::string> compare{"aboba", "imposter"};
  test.insert_many_back("aboba", "imposter");
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackNoElementsInt) {
  s21::queue<int> test{1, 2, 3};
  s21::queue<int> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackNoElementsChar) {
  s21::queue<char> test{'a', 'b', 'c'};
  s21::queue<char> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackNoElementsStr) {
  s21::queue<std::string> test{"sus", "amogus"};
  s21::queue<std::string> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(equalQueues(test, compare));
}

TEST(QueueModifiers, InsertManyBackEmptyToEmptyInt) {
  s21::queue<int> test;
  s21::queue<int> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(equalQueues(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(QueueModifiers, InsertManyBackEmptyToEmptyChar) {
  s21::queue<char> test;
  s21::queue<char> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(equalQueues(test, compare));
  EXPECT_TRUE(test.empty());
}

TEST(QueueModifiers, InsertManyBackEmptyToEmptyStr) {
  s21::queue<std::string> test;
  s21::queue<std::string> compare(test);
  test.insert_many_back();
  EXPECT_TRUE(equalQueues(test, compare));
  EXPECT_TRUE(test.empty());
}
