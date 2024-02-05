#include "unit_tests.h"

TEST(ElementAccess, FrontCorrectInt) {
  s21::list<int> test;
  test.push_back(42);
  test.push_back(99);
  EXPECT_TRUE(test.front() == 42);
}

TEST(ElementAccess, FrontCorrectChar) {
  s21::list<char> test;
  test.push_back('a');
  test.push_back('Z');
  EXPECT_TRUE(test.front() == 'a');
}

TEST(ElementAccess, FrontCorrectStr) {
  s21::list<std::string> test;
  test.push_back("gog");
  test.push_back("magog");
  EXPECT_TRUE(test.front() == "gog");
}

TEST(ElementAccess, BackCorrectInt) {
  s21::list<int> test;
  test.push_back(42);
  test.push_back(99);
  EXPECT_TRUE(test.back() == 99);
}

TEST(ElementAccess, BackCorrectChar) {
  s21::list<char> test;
  test.push_back('a');
  test.push_back('Z');
  EXPECT_TRUE(test.back() == 'Z');
}

TEST(ElementAccess, BackCorrectStr) {
  s21::list<std::string> test;
  test.push_back("gog");
  test.push_back("magog");
  EXPECT_TRUE(test.back() == "magog");
}

//C++ exception with description "error: list is empty, cannot access the front element." thrown in the test body.
// TEST(ElementAccess, FrontStringLeaksCheck) {
//   // leaks check, original list is broken on strings
//   s21::list<std::string> s21_test;
//   EXPECT_TRUE(s21_test.size() == s21_test.size());
//   EXPECT_TRUE(s21_test.front() == s21_test.front());
// }

//C++ exception with description "error: list is empty, cannot access the back element." thrown in the test body.
// TEST(ElementAccess, BackStringLeaksCheck) {
//   // leaks check, original list is broken on strings
//   s21::list<std::string> s21_test;
//   EXPECT_TRUE(s21_test.size() == s21_test.size());
//   EXPECT_TRUE(s21_test.back() == s21_test.back());
// }
