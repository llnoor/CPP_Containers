#include "unit_tests.h"

/* default */

TEST(ListConstructor, DefaultCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(ListConstructor, DefaultCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(ListConstructor, DefaultCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(test.empty());
}

TEST(ListConstructor, DefaultCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListConstructor, DefaultCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListConstructor, DefaultCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

/* parameterized */

TEST(ListConstructor, ParameterizedCorrectInt) {
  const size_t val = 5;
  s21::list<int> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(ListConstructor, ParameterizedCorrectChar) {
  const size_t val = 5;
  s21::list<char> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(ListConstructor, ParameterizedCorrectStr) {
  const size_t val = 5;
  s21::list<std::string> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
}

TEST(ListConstructor, ParameterizedCorrectZeroInt) {
  const size_t val = 0;
  s21::list<int> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
  EXPECT_TRUE(s21_test.empty());
}

TEST(ListConstructor, ParameterizedCorrectZeroChar) {
  const size_t val = 0;
  s21::list<char> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
  EXPECT_TRUE(s21_test.empty());
}

TEST(ListConstructor, ParameterizedCorrectZeroStr) {
  const size_t val = 0;
  s21::list<std::string> s21_test(val);
  EXPECT_TRUE(s21_test.size() == val);
  EXPECT_TRUE(s21_test.empty());
}

TEST(ListConstructor, ParameterizedCompareInt) {
  const size_t val = 5;
  s21::list<int> s21_test(val);
  std::list<int> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListConstructor, ParameterizedCompareChar) {
  const size_t val = 5;
  s21::list<char> s21_test(val);
  std::list<char> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListConstructor, ParameterizedCompareStr) {
  const size_t val = 5;
  s21::list<std::string> s21_test(val);
  std::list<std::string> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ListConstructor, ParameterizedCompareZeroInt) {
  const size_t val = 0;
  s21::list<int> s21_test(val);
  std::list<int> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListConstructor, ParameterizedCompareZeroChar) {
  const size_t val = 0;
  s21::list<char> s21_test(val);
  std::list<char> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListConstructor, ParameterizedCompareZeroStr) {
  const size_t val = 0;
  s21::list<std::string> s21_test(val);
  std::list<std::string> std_test(val);
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListConstructor, ParameterizedMaxSizeExceededInt) {
  s21::list<int> temp;
  EXPECT_THROW(s21::list<int> test(temp.max_size() + 1), std::out_of_range);
}

TEST(ListConstructor, ParameterizedMaxSizeExceededChar) {
  s21::list<char> temp;
  EXPECT_THROW(s21::list<char> test(temp.max_size() + 1), std::out_of_range);
}

TEST(ListConstructor, ParameterizedMaxSizeExceededStr) {
  s21::list<std::string> temp;
  EXPECT_THROW(s21::list<std::string> test(temp.max_size() + 1), std::out_of_range);
}

TEST(ListConstructor, ParameterizedNegativeInt) {
  const size_t val = -1;
  EXPECT_THROW(s21::list<int> test(val), std::out_of_range);
}

TEST(ListConstructor, ParameterizedNegativeChar) {
  const size_t val = -1;
  EXPECT_THROW(s21::list<char> test(val), std::out_of_range);
}

TEST(ListConstructor, ParameterizedNegativeStr) {
  const size_t val = -1;
  EXPECT_THROW(s21::list<std::string> test(val), std::out_of_range);
}

/* initializer list */

TEST(ListConstructor, InitListCorrectInt) {
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

TEST(ListConstructor, InitListCorrectChar) {
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

TEST(ListConstructor, InitListCorrectStr) {
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

TEST(ListConstructor, InitListCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListConstructor, InitListCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListConstructor, InitListCompareString) {
  s21::list<std::string> s21_test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  std::list<std::string> std_test = {"aboba", "sus", "amogus", "LOL", "KEK"};
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListConstructor, InitListCorrectTwoInt) {
  s21::list<int> test = {42, 99};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 42);
  EXPECT_TRUE(test.back() == 99);
}

TEST(ListConstructor, InitListCorrectTwoChar) {
  s21::list<char> test = {'a', 'z'};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == 'a');
  EXPECT_TRUE(test.back() == 'z');
}

TEST(ListConstructor, InitListCorrectTwoStr) {
  s21::list<std::string> test = {"sussy", "Baka"};
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(test.front() == "sussy");
  EXPECT_TRUE(test.back() == "Baka");
}

TEST(ListConstructor, InitListCompareTwoInt) {
  s21::list<int> s21_test = {42, 99};
  std::list<int> std_test = {42, 99};
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListConstructor, InitListCompareTwoChar) {
  s21::list<char> s21_test = {'a', 'z'};
  std::list<char> std_test = {'a', 'z'};
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ListConstructor, InitListCompareTwoStr) {
  s21::list<std::string> s21_test = {"sussy", "Baka"};
  std::list<std::string> std_test = {"sussy", "Baka"};
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

/* copy */

TEST(ListConstructor, CopyInitListCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> copy(test);
  EXPECT_TRUE(test.size() == copy.size());
  EXPECT_TRUE(equalLists(test, copy));
}

TEST(ListConstructor, CopyInitListCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> copy(test);
  EXPECT_TRUE(test.size() == copy.size());
  EXPECT_TRUE(equalLists(test, copy));
}

TEST(ListConstructor, CopyInitListCorrectStr) {
  s21::list<std::string> test = {"aboba", "sys", "among us", "boku no pico",
                                 "boku no hiro"};
  s21::list<std::string> copy(test);
  EXPECT_TRUE(test.size() == copy.size());
  EXPECT_TRUE(equalLists(test, copy));
}

TEST(ListConstructor, CopyInitListCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  s21::list<int> s21_copy(s21_test);
  std::list<int> std_test = {1, 2, 3, 4, 5};
  std::list<int> std_copy(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_copy));
}

TEST(ListConstructor, CopyInitListCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> s21_copy(s21_test);
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_copy(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_copy));
}

TEST(ListConstructor, CopyInitListCompareStr) {
  s21::list<std::string> s21_test = {"aboba", "sys", "among us", "boku no pico",
                                     "boku no hiro"};
  s21::list<std::string> s21_copy(s21_test);
  std::list<std::string> std_test = {"aboba", "sys", "among us", "boku no pico",
                                     "boku no hiro"};
  std::list<std::string> std_copy(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_copy));
}

TEST(ListConstructor, CopyDefaultCorrectInt) {
  s21::list<int> test;
  s21::list<int> copy(test);
  EXPECT_TRUE(equalLists(test, copy));
}

TEST(ListConstructor, CopyDefaultCorrectChar) {
  s21::list<char> test;
  s21::list<char> copy(test);
  EXPECT_TRUE(equalLists(test, copy));
}

TEST(ListConstructor, CopyDefaultCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> copy(test);
  EXPECT_TRUE(equalLists(test, copy));
}

TEST(ListConstructor, CopyDefaultCompareInt) {
  s21::list<int> s21_test;
  s21::list<int> s21_copy(s21_test);
  std::list<int> std_test;
  std::list<int> std_copy(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_copy));
}

TEST(ListConstructor, CopyDefaultCompareChar) {
  s21::list<char> s21_test;
  s21::list<char> s21_copy(s21_test);
  std::list<char> std_test;
  std::list<char> std_copy(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_test));
  EXPECT_TRUE(equalLists(s21_copy, std_copy));
}

/*TEST(ListConstructor, CopyDefaultCompareStr) {
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

TEST(ListConstructor, MoveInitListCorrectInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare(test);
  s21::list<int> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalLists(moved, compare));
}

TEST(ListConstructor, MoveInitListCorrectChar) {
  s21::list<char> test{'x', 'y', 'z'};
  s21::list<char> compare(test);
  s21::list<char> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalLists(moved, compare));
}

TEST(ListConstructor, MoveInitListCorrectStr) {
  s21::list<std::string> test{"wsd", "ASD", "!!!"};
  s21::list<std::string> compare(test);
  s21::list<std::string> moved(std::move(test));
  EXPECT_TRUE(test.empty());
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalLists(moved, compare));
}

TEST(ListConstructor, MoveInitListCompareInt) {
  s21::list<int> s21_test{1, 2, 3};
  s21::list<int> s21_moved(std::move(s21_test));
  std::list<int> std_test{1, 2, 3};
  std::list<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, MoveInitListCompareChar) {
  s21::list<char> s21_test{'x', 'y', 'z'};
  s21::list<char> s21_moved(std::move(s21_test));
  std::list<char> std_test{'x', 'y', 'z'};
  std::list<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, MoveInitListCompareStr) {
  s21::list<std::string> s21_test{"wsd", "ASD", "!!!"};
  s21::list<std::string> s21_moved(std::move(s21_test));
  std::list<std::string> std_test{"wsd", "ASD", "!!!"};
  std::list<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, MoveDefaultCorrectInt) {
  s21::list<int> test;
  s21::list<int> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(ListConstructor, MoveDefaultCorrectChar) {
  s21::list<char> test;
  s21::list<char> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(ListConstructor, MoveDefaultCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> moved(std::move(test));
  EXPECT_TRUE(test.empty() == moved.empty());
}

TEST(ListConstructor, MoveDefaultCompareInt) {
  s21::list<int> s21_test;
  s21::list<int> s21_moved(std::move(s21_test));
  std::list<int> std_test;
  std::list<int> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(ListConstructor, MoveDefaultCompareChar) {
  s21::list<char> s21_test;
  s21::list<char> s21_moved(std::move(s21_test));
  std::list<char> std_test;
  std::list<char> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

TEST(ListConstructor, MoveDefaultCompareStr) {
  s21::list<std::string> s21_test;
  s21::list<std::string> s21_moved(std::move(s21_test));
  std::list<std::string> std_test;
  std::list<std::string> std_moved(std::move(std_test));
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  EXPECT_TRUE(s21_moved.empty() == std_moved.empty());
}

/* assignment */

TEST(ListConstructor, AssignmentInitListCorrectInt) {
  s21::list<int> test{1, 2, 3};
  s21::list<int> compare(test);
  s21::list<int> moved = std::move(test);
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalLists(moved, compare));
}

TEST(ListConstructor, AssignmentInitListCorrectChar) {
  s21::list<char> test{'X', 'Y', 'Z'};
  s21::list<char> compare(test);
  s21::list<char> moved = std::move(test);
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalLists(moved, compare));
}

