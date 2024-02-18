#include "unit_tests.h"

TEST(ElementAccess, FrontCorrectInt) {
  s21::list<int> test{42, 99};
  EXPECT_TRUE(test.front() == 42);
}

TEST(ElementAccess, FrontCorrectChar) {
  s21::list<char> test{'a', 'Z'};
  EXPECT_TRUE(test.front() == 'a');
}

TEST(ElementAccess, FrontCorrectStr) {
  s21::list<std::string> test{"gog", "magog"};
  EXPECT_TRUE(test.front() == "gog");
}

TEST(ElementAccess, FrontCompareInt) {
  s21::list<int> s21_test{42, 99};
  std::list<int> std_test{42, 99};
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ElementAccess, FrontCompareChar) {
  s21::list<char> s21_test{'a', 'Z'};
  std::list<char> std_test{'a', 'Z'};
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ElementAccess, FrontCompareStr) {
  s21::list<std::string> s21_test{"gog", "magog"};
  std::list<std::string> std_test{"gog", "magog"};
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ElementAccess, FrontEmptyCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.front() == s21::list<int>::default_value);
}

TEST(ElementAccess, FrontEmptyCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.front() == s21::list<char>::default_value);
}

TEST(ElementAccess, FrontEmptyCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.front() == s21::list<std::string>::default_value);
}

TEST(ElementAccess, FrontEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

TEST(ElementAccess, FrontEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}

/*TEST(ElementAccess, FrontEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  std::cout << s21_test.front() << std::endl;
  std::cout << std_test.front() << std::endl; // segmentation fault here
  std::cout << std::boolalpha << (s21_test.front() == std_test.front()) << std::endl;
  EXPECT_TRUE(s21_test.front() == std_test.front());
}*/

TEST(ElementAccess, BackCorrectInt) {
  s21::list<int> test{42, 99};
  EXPECT_TRUE(test.back() == 99);
}

TEST(ElementAccess, BackCorrectChar) {
  s21::list<char> test{'a', 'Z'};
  EXPECT_TRUE(test.back() == 'Z');
}

TEST(ElementAccess, BackCorrectStr) {
  s21::list<std::string> test{"gog", "magog"};
  EXPECT_TRUE(test.back() == "magog");
}

TEST(ElementAccess, BackEmptyCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.back() == s21::list<int>::default_value);
}

TEST(ElementAccess, BackEmptyCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.back() == s21::list<char>::default_value);
}

TEST(ElementAccess, BackEmptyCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.back() == s21::list<std::string>::default_value);
}

TEST(ElementAccess, BackCompareInt) {
  s21::list<int> s21_test{42, 99};
  std::list<int> std_test{42, 99};
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ElementAccess, BackCompareChar) {
  s21::list<char> s21_test{'a', 'Z'};
  std::list<char> std_test{'a', 'Z'};
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ElementAccess, BackCompareStr) {
  s21::list<std::string> s21_test{"gog", "magog"};
  std::list<std::string> std_test{"gog", "magog"};
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ElementAccess, BackEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ElementAccess, BackEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

/*TEST(ElementAccess, BackEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  std::cout << s21_test.back() << std::endl;
  std::cout << std_test.back() << std::endl; // segmentation fault here
  std::cout << std::boolalpha << (s21_test.back() == std_test.back()) << std::endl;
  EXPECT_TRUE(s21_test.back() == std_test.back());
}*/

TEST(ElementAccess, EmptyFrontStringLeaksCheck) {
  // leaks check, original list is broken on strings
  s21::list<std::string> s21_test;
  EXPECT_TRUE(s21_test.size() == s21_test.size());
  EXPECT_TRUE(s21_test.front() == s21_test.front());
}

TEST(ElementAccess, EmptyBackStringLeaksCheck) {
  // leaks check, original list is broken on strings
  s21::list<std::string> s21_test;
  EXPECT_TRUE(s21_test.size() == s21_test.size());
  EXPECT_TRUE(s21_test.back() == s21_test.back());
}
