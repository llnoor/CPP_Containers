#include "unit_tests.h"

// there is no char and string type tests, maybe it is better for other tests too

TEST(ListIterators, ArithmeticsPlusCorrect) {
  s21::list<int> test{1, 2, 3, 4, 5};
  auto it_1 = test.begin();
  auto it_2 = test.begin();
  int n = 2;

  it_1 = it_1 + n;
  it_2 += n;
  EXPECT_TRUE(*it_1 == 3);
  EXPECT_TRUE(*it_2 == 3);
  EXPECT_TRUE(*it_1 == *it_2);
}

TEST(ListIterators, ArithmeticsPlusCompare) {
  s21::list<int> s21_test{1, 2, 3, 4, 5};
  std::list<int> std_test{1, 2, 3, 4, 5};
  auto it_1 = s21_test.begin();
  auto it_2 = s21_test.begin();
  auto std_it = std_test.begin();
  int n = 2;

  std::advance(std_it, n);
  it_1 = it_1 + n;
  it_2 += n;
  EXPECT_TRUE(*it_1 == *std_it);
  EXPECT_TRUE(*it_2 == *std_it);
}

TEST(ListIterators, ArithmeticsMinusCorrect) {
  s21::list<int> test{1, 2, 3, 4, 5};
  auto it_1 = test.end();
  auto it_2 = test.end();
  int n = 2;

  it_1 = it_1 - n;
  it_2 -= n;
  EXPECT_TRUE(*it_1 == 4);
  EXPECT_TRUE(*it_2 == 4);
  EXPECT_TRUE(*it_1 == *it_2);
}

TEST(ListIterators, ArithmeticsMinusCompare) {
  s21::list<int> s21_test{1, 2, 3, 4, 5};
  std::list<int> std_test{1, 2, 3, 4, 5};
  auto it_1 = s21_test.end();
  auto it_2 = s21_test.end();
  auto std_it = std_test.end();
  int n = 2;

  std::advance(std_it, -n);
  it_1 = it_1 - n;
  it_2 -= n;
  EXPECT_TRUE(*it_1 == *std_it);
  EXPECT_TRUE(*it_2 == *std_it);
}

TEST(ListIterators, IncrementBeginCorrect) {
  s21::list<int> test{1, 2};
  auto it = test.begin();
  
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
}

TEST(ListIterators, IncrementBeginCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, IncrementCycleCorrect) {
  s21::list<int> test{1, 2};
  auto it = test.end();
  
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 1);
}

TEST(ListIterators, IncrementCycleCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it = s21_test.end();
  auto std_it = std_test.end();
  
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, DecrementEndCorrect) {
  s21::list<int> test{1, 2};
  auto it = test.end();
  
  EXPECT_TRUE(*it == 2);  //cycle
  --it;
  EXPECT_TRUE(*it == 2);  //tail
}

TEST(ListIterators, DecrementEndCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it = s21_test.end();
  auto std_it = std_test.end();
  EXPECT_TRUE(*s21_it == *std_it);
  --s21_it;
  --std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, DecrementCycleCorrect) {
  s21::list<int> test{1, 2};
  auto it = test.begin();
  
  EXPECT_TRUE(*it == 1);
  --it;
  EXPECT_TRUE(*it == 2);
}

TEST(ListIterators, DecrementCycleCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  
  EXPECT_TRUE(*s21_it == *std_it);
  --s21_it;
  --std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, EqualCorrect) {
  s21::list<int> test{1, 2};
  auto it_b = test.begin();
  auto it_e = test.end();
  
  EXPECT_TRUE(*it_b == 1);
  EXPECT_TRUE(*it_e == 2);
}

TEST(ListIterators, EqualCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it_b = s21_test.begin();
  auto s21_it_e = s21_test.end();
  auto std_it_b = std_test.begin();
  auto std_it_e = std_test.end();
  
  EXPECT_TRUE(*s21_it_b == *std_it_b);
  EXPECT_TRUE(*s21_it_e == *std_it_e);
}

TEST(ListIterators, NotEqualCorrect) {
  s21::list<int> test{1, 2};
  auto it_b = test.begin();
  auto it_e = test.end();
  
  EXPECT_TRUE(*it_b != 2);
  EXPECT_TRUE(*it_e != 1);
  EXPECT_TRUE(*it_b != *it_e);
}

TEST(ListIterators, NotEqualCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it_b = s21_test.begin();
  auto s21_it_e = s21_test.end();
  auto std_it_b = std_test.begin();
  auto std_it_e = std_test.end();
  
  EXPECT_TRUE(*s21_it_b != *s21_it_e);
  EXPECT_TRUE(*s21_it_b != *std_it_e);
  EXPECT_TRUE(*std_it_b != *std_it_e);
  EXPECT_TRUE(*std_it_b != *s21_it_e);
}

TEST(ListIterators, EmptyListBeginDereferencing) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  EXPECT_TRUE(*s21_it == 0);
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, EmptyListEndDereferencing) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  auto s21_it = s21_test.end();
  auto std_it = std_test.end();
  EXPECT_TRUE(*s21_it == 0);
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, EmptyListBeginIncrementation) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  auto s21_it = ++s21_test.begin();
  auto std_it = ++std_test.begin();
  EXPECT_TRUE(*s21_it == 0);
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, EmptyListBeginDecrementation) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  auto s21_it = --s21_test.begin();
  auto std_it = --std_test.begin();
  EXPECT_TRUE(*s21_it == 0);
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, EmptyListEndIncrementation) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  auto s21_it = ++s21_test.end();
  auto std_it = ++std_test.end();
  EXPECT_TRUE(*s21_it == 0);
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(ListIterators, EmptyListEndDecrementation) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  auto s21_it = --s21_test.end();
  auto std_it = --std_test.end();
  EXPECT_TRUE(*s21_it == 0);
  EXPECT_TRUE(*s21_it == *std_it);
}

/*TEST(ListIterators, EmptyListBeginIncrementationStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  auto s21_it = ++s21_test.begin();
  auto std_it = ++std_test.begin();
  std::cout << *s21_it << std::endl;
  std::cout << *std_it << std::endl;  // segmentation fault here
  std::cout << std::boolalpha << (*s21_it == *std_it) << std::endl;
  EXPECT_TRUE(*s21_it == *std_it);
}*/

/*TEST(ListIterators, EmptyListBeginDecrementationStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  auto s21_it = --s21_test.begin();
  auto std_it = --std_test.begin();
  std::cout << *s21_it << std::endl;
  std::cout << *std_it << std::endl;  // segmentation fault here
  std::cout << std::boolalpha << (*s21_it == *std_it) << std::endl;
  EXPECT_TRUE(*s21_it == *std_it);
}*/

/*TEST(ListIterators, EmptyListEndIncrementationStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  auto s21_it = ++s21_test.end();
  auto std_it = ++std_test.end();
  std::cout << *s21_it << std::endl;
  std::cout << *std_it << std::endl;  // segmentation fault here
  std::cout << std::boolalpha << (*s21_it == *std_it) << std::endl;
  EXPECT_TRUE(*s21_it == *std_it);
}*/

/*TEST(ListIterators, EmptyListEndDecrementationStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  auto s21_it = --s21_test.end();
  auto std_it = --std_test.end();
  std::cout << *s21_it << std::endl;
  std::cout << *std_it << std::endl;  // segmentation fault here
  std::cout << std::boolalpha << (*s21_it == *std_it) << std::endl;
  EXPECT_TRUE(*s21_it == *std_it);
}*/
