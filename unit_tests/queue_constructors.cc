#include "unit_tests.h"

/* default */

TEST(QueueConstructors, DefaultCorrectInt) {
  s21::queue<int> test;
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(test.size() == 0);
}

TEST(QueueConstructors, DefaultCorrectChar) {
  s21::queue<char> test;
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(test.size() == 0);
}

TEST(QueueConstructors, DefaultCorrectStr) {
  s21::queue<std::string> test;
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(test.size() == 0);
}

TEST(QueueConstructors, DefaultCompareInt) {
  s21::queue<int> s21_test;
  std::queue<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueConstructors, DefaultCompareChar) {
  s21::queue<char> s21_test;
  std::queue<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(QueueConstructors, DefaultCompareStr) {
  s21::queue<std::string> s21_test;
  std::queue<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

/* initializer list */

TEST(QueueConstructors, InitListCorrectInt) {
  s21::queue<int> test{1, 2, 3, 4, 5};
  EXPECT_TRUE(test.size() == 5);
  int comp_value = 1;
  while (!test.empty()) {
    EXPECT_TRUE(test.front() == comp_value);
    test.pop();
    ++comp_value;
  }
}

TEST(QueueConstructors, InitListCorrectChar) {
  s21::queue<char> test{'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(test.size() == 5);
  char comp_value = 'a';
  while (!test.empty()) {
    EXPECT_TRUE(test.front() == comp_value);
    test.pop();
    ++comp_value;
  }
}

TEST(QueueConstructors, InitListCorrectStr) {
  s21::queue<std::string> test{"sus", "amogus", "aboba"};
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(test.front() == "sus");
  test.pop();
  EXPECT_TRUE(test.front() == "amogus");
  test.pop();
  EXPECT_TRUE(test.front() == "aboba");
}

TEST(QueueConstructors, InitListCompareInt) {
  s21::queue<int> s21_test = {1, 2, 3};
  std::queue<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueConstructors, InitListCompareChar) {
  s21::queue<char> s21_test = {'x', 'y', 'z'};
  std::queue<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueConstructors, InitListCompareStr) {
  s21::queue<std::string> s21_test = {"sus", "amogus", "aboba"};
  std::queue<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  EXPECT_TRUE(equalQueues(s21_test, std_test));
}

TEST(QueueConstructors, InitListCorrectTwoInt) {
  s21::queue<int> test{42, 99};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 42);
  EXPECT_TRUE(test.back() == 99);
}

TEST(QueueConstructors, InitListCorrectTwoChar) {
  s21::queue<char> test{'a', 'z'};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 'a');
  EXPECT_TRUE(test.back() == 'z');
}

TEST(QueueConstructors, InitListCorrectTwoStr) {
  s21::queue<std::string> test{"sussy", "Baka"};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == "sussy");
  EXPECT_TRUE(test.back() == "Baka");
}

TEST(QueueConstructors, InitListCompareTwoInt) {
  s21::queue<int> s21_test{42, 99};
  std::queue<int> std_test;
  std_test.push(42);
  std_test.push(99);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(QueueConstructors, InitListCompareTwoChar) {
  s21::queue<char> s21_test{'a', 'z'};
  std::queue<char> std_test;
  std_test.push('a');
  std_test.push('z');
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(QueueConstructors, InitListCompareTwoStr) {
  s21::queue<std::string> s21_test{"sussy", "Baka"};
  std::queue<std::string> std_test;
  std_test.push("sussy");
  std_test.push("Baka");
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

/* copy */

TEST(QueueConstructors, CopyInitListCorrectInt) {
  s21::queue<int> test{1, 2, 3, 4, 5};
  s21::queue<int> copy(test);
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueConstructors, CopyInitListCorrectChar) {
  s21::queue<char> test{'a', 'b', 'c', 'd', 'e'};
  s21::queue<char> copy(test);
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueConstructors, CopyInitListCorrectStr) {
  s21::queue<std::string> test{"sus", "amogus", "aboba"};
  s21::queue<std::string> copy(test);
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueConstructors, CopyInitListCompareInt) {
  s21::queue<int> s21_test{1, 2, 3};
  s21::queue<int> s21_copy(s21_test);
  std::queue<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  std::queue<int> std_copy(std_test);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_copy));
}

TEST(QueueConstructors, CopyInitListCompareChar) {
  s21::queue<char> s21_test{'x', 'y', 'z'};
  s21::queue<char> s21_copy(s21_test);
  std::queue<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  std::queue<char> std_copy(std_test);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_copy));
}

