#include "unit_tests.h"

/* default */

TEST(Constructor, DefaultCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(Constructor, DefaultCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(Constructor, DefaultCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(Constructor, DefaultCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(Constructor, DefaultCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(Constructor, DefaultCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

/* parameterized */
// there is no any error message shown in original stl constructor when n is
// negative but i want to implement it yet i don't know how

TEST(Constructor, ParameterizedCorrectInt) {
  const size_t val = 5;
  s21::list<int> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectChar) {
  const size_t val = 5;
  s21::list<char> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectStr) {
  const size_t val = 5;
  s21::list<std::string> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectZeroInt) {
  const size_t val = 0;
  s21::list<int> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectZeroChar) {
  const size_t val = 0;
  s21::list<char> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCorrectZeroStr) {
  const size_t val = 0;
  s21::list<std::string> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(Constructor, ParameterizedCompareInt) {
  const size_t val = 5;
  s21::list<int> s21_test(val);
  std::list<int> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareChar) {
  const size_t val = 5;
  s21::list<char> s21_test(val);
  std::list<char> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareStr) {
  const size_t val = 5;
  s21::list<std::string> s21_test(val);
  std::list<std::string> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareZeroInt) {
  const size_t val = 0;
  s21::list<int> s21_test(val);
  std::list<int> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareZeroChar) {
  const size_t val = 0;
  s21::list<char> s21_test(val);
  std::list<char> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(Constructor, ParameterizedCompareZeroStr) {
  const size_t val = 0;
  s21::list<std::string> s21_test(val);
  std::list<std::string> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

/* initializer list */

TEST(Constructor, InitListCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  EXPECT_TRUE(test.size() == 5);

  auto it = test.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 3);
  ++it;
  EXPECT_TRUE(*it == 4);
  ++it;
  EXPECT_TRUE(*it == 5);
}

TEST(Constructor, InitListCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(test.size() == 5);

  auto it = test.begin();
  EXPECT_TRUE(*it == 'a');
  ++it;
  EXPECT_TRUE(*it == 'b');
  ++it;
  EXPECT_TRUE(*it == 'c');
  ++it;
  EXPECT_TRUE(*it == 'd');
  ++it;
  EXPECT_TRUE(*it == 'e');
}

TEST(Constructor, InitListCorrectStr) {
  s21::list<std::string> test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  EXPECT_TRUE(test.size() == 5);

  auto it = test.begin();
  EXPECT_TRUE(*it == "aboba");
  ++it;
  EXPECT_TRUE(*it == "sus");
  ++it;
  EXPECT_TRUE(*it == "amogus");
  ++it;
  EXPECT_TRUE(*it == "LOL");
  ++it;
  EXPECT_TRUE(*it == "KEK");
}

TEST(Constructor, InitListCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();

  for (; s21_it != s21_test.end() && std_it != std_test.end();
       ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(Constructor, InitListCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();

  for (; s21_it != s21_test.end() && std_it != std_test.end();
       ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(Constructor, InitListCompareString) {
  s21::list<std::string> s21_test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  std::list<std::string> std_test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();

  for (; s21_it != s21_test.end() && std_it != std_test.end();
       ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(Constructor, InitListCorrectTwoInt) {
  s21::list<int> test = {42, 99};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 42);
  EXPECT_TRUE(test.back() == 99);
}

TEST(Constructor, InitListCorrectTwoChar) {
  s21::list<char> test = {'a', 'z'};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 'a');
  EXPECT_TRUE(test.back() == 'z');
}

TEST(Constructor, InitListCorrectTwoStr) {
  s21::list<std::string> test = {"sussy", "Baka"};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == "sussy");
  EXPECT_TRUE(test.back() == "Baka");
}

TEST(Constructor, InitListCompareTwoInt) {
  s21::list<int> s21_test = {42, 99};
  std::list<int> std_test = {42, 99};
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(Constructor, InitListCompareTwoChar) {
  s21::list<char> s21_test = {'a', 'z'};
  std::list<char> std_test = {'a', 'z'};
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(Constructor, InitListCompareTwoStr) {
  s21::list<std::string> s21_test = {"sussy", "Baka"};
  std::list<std::string> std_test = {"sussy", "Baka"};
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(Constructor, InitListMaxSizeExceededInt) {
  s21::list<int> temp;
  EXPECT_THROW(s21::list<int> s21_test(temp.max_size() + 1), std::out_of_range);
}

TEST(Constructor, InitListMaxSizeExceededChar) {
  s21::list<char> temp;
  EXPECT_THROW(s21::list<char> s21_test(temp.max_size() + 1), std::out_of_range);
}

TEST(Constructor, InitListMaxSizeExceededStr) {
  s21::list<std::string> temp;
  EXPECT_THROW(s21::list<std::string> s21_test(temp.max_size() + 1), std::out_of_range);
}

/* copy */

TEST(Constructor, CopyInitListCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> copy(test);
  EXPECT_TRUE(test.size() == copy.size());

  auto itt = test.begin();
  auto itc = copy.begin();

  for (; itt != test.end() && itc != copy.end(); ++itt, ++itc) {
    EXPECT_TRUE(*itt == *itc);
  }
}

TEST(Constructor, CopyInitListCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> copy(test);
  EXPECT_TRUE(test.size() == copy.size());

  auto itt = test.begin();
  auto itc = copy.begin();

  for (; itt != test.end() && itc != copy.end(); ++itt, ++itc) {
    EXPECT_TRUE(*itt == *itc);
  }
}

TEST(Constructor, CopyInitListCorrectStr) {
  s21::list<std::string> test = {"aboba", "sys", "among us", "boku no pico",
                                 "boku no hiro"};
  s21::list<std::string> copy(test);
  EXPECT_TRUE(test.size() == copy.size());

  auto itt = test.begin();
  auto itc = copy.begin();

  for (; itt != test.end() && itc != copy.end(); ++itt, ++itc) {
    EXPECT_TRUE(*itt == *itc);
  }
}

TEST(Constructor, CopyInitListCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  s21::list<int> s21_copy(s21_test);
  std::list<int> std_test = {1, 2, 3, 4, 5};
  std::list<int> std_copy(std_test);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_copy.size() == std_copy.size());

  auto s21_itt = s21_test.begin();
  auto s21_itc = s21_copy.begin();
  auto std_itt = std_test.begin();
  auto std_itc = std_copy.begin();

  for (; s21_itt != s21_test.end() && s21_itc != s21_copy.end() &&
         std_itt != std_test.end() && std_itc != std_copy.end();
       ++s21_itt, ++s21_itc, ++std_itt, ++std_itc) {
    EXPECT_TRUE(*s21_itt == *std_itt);
    EXPECT_TRUE(*s21_itc == *std_itc);
  }
}

TEST(Constructor, CopyInitListCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> s21_copy(s21_test);
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_copy(std_test);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_copy.size() == std_copy.size());

  auto s21_itt = s21_test.begin();
  auto s21_itc = s21_copy.begin();
  auto std_itt = std_test.begin();
  auto std_itc = std_copy.begin();

  for (; s21_itt != s21_test.end() && s21_itc != s21_copy.end() &&
         std_itt != std_test.end() && std_itc != std_copy.end();
       ++s21_itt, ++s21_itc, ++std_itt, ++std_itc) {
    EXPECT_TRUE(*s21_itt == *std_itt);
    EXPECT_TRUE(*s21_itc == *std_itc);
  }
}

TEST(Constructor, CopyInitListCompareStr) {
  s21::list<std::string> s21_test = {"aboba", "sys", "among us", "boku no pico",
                                     "boku no hiro"};
  s21::list<std::string> s21_copy(s21_test);
  std::list<std::string> std_test = {"aboba", "sys", "among us", "boku no pico",
                                     "boku no hiro"};
  std::list<std::string> std_copy(std_test);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_copy.size() == std_copy.size());

  auto s21_itt = s21_test.begin();
  auto s21_itc = s21_copy.begin();
  auto std_itt = std_test.begin();
  auto std_itc = std_copy.begin();

  for (; s21_itt != s21_test.end() && s21_itc != s21_copy.end() &&
         std_itt != std_test.end() && std_itc != std_copy.end();
       ++s21_itt, ++s21_itc, ++std_itt, ++std_itc) {
    EXPECT_TRUE(*s21_itt == *std_itt);
    EXPECT_TRUE(*s21_itc == *std_itc);
  }
}

TEST(Constructor, CopyDefaultCorrectInt) {
  s21::list<int> test;
  s21::list<int> copy(test);
  EXPECT_TRUE(test.size() == copy.size());

  auto itt = test.begin();
  auto itc = copy.begin();
  EXPECT_TRUE(*itt == *itc);
}

TEST(Constructor, CopyDefaultCorrectChar) {
  s21::list<char> test;
  s21::list<char> copy(test);
  EXPECT_TRUE(test.size() == copy.size());

  auto itt = test.begin();
  auto itc = copy.begin();
  EXPECT_TRUE(*itt == *itc);
}

TEST(Constructor, CopyDefaultCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> copy(test);
  EXPECT_TRUE(test.size() == copy.size());

  auto itt = test.begin();
  auto itc = copy.begin();
  EXPECT_TRUE(*itt == *itc);
}

TEST(Constructor, CopyDefaultCompareInt) {
  s21::list<int> s21_test;
  s21::list<int> s21_copy(s21_test);
  std::list<int> std_test;
  std::list<int> std_copy(std_test);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_copy.size() == std_copy.size());

  auto s21_itt = s21_test.begin();
  auto s21_itc = s21_copy.begin();
  auto std_itt = std_test.begin();
  auto std_itc = std_copy.begin();
  EXPECT_TRUE(*s21_itt == *std_itt);
  EXPECT_TRUE(*s21_itc == *std_itc);
}

TEST(Constructor, CopyDefaultCompareChar) {
  s21::list<char> s21_test;
  s21::list<char> s21_copy(s21_test);
  std::list<char> std_test;
  std::list<char> std_copy(std_test);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_copy.size() == std_copy.size());

  auto s21_itt = s21_test.begin();
  auto s21_itc = s21_copy.begin();
  auto std_itt = std_test.begin();
  auto std_itc = std_copy.begin();
  EXPECT_TRUE(*s21_itt == *std_itt);
  EXPECT_TRUE(*s21_itc == *std_itc);
}

/*TEST(Constructor, CopyDefaultCompareStr) {
  s21::list<std::string> s21_test;
  s21::list<std::string> s21_copy(s21_test);
  std::list<std::string> std_test;
  std::list<std::string> std_copy(std_test);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_copy.size() == std_copy.size());
  auto s21_itt = s21_test.begin();
  auto s21_itc = s21_copy.begin();
  // original causes segfault when dereferencing
  auto std_itt = std_test.begin();
  auto std_itc = std_copy.begin();
  EXPECT_TRUE(*s21_itt == *std_itt); EXPECT_TRUE(*s21_itc == *std_itc);
}*/

/* move */

TEST(Constructor, MoveInitListCorrectInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> moved(std::move(test));
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(moved.size() == 3);

  auto it = moved.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 3);
}

TEST(Constructor, MoveInitListCorrectChar) {
  s21::list<char> test{'x', 'y', 'z'};
  s21::list<char> moved(std::move(test));
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(moved.size() == 3);

  auto it = moved.begin();
  EXPECT_TRUE(*it == 'x');
  ++it;
  EXPECT_TRUE(*it == 'y');
  ++it;
  EXPECT_TRUE(*it == 'z');
}

TEST(Constructor, MoveInitListCorrectStr) {
  s21::list<std::string> test{"wsd", "ASD", "!!!"};
  s21::list<std::string> moved(std::move(test));
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(moved.size() == 3);

  auto it = moved.begin();
  EXPECT_TRUE(*it == "wsd");
  ++it;
  EXPECT_TRUE(*it == "ASD");
  ++it;
  EXPECT_TRUE(*it == "!!!");
}

TEST(Constructor, MoveInitListCompareInt) {
  s21::list<int> s21_test{1, 2, 3};
  s21::list<int> s21_moved(std::move(s21_test));
  std::list<int> std_test{1, 2, 3};
  std::list<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_moved.size() == std_moved.size());

  auto s21_itm = s21_moved.begin();
  auto std_itm = std_moved.begin();
  for (; s21_itm != s21_moved.end() && std_itm != std_moved.end(); ++s21_itm, ++std_itm) {
    EXPECT_TRUE(*s21_itm == *std_itm);
  }
}

TEST(Constructor, MoveInitListCompareChar) {
  s21::list<char> s21_test{'x', 'y', 'z'};
  s21::list<char> s21_moved(std::move(s21_test));
  std::list<char> std_test{'x', 'y', 'z'};
  std::list<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_moved.size() == std_moved.size());

  auto s21_itm = s21_moved.begin();
  auto std_itm = std_moved.begin();
  for (; s21_itm != s21_moved.end() && std_itm != std_moved.end(); ++s21_itm, ++std_itm) {
    EXPECT_TRUE(*s21_itm == *std_itm);
  }
}

TEST(Constructor, MoveInitListCompareStr) {
  s21::list<std::string> s21_test{"wsd", "ASD", "!!!"};
  s21::list<std::string> s21_moved(std::move(s21_test));
  std::list<std::string> std_test{"wsd", "ASD", "!!!"};
  std::list<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_moved.size() == std_moved.size());

  auto s21_itm = s21_moved.begin();
  auto std_itm = std_moved.begin();
  for (; s21_itm != s21_moved.end() && std_itm != std_moved.end(); ++s21_itm, ++std_itm) {
    EXPECT_TRUE(*s21_itm == *std_itm);
  }
}

TEST(Constructor, MoveDefaultCorrectInt) {
  s21::list<int> test;
  s21::list<int> moved(std::move(test));
  EXPECT_TRUE(test.size() == moved.size());
}

TEST(Constructor, MoveDefaultCorrectChar) {
  s21::list<char> test;
  s21::list<char> moved(std::move(test));
  EXPECT_TRUE(test.size() == moved.size());
}

TEST(Constructor, MoveDefaultCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> moved(std::move(test));
  EXPECT_TRUE(test.size() == moved.size());
}

TEST(Constructor, MoveDefaultCompareInt) {
  s21::list<int> s21_test;
  s21::list<int> s21_moved(std::move(s21_test));
  std::list<int> std_test;
  std::list<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_moved.size() == std_moved.size());
}

TEST(Constructor, MoveDefaultCompareChar) {
  s21::list<char> s21_test;
  s21::list<char> s21_moved(std::move(s21_test));
  std::list<char> std_test;
  std::list<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_moved.size() == std_moved.size());
}

TEST(Constructor, MoveDefaultCompareStr) {
  s21::list<std::string> s21_test;
  s21::list<std::string> s21_moved(std::move(s21_test));
  std::list<std::string> std_test;
  std::list<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_moved.size() == std_moved.size());
}

/* assignment */

TEST(Constructor, AssignmentInitListCorrect) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> moved = std::move(test);
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(moved.size() == 3);

  auto it = moved.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 3);
}

TEST(Constructor, AssignmentDefaultCorrect) {
  s21::list<int> test;
  s21::list<int> moved = std::move(test);
  EXPECT_TRUE(test.size() == moved.size());
}
