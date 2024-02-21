#include "unit_tests.h"

/* default */

TEST(StackConstructors, DefaultCorrectInt) {
  s21::stack<int> test;
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(test.size() == 0);
}

TEST(StackConstructors, DefaultCorrectChar) {
  s21::stack<char> test;
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(test.size() == 0);
}

TEST(StackConstructors, DefaultCorrectStr) {
  s21::stack<std::string> test;
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(test.size() == 0);
}

TEST(StackConstructors, DefaultCompareInt) {
  s21::stack<int> s21_test;
  std::stack<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackConstructors, DefaultCompareChar) {
  s21::stack<char> s21_test;
  std::stack<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(StackConstructors, DefaultCompareStr) {
  s21::stack<std::string> s21_test;
  std::stack<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

/* initializer list */

TEST(StackConstructors, InitListCorrectInt) {
  s21::stack<int> test{1, 2, 3, 4, 5};
  EXPECT_TRUE(test.size() == 5);
  int comp_value = 5;
  while (!test.empty()) {
    EXPECT_TRUE(test.top() == comp_value);
    test.pop();
    --comp_value;
  }
}

TEST(StackConstructors, InitListCorrectChar) {
  s21::stack<char> test{'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(test.size() == 5);
  char comp_value = 'e';
  while (!test.empty()) {
    EXPECT_TRUE(test.top() == comp_value);
    test.pop();
    --comp_value;
  }
}

TEST(StackConstructors, InitListCorrectStr) {
  s21::stack<std::string> test{"sus", "amogus", "aboba"};
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(test.top() == "aboba");
  test.pop();
  EXPECT_TRUE(test.top() == "amogus");
  test.pop();
  EXPECT_TRUE(test.top() == "sus");
}

TEST(StackConstructors, InitListCompareInt) {
  s21::stack<int> s21_test = {1, 2, 3};
  std::stack<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackConstructors, InitListCompareChar) {
  s21::stack<char> s21_test = {'x', 'y', 'z'};
  std::stack<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackConstructors, InitListCompareStr) {
  s21::stack<std::string> s21_test = {"sus", "amogus", "aboba"};
  std::stack<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  EXPECT_TRUE(equalStacks(s21_test, std_test));
}

TEST(StackConstructors, InitListCorrectOneInt) {
  s21::stack<int> test{42};
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.top() == 42);
}

TEST(StackConstructors, InitListCorrectOneChar) {
  s21::stack<char> test{'a'};
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.top() == 'a');
}

TEST(StackConstructors, InitListCorrectOneStr) {
  s21::stack<std::string> test{"sussy"};
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.top() == "sussy");
}

TEST(StackConstructors, InitListCompareOneInt) {
  s21::stack<int> s21_test{42};
  std::stack<int> std_test;
  std_test.push(42);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.top() == std_test.top());
}

TEST(StackConstructors, InitListCompareOneChar) {
  s21::stack<char> s21_test{'a'};
  std::stack<char> std_test;
  std_test.push('a');
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.top() == std_test.top());
}

TEST(StackConstructors, InitListCompareOneStr) {
  s21::stack<std::string> s21_test{"sussy"};
  std::stack<std::string> std_test;
  std_test.push("sussy");
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.top() == std_test.top());
}

/* copy */

TEST(StackConstructors, CopyInitListCorrectInt) {
  s21::stack<int> test{1, 2, 3, 4, 5};
  s21::stack<int> copy(test);
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackConstructors, CopyInitListCorrectChar) {
  s21::stack<char> test{'a', 'b', 'c', 'd', 'e'};
  s21::stack<char> copy(test);
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackConstructors, CopyInitListCorrectStr) {
  s21::stack<std::string> test{"sus", "amogus", "aboba"};
  s21::stack<std::string> copy(test);
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackConstructors, CopyInitListCompareInt) {
  s21::stack<int> s21_test{1, 2, 3};
  s21::stack<int> s21_copy(s21_test);
  std::stack<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  std::stack<int> std_copy(std_test);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_copy));
}

