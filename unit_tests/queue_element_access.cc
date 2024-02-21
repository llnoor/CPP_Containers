#include "unit_tests.h"

TEST(QueueElementAccess, FrontCorrectInt) {
  s21::queue<int> test{42, 99};
  EXPECT_TRUE(test.front() == 42);
}

TEST(QueueElementAccess, FrontCorrectChar) {
  s21::queue<char> test{'a', 'Z'};
  EXPECT_TRUE(test.front() == 'a');
}

TEST(QueueElementAccess, FrontCorrectStr) {
  s21::queue<std::string> test{"gog", "magog"};
  EXPECT_TRUE(test.front() == "gog");
}

TEST(QueueElementAccess, FrontCompareInt) {
  s21::queue<int> s21_test{42, 99};
  std::queue<int> std_test;
  std_test.push(42);
  std_test.push(99);
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(QueueElementAccess, FrontCompareChar) {
  s21::queue<int> s21_test{'a', 'Z'};
  std::queue<int> std_test;
  std_test.push('a');
  std_test.push('Z');
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(QueueElementAccess, FrontCompareStr) {
  s21::queue<std::string> s21_test{"gog", "magog"};
  std::queue<std::string> std_test;
  std_test.push("gog");
  std_test.push("magog");
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(QueueElementAccess, FrontEmptyCorrectInt) {
  s21::queue<int> test;
  EXPECT_TRUE(test.front() == s21::list<int>::default_value);
}

TEST(QueueElementAccess, FrontEmptyCorrectChar) {
  s21::queue<char> test;
  EXPECT_TRUE(test.front() == s21::list<char>::default_value);
}

TEST(QueueElementAccess, FrontEmptyCorrectStr) {
  s21::queue<std::string> test;
  EXPECT_TRUE(test.front() == s21::list<std::string>::default_value);
}

TEST(QueueElementAccess, FrontEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(QueueElementAccess, FrontEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

/*TEST(QueueElementAccess, FrontEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  std::cout << s21_test.front() << std::endl;
  std::cout << std_test.front() << std::endl; // segmentation fault here
  EXPECT_TRUE(s21_test.front() == std_test.front());
}*/

TEST(QueueElementAccess, BackCorrectInt) {
  s21::queue<int> test{42, 99};
  EXPECT_TRUE(test.back() == 99);
}

TEST(QueueElementAccess, BackCorrectChar) {
  s21::queue<char> test{'a', 'Z'};
  EXPECT_TRUE(test.back() == 'Z');
}

TEST(QueueElementAccess, BackCorrectStr) {
  s21::queue<std::string> test{"gog", "magog"};
  EXPECT_TRUE(test.back() == "magog");
}

TEST(QueueElementAccess, BackCompareInt) {
  s21::queue<int> s21_test{42, 99};
  std::queue<int> std_test;
  std_test.push(42);
  std_test.push(99);
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(QueueElementAccess, BackCompareChar) {
  s21::queue<char> s21_test{'a', 'Z'};
  std::queue<char> std_test;
  std_test.push('a');
  std_test.push('Z');
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(QueueElementAccess, BackCompareStr) {
  s21::queue<std::string> s21_test{"gog", "magog"};
  std::queue<std::string> std_test;
  std_test.push("gog");
  std_test.push("magog");
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(QueueElementAccess, BackEmptyCorrectInt) {
  s21::queue<int> test;
  EXPECT_TRUE(test.back() == s21::list<int>::default_value);
}

TEST(QueueElementAccess, BackEmptyCorrectChar) {
  s21::queue<char> test;
  EXPECT_TRUE(test.back() == s21::list<char>::default_value);
}

TEST(QueueElementAccess, BackEmptyCorrectStr) {
  s21::queue<std::string> test;
  EXPECT_TRUE(test.back() == s21::list<std::string>::default_value);
}

/*TEST(QueueElementAccess, BackEmptyCompareInt) {
  s21::queue<int> s21_test;
  std::queue<int> std_test;
  std::cout << s21_test.back() << std::endl;
  std::cout << std_test.back() << std::endl; // segmentation fault here
  EXPECT_TRUE(s21_test.back() == std_test.back());
}*/

/*TEST(QueueElementAccess, BackEmptyCompareChar) {
  s21::queue<char> s21_test;
  std::queue<char> std_test;
  std::cout << s21_test.back() << std::endl;
  std::cout << std_test.back() << std::endl; // segmentation fault here
  EXPECT_TRUE(s21_test.back() == std_test.back());
}*/

/*TEST(QueueElementAccess, BackEmptyCompareStr) {
  s21::queue<std::string> s21_test;
  std::queue<std::string> std_test;
  std::cout << s21_test.back() << std::endl;
  std::cout << std_test.back() << std::endl; // segmentation fault here
  EXPECT_TRUE(s21_test.back() == std_test.back());
}*/
