#include "unit_tests.h"

TEST(Iterators, ArithmeticsPlus) {
  s21::list<int> test{1, 2, 3, 4, 5};
  auto it_1 = test.begin();
  auto it_2 = test.begin();
  int n = 2;

  it_1 = it_1 + n;
  EXPECT_TRUE(*it_1 == 3);
  it_2 += n;
  EXPECT_TRUE(*it_2 == 3);
  EXPECT_TRUE(*it_1 == *it_2);
}

TEST(Iterators, ArithmeticsMinus) {
  s21::list<int> test{1, 2, 3, 4, 5};
  auto it_1 = test.end();
  auto it_2 = test.end();
  int n = 2;

  it_1 = it_1 - n;
  EXPECT_TRUE(*it_1 == 3);
  it_2 -= n;
  EXPECT_TRUE(*it_2 == 3);
  EXPECT_TRUE(*it_1 == *it_2);
}

TEST(Iterators, IncrementBegin) {
  s21::list<int> test{1, 2};
  auto it = test.begin();
  
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
}

TEST(Iterators, IncrementBeginCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(Iterators, IncrementCycle) {
  s21::list<int> test{1, 2};
  auto it = test.end();
  
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 1);
}

TEST(Iterators, IncrementCycleCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it = s21_test.end();
  auto std_it = std_test.end();
  
  EXPECT_TRUE(*s21_it == *std_it);
  ++s21_it;
  ++std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(Iterators, DecrementEnd) {
  s21::list<int> test{1, 2};
  auto it = test.end();
  
  EXPECT_TRUE(*it == 2);
  --it;
  EXPECT_TRUE(*it == 1);
}

//not equal because 2 as tail is nullptr in original stl
// TEST(Iterators, DecrementEndCompare) {
//   s21::list<int> s21_test{1, 2};
//   std::list<int> std_test{1, 2};
//   auto s21_it = s21_test.end();
//   auto std_it = std_test.end();
//   EXPECT_TRUE(*s21_it == *std_it);
//   --s21_it;
//   --std_it;
//   EXPECT_TRUE(*s21_it == *std_it);
// }

TEST(Iterators, DecrementCycle) {
  s21::list<int> test{1, 2};
  auto it = test.begin();
  
  EXPECT_TRUE(*it == 1);
  --it;
  EXPECT_TRUE(*it == 2);
}

TEST(Iterators, DecrementCycleCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  
  EXPECT_TRUE(*s21_it == *std_it);
  --s21_it;
  --std_it;
  EXPECT_TRUE(*s21_it == *std_it);
}

TEST(Iterators, Equal) {
  s21::list<int> test{1, 2};
  auto it_b = test.begin();
  auto it_e = test.end();
  
  EXPECT_TRUE(*it_b == 1);
  EXPECT_TRUE(*it_e == 2);
}

TEST(Iterators, EqualCompare) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  auto s21_it_b = s21_test.begin();
  auto s21_it_e = s21_test.end();
  auto std_it_b = std_test.begin();
  auto std_it_e = std_test.end();
  
  EXPECT_TRUE(*s21_it_b == *std_it_b);
  EXPECT_TRUE(*s21_it_e == *std_it_e);
}

TEST(Iterators, NotEqual) {
  s21::list<int> test{1, 2};
  auto it_b = test.begin();
  auto it_e = test.end();
  
  EXPECT_TRUE(*it_b != 2);
  EXPECT_TRUE(*it_e != 1);
  EXPECT_TRUE(*it_b != *it_e);
}

TEST(Iterators, NotEqualCompare) {
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