TEST(StackConstructors, CopyInitListCompareChar) {
  s21::stack<char> s21_test{'x', 'y', 'z'};
  s21::stack<char> s21_copy(s21_test);
  std::stack<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  std::stack<char> std_copy(std_test);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_copy));
}

TEST(StackConstructors, CopyInitListCompareStr) {
  s21::stack<std::string> s21_test{"sus", "amogus", "aboba"};
  s21::stack<std::string> s21_copy(s21_test);
  std::stack<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  std::stack<std::string> std_copy(std_test);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_copy));
}

TEST(StackConstructors, CopyDefaultCorrectInt) {
  s21::stack<int> test;
  s21::stack<int> copy(test);
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackConstructors, CopyDefaultCorrectChar) {
  s21::stack<char> test;
  s21::stack<char> copy(test);
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackConstructors, CopyDefaultCorrectStr) {
  s21::stack<std::string> test;
  s21::stack<std::string> copy(test);
  EXPECT_TRUE(equalStacks(test, copy));
}

TEST(StackConstructors, CopyDefaultCompareInt) {
  s21::stack<int> s21_test;
  s21::stack<int> s21_copy(s21_test);
  std::stack<int> std_test;
  std::stack<int> std_copy(std_test);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_copy));
}

TEST(StackConstructors, CopyDefaultCompareChar) {
  s21::stack<char> s21_test;
  s21::stack<char> s21_copy(s21_test);
  std::stack<char> std_test;
  std::stack<char> std_copy(std_test);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_copy));
}

TEST(StackConstructors, CopyDefaultCompareStr) {
  s21::stack<std::string> s21_test;
  s21::stack<std::string> s21_copy(s21_test);
  std::stack<std::string> std_test;
  std::stack<std::string> std_copy(std_test);
  EXPECT_TRUE(equalStacks(s21_test, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_test));
  EXPECT_TRUE(equalStacks(s21_copy, std_copy));
}

/* move */

TEST(StackConstructors, MoveInitListCorrectInt) {
  s21::stack<int> test{1, 2, 3};
  s21::stack<int> compare(test);
  s21::stack<int> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalStacks(moved, compare));
}

TEST(StackConstructors, MoveInitListCorrectChar) {
  s21::stack<char> test{'x', 'y', 'z'};
  s21::stack<char> compare(test);
  s21::stack<char> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalStacks(moved, compare));
}

TEST(StackConstructors, MoveInitListCorrectStr) {
  s21::stack<std::string> test{"sus", "amogus", "aboba"};
  s21::stack<std::string> compare(test);
  s21::stack<std::string> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalStacks(moved, compare));
}

TEST(StackConstructors, MoveInitListCompareInt) {
  s21::stack<int> s21_test{1, 2, 3};
  s21::stack<int> s21_moved(std::move(s21_test));
  std::stack<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  std::stack<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalStacks(s21_moved, std_moved));
}

TEST(StackConstructors, MoveInitListCompareChar) {
  s21::stack<char> s21_test{'x', 'y', 'z'};
  s21::stack<char> s21_moved(std::move(s21_test));
  std::stack<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  std::stack<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalStacks(s21_moved, std_moved));
}

TEST(StackConstructors, MoveInitListCompareStr) {
  s21::stack<std::string> s21_test{"sus", "amogus", "aboba"};
  s21::stack<std::string> s21_moved(std::move(s21_test));
  std::stack<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  std::stack<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalStacks(s21_moved, std_moved));
}

