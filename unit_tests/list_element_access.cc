#include "unit_tests.h"

TEST(ListElementAccess, FrontCorrectInt) {
  s21::list<int> test{42, 99};
  EXPECT_TRUE(test.front() == 42);
}

TEST(ListElementAccess, FrontCorrectChar) {
  s21::list<char> test{'a', 'Z'};
  EXPECT_TRUE(test.front() == 'a');
}

TEST(ListElementAccess, FrontCorrectStr) {
  s21::list<std::string> test{"gog", "magog"};
  EXPECT_TRUE(test.front() == "gog");
}

TEST(ListElementAccess, FrontCompareInt) {
  s21::list<int> s21_test{42, 99};
  std::list<int> std_test{42, 99};
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ListElementAccess, FrontCompareChar) {
  s21::list<char> s21_test{'a', 'Z'};
  std::list<char> std_test{'a', 'Z'};
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ListElementAccess, FrontCompareStr) {
  s21::list<std::string> s21_test{"gog", "magog"};
  std::list<std::string> std_test{"gog", "magog"};
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ListElementAccess, FrontEmptyCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.front() == s21::list<int>::default_value);
}

TEST(ListElementAccess, FrontEmptyCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.front() == s21::list<char>::default_value);
}

TEST(ListElementAccess, FrontEmptyCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.front() == s21::list<std::string>::default_value);
}

TEST(ListElementAccess, FrontEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ListElementAccess, FrontEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

/*TEST(ListElementAccess, FrontEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  std::cout << s21_test.front() << std::endl;
  std::cout << std_test.front() << std::endl; // segmentation fault here
  std::cout << std::boolalpha << (s21_test.front() == std_test.front()) << std::endl;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}*/

TEST(ListElementAccess, BackCorrectInt) {
  s21::list<int> test{42, 99};
  EXPECT_TRUE(test.back() == 99);
}

TEST(ListElementAccess, BackCorrectChar) {
  s21::list<char> test{'a', 'Z'};
  EXPECT_TRUE(test.back() == 'Z');
}

TEST(ListElementAccess, BackCorrectStr) {
  s21::list<std::string> test{"gog", "magog"};
  EXPECT_TRUE(test.back() == "magog");
}

TEST(ListElementAccess, BackCompareInt) {
  s21::list<int> s21_test{42, 99};
  std::list<int> std_test{42, 99};
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ListElementAccess, BackCompareChar) {
  s21::list<char> s21_test{'a', 'Z'};
  std::list<char> std_test{'a', 'Z'};
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ListElementAccess, BackCompareStr) {
  s21::list<std::string> s21_test{"gog", "magog"};
  std::list<std::string> std_test{"gog", "magog"};
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ListElementAccess, BackEmptyCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.back() == s21::list<int>::default_value);
}

TEST(ListElementAccess, BackEmptyCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.back() == s21::list<char>::default_value);
}

TEST(ListElementAccess, BackEmptyCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.back() == s21::list<std::string>::default_value);
}

TEST(ListElementAccess, BackEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ListElementAccess, BackEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

/*TEST(ListElementAccess, BackEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  std::cout << s21_test.back() << std::endl;
  std::cout << std_test.back() << std::endl; // segmentation fault here
  std::cout << std::boolalpha << (s21_test.back() == std_test.back()) << std::endl;
  EXPECT_TRUE(s21_test.back() == std_test.back());
}*/

TEST(ListElementAccess, EmptyFrontStringLeaksCheck) {
  // leaks check, original list is broken on strings
  s21::list<std::string> s21_test;
  EXPECT_TRUE(s21_test.size() == s21_test.size());
  EXPECT_TRUE(s21_test.front() == s21_test.front());
}

TEST(ListElementAccess, EmptyBackStringLeaksCheck) {
  // leaks check, original list is broken on strings
  s21::list<std::string> s21_test;
  EXPECT_TRUE(s21_test.size() == s21_test.size());
  EXPECT_TRUE(s21_test.back() == s21_test.back());
}