TEST(ListConstructor, AssignmentInitListCorrectStr) {
  s21::list<std::string> test{"sus", "amogus", "aboba"};
  s21::list<std::string> compare(test);
  s21::list<std::string> moved = std::move(test);
  EXPECT_TRUE(test.size() == 0);
  EXPECT_TRUE(moved.size() == 3);
  EXPECT_TRUE(equalLists(moved, compare));
}

TEST(ListConstructor, AssignmentInitListCompareInt) {
  s21::list<int> s21_test{1, 2, 3};
  s21::list<int> s21_moved = std::move(s21_test);
  std::list<int> std_test{1, 2, 3};
  std::list<int> std_moved = std::move(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, AssignmentInitListCompareChar) {
  s21::list<char> s21_test{'X', 'Y', 'Z'};
  s21::list<char> s21_moved = std::move(s21_test);
  std::list<char> std_test{'X', 'Y', 'Z'};
  std::list<char> std_moved = std::move(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, AssignmentInitListCompareStr) {
  s21::list<std::string> s21_test{"sus", "amogus", "aboba"};
  s21::list<std::string> s21_moved = std::move(s21_test);
  std::list<std::string> std_test{"sus", "amogus", "aboba"};
  std::list<std::string> std_moved = std::move(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, AssignmentDefaultCorrectInt) {
  s21::list<int> test;
  s21::list<int> moved = std::move(test);
  EXPECT_TRUE(equalLists(test, moved));
}

TEST(ListConstructor, AssignmentDefaultCorrectChar) {
  s21::list<char> test;
  s21::list<char> moved = std::move(test);
  EXPECT_TRUE(equalLists(test, moved));
}

TEST(ListConstructor, AssignmentDefaultCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> moved = std::move(test);
  EXPECT_TRUE(equalLists(test, moved));
}

TEST(ListConstructor, AssignmentDefaultCompareInt) {
  s21::list<int> s21_test;
  s21::list<int> s21_moved = std::move(s21_test);
  std::list<int> std_test;
  std::list<int> std_moved = std::move(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, AssignmentDefaultCompareChar) {
  s21::list<char> s21_test;
  s21::list<char> s21_moved = std::move(s21_test);
  std::list<char> std_test;
  std::list<char> std_moved = std::move(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}

TEST(ListConstructor, AssignmentDefaultCompareStr) {
  s21::list<std::string> s21_test;
  s21::list<std::string> s21_moved = std::move(s21_test);
  std::list<std::string> std_test;
  std::list<std::string> std_moved = std::move(std_test);
  EXPECT_TRUE(equalLists(s21_test, std_test));
  EXPECT_TRUE(equalLists(s21_moved, std_moved));
}