TEST(StackConstructors, MoveDefaultCorrectInt) {
  s21::stack<int> test;
  s21::stack<int> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(StackConstructors, MoveDefaultCorrectChar) {
  s21::stack<char> test;
  s21::stack<char> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(StackConstructors, MoveDefaultCorrectStr) {
  s21::stack<std::string> test;
  s21::stack<std::string> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(StackConstructors, MoveDefaultCompareInt) {
  s21::stack<int> s21_test;
  s21::stack<int> s21_moved(std::move(s21_test));
  std::stack<int> std_test;
  std::stack<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(StackConstructors, MoveDefaultCompareChar) {
  s21::stack<char> s21_test;
  s21::stack<char> s21_moved(std::move(s21_test));
  std::stack<char> std_test;
  std::stack<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(StackConstructors, MoveDefaultCompareStr) {
  s21::stack<std::string> s21_test;
  s21::stack<std::string> s21_moved(std::move(s21_test));
  std::stack<std::string> std_test;
  std::stack<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

/* assignment */

TEST(StackConstructors, AssignmentInitListCorrectInt) {
  s21::stack<int> test{1, 2, 3};
  s21::stack<int> compare(test);
  s21::stack<int> moved = std::move(test);
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalStacks(moved, compare));
}

TEST(StackConstructors, AssignmentInitListCorrectChar) {
  s21::stack<char> test{'x', 'y', 'z'};
  s21::stack<char> compare(test);
  s21::stack<char> moved = std::move(test);
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalStacks(moved, compare));
}

TEST(StackConstructors, AssignmentInitListCorrectStr) {
  s21::stack<std::string> test{"sus", "amogus", "aboba"};
  s21::stack<std::string> compare(test);
  s21::stack<std::string> moved = std::move(test);
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalStacks(moved, compare));
}

TEST(StackConstructors, AssignmentInitListCompareInt) {
  s21::stack<int> s21_test{1, 2, 3};
  s21::stack<int> s21_moved = std::move(s21_test);
  std::stack<int> std_test;
  std_test.push(1);
  std_test.push(2);
  std_test.push(3);
  std::stack<int> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalStacks(s21_moved, std_moved));
}

TEST(StackConstructors, AssignmentInitListCompareChar) {
  s21::stack<char> s21_test{'x', 'y', 'z'};
  s21::stack<char> s21_moved = std::move(s21_test);
  std::stack<char> std_test;
  std_test.push('x');
  std_test.push('y');
  std_test.push('z');
  std::stack<char> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalStacks(s21_moved, std_moved));
}

TEST(StackConstructors, AssignmentInitListCompareStr) {
  s21::stack<std::string> s21_test{"sus", "amogus", "aboba"};
  s21::stack<std::string> s21_moved = std::move(s21_test);
  std::stack<std::string> std_test;
  std_test.push("sus");
  std_test.push("amogus");
  std_test.push("aboba");
  std::stack<std::string> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalStacks(s21_moved, std_moved));
}

TEST(StackConstructors, AssignmentDefaultCorrectInt) {
  s21::stack<int> test;
  s21::stack<int> moved = std::move(test);
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(StackConstructors, AssignmentDefaultCorrectChar) {
  s21::stack<char> test;
  s21::stack<char> moved = std::move(test);
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(StackConstructors, AssignmentDefaultCorrectStr) {
  s21::stack<std::string> test;
  s21::stack<std::string> moved = std::move(test);
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(StackConstructors, AssignmentDefaultCompareInt) {
  s21::stack<int> s21_test;
  s21::stack<int> s21_moved = std::move(s21_test);
  std::stack<int> std_test;
  std::stack<int> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(StackConstructors, AssignmentDefaultCompareChar) {
  s21::stack<char> s21_test;
  s21::stack<char> s21_moved = std::move(s21_test);
  std::stack<char> std_test;
  std::stack<char> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(StackConstructors, AssignmentDefaultCompareStr) {
  s21::stack<std::string> s21_test;
  s21::stack<std::string> s21_moved = std::move(s21_test);
  std::stack<std::string> std_test;
  std::stack<std::string> std_moved = std::move(std_test);
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}
