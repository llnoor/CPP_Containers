#include "unit_tests.h"

TEST(StackElementAccess, BackCorrectInt) {
  s21::stack<int> test{42, 99};
  EXPECT_TRUE(test.top() == 99);
}

TEST(StackElementAccess, BackCorrectChar) {
  s21::stack<char> test{'a', 'Z'};
  EXPECT_TRUE(test.top() == 'Z');
}

TEST(StackElementAccess, BackCorrectStr) {
  s21::stack<std::string> test{"gog", "magog"};
  EXPECT_TRUE(test.top() == "magog");
}

TEST(StackElementAccess, BackCompareInt) {
  s21::stack<int> s21_test{42, 99};
  std::stack<int> std_test;
  std_test.push(42);
  std_test.push(99);
  EXPECT_TRUE(s21_test.top() == std_test.top());
}

TEST(StackElementAccess, BackCompareChar) {
  s21::stack<char> s21_test{'a', 'Z'};
  std::stack<char> std_test;
  std_test.push('a');
  std_test.push('Z');
  EXPECT_TRUE(s21_test.top() == std_test.top());
}

TEST(StackElementAccess, BackCompareStr) {
  s21::stack<std::string> s21_test{"gog", "magog"};
  std::stack<std::string> std_test;
  std_test.push("gog");
  std_test.push("magog");
  EXPECT_TRUE(s21_test.top() == std_test.top());
}

TEST(StackElementAccess, BackEmptyCorrectInt) {
  s21::stack<int> test;
  EXPECT_TRUE(test.top() == s21::list<int>::default_value);
}

TEST(StackElementAccess, BackEmptyCorrectChar) {
  s21::stack<char> test;
  EXPECT_TRUE(test.top() == s21::list<char>::default_value);
}

TEST(StackElementAccess, BackEmptyCorrectStr) {
  s21::stack<std::string> test;
  EXPECT_TRUE(test.top() == s21::list<std::string>::default_value);
}

/*TEST(StackElementAccess, BackEmptyCompareInt) {
  s21::stack<int> s21_test;
  std::stack<int> std_test;
  std::cout << s21_test.top() << std::endl;
  std::cout << std_test.top() << std::endl; // segmentation fault here
  EXPECT_TRUE(s21_test.top() == std_test.top());
}*/

/*TEST(StackElementAccess, BackEmptyCompareChar) {
  s21::stack<char> s21_test;
  std::stack<char> std_test;
  std::cout << s21_test.top() << std::endl;
  std::cout << std_test.top() << std::endl; // segmentation fault here
  EXPECT_TRUE(s21_test.top() == std_test.top());
}*/

/*TEST(StackElementAccess, BackEmptyCompareStr) {
  s21::stack<std::string> s21_test;
  std::stack<std::string> std_test;
  std::cout << s21_test.top() << std::endl;
  std::cout << std_test.top() << std::endl; // segmentation fault here
  EXPECT_TRUE(s21_test.top() == std_test.top());
}*/