TEST(QueueConstructors, CopyInitListCompareStr) {
  s21::queue<std::string> s21_test{"sus", "amogus", "aboba"};
  s21::queue<std::string> s21_copy(s21_test);
  std::queue<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  std::queue<std::string> std_copy(std_test);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_copy));
}

TEST(QueueConstructors, CopyDefaultCorrectInt) {
  s21::queue<int> test;
  s21::queue<int> copy(test);
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueConstructors, CopyDefaultCorrectChar) {
  s21::queue<char> test;
  s21::queue<char> copy(test);
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueConstructors, CopyDefaultCorrectStr) {
  s21::queue<std::string> test;
  s21::queue<std::string> copy(test);
  EXPECT_TRUE(equalQueues(test, copy));
}

TEST(QueueConstructors, CopyDefaultCompareInt) {
  s21::queue<int> s21_test;
  s21::queue<int> s21_copy(s21_test);
  std::queue<int> std_test;
  std::queue<int> std_copy(std_test);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_copy));
}

TEST(QueueConstructors, CopyDefaultCompareChar) {
  s21::queue<char> s21_test;
  s21::queue<char> s21_copy(s21_test);
  std::queue<char> std_test;
  std::queue<char> std_copy(std_test);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_copy));
}

TEST(QueueConstructors, CopyDefaultCompareStr) {
  s21::queue<std::string> s21_test;
  s21::queue<std::string> s21_copy(s21_test);
  std::queue<std::string> std_test;
  std::queue<std::string> std_copy(std_test);
  EXPECT_TRUE(equalQueues(s21_test, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_test));
  EXPECT_TRUE(equalQueues(s21_copy, std_copy));
}

/* move */

TEST(QueueConstructors, MoveInitListCorrectInt) {
  s21::queue<int> test{1, 2, 3};
  s21::queue<int> compare(test);
  s21::queue<int> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalQueues(moved, compare));
}

TEST(QueueConstructors, MoveInitListCorrectChar) {
  s21::queue<char> test{'x', 'y', 'z'};
  s21::queue<char> compare(test);
  s21::queue<char> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalQueues(moved, compare));
}

TEST(QueueConstructors, MoveInitListCorrectStr) {
  s21::queue<std::string> test{"sus", "amogus", "aboba"};
  s21::queue<std::string> compare(test);
  s21::queue<std::string> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalQueues(moved, compare));
}

TEST(QueueConstructors, MoveInitListCompareInt) {
  s21::queue<int> s21_test{1, 2, 3};
  s21::queue<int> s21_moved(std::move(s21_test));
  std::queue<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  std::queue<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalQueues(s21_moved, std_moved));
}

TEST(QueueConstructors, MoveInitListCompareChar) {
  s21::queue<char> s21_test{'x', 'y', 'z'};
  s21::queue<char> s21_moved(std::move(s21_test));
  std::queue<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  std::queue<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalQueues(s21_moved, std_moved));
}

TEST(QueueConstructors, MoveInitListCompareStr) {
  s21::queue<std::string> s21_test{"sus", "amogus", "aboba"};
  s21::queue<std::string> s21_moved(std::move(s21_test));
  std::queue<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  std::queue<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalQueues(s21_moved, std_moved));
}

TEST(QueueConstructors, MoveDefaultCorrectInt) {
  s21::queue<int> test;
  s21::queue<int> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(QueueConstructors, MoveDefaultCorrectChar) {
  s21::queue<char> test;
  s21::queue<char> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(QueueConstructors, MoveDefaultCorrectStr) {
  s21::queue<std::string> test;
  s21::queue<std::string> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(QueueConstructors, MoveDefaultCompareInt) {
  s21::queue<int> s21_test;
  s21::queue<int> s21_moved(std::move(s21_test));
  std::queue<int> std_test;
  std::queue<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(QueueConstructors, MoveDefaultCompareChar) {
  s21::queue<char> s21_test;
  s21::queue<char> s21_moved(std::move(s21_test));
  std::queue<char> std_test;
  std::queue<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(QueueConstructors, MoveDefaultCompareStr) {
  s21::queue<std::string> s21_test;
  s21::queue<std::string> s21_moved(std::move(s21_test));
  std::queue<std::string> std_test;
  std::queue<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

/* assignment */

TEST(QueueConstructors, AssignmentInitListCorrectInt) {
  s21::queue<int> test{1, 2, 3};
  s21::queue<int> compare(test);
  s21::queue<int> moved = std::move(test);
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalQueues(moved, compare));
}

TEST(QueueConstructors, AssignmentInitListCorrectChar) {
  s21::queue<char> test{'x', 'y', 'z'};
  s21::queue<char> compare(test);
  s21::queue<char> moved = std::move(test);
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalQueues(moved, compare));
}

TEST(QueueConstructors, AssignmentInitListCorrectStr) {
  s21::queue<std::string> test{"sus", "amogus", "aboba"};
  s21::queue<std::string> compare(test);
  s21::queue<std::string> moved = std::move(test);
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalQueues(moved, compare));
}

TEST(QueueConstructors, AssignmentInitListCompareInt) {
  s21::queue<int> s21_test{1, 2, 3};
  s21::queue<int> s21_moved = std::move(s21_test);
  std::queue<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  std::queue<int> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalQueues(s21_moved, std_moved));
}

TEST(QueueConstructors, AssignmentInitListCompareChar) {
  s21::queue<char> s21_test{'x', 'y', 'z'};
  s21::queue<char> s21_moved = std::move(s21_test);
  std::queue<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  std::queue<char> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalQueues(s21_moved, std_moved));
}

TEST(QueueConstructors, AssignmentInitListCompareStr) {
  s21::queue<std::string> s21_test{"sus", "amogus", "aboba"};
  s21::queue<std::string> s21_moved = std::move(s21_test);
  std::queue<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  std::queue<std::string> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalQueues(s21_moved, std_moved));
}

TEST(QueueConstructors, AssignmentDefaultCorrectInt) {
  s21::queue<int> test;
  s21::queue<int> moved = std::move(test);
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(QueueConstructors, AssignmentDefaultCorrectChar) {
  s21::queue<char> test;
  s21::queue<char> moved = std::move(test);
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(QueueConstructors, AssignmentDefaultCorrectStr) {
  s21::queue<std::string> test;
  s21::queue<std::string> moved = std::move(test);
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(QueueConstructors, AssignmentDefaultCompareInt) {
  s21::queue<int> s21_test;
  s21::queue<int> s21_moved = std::move(s21_test);
  std::queue<int> std_test;
  std::queue<int> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(QueueConstructors, AssignmentDefaultCompareChar) {
  s21::queue<char> s21_test;
  s21::queue<char> s21_moved = std::move(s21_test);
  std::queue<char> std_test;
  std::queue<char> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(QueueConstructors, AssignmentDefaultCompareStr) {
  s21::queue<std::string> s21_test;
  s21::queue<std::string> s21_moved = std::move(s21_test);
  std::queue<std::string> std_test;
  std::queue<std::string> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}
