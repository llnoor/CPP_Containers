#include "unit_tests.h"

TEST(ModifiersSwap, ExchangeCorrectInt) {
  s21::list<int> test_1 = {1, 2, 3, 4, 5};
  s21::list<int> test_2 = {10, 20, 30};
  s21::list<int> copy_1(test_1);
  s21::list<int> copy_2(test_2);
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, copy_2));
  EXPECT_TRUE(equalLists(test_2, copy_1));
}

TEST(ModifiersSwap, ExchangeCorrectChar) {
  s21::list<char> test_1 = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> test_2 = {'X', 'Y', 'Z'};
  s21::list<char> copy_1(test_1);
  s21::list<char> copy_2(test_2);
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, copy_2));
  EXPECT_TRUE(equalLists(test_2, copy_1));
}

TEST(ModifiersSwap, ExchangeCorrectStr) {
  s21::list<std::string> test_1 = {"evangelion", "steinsgate", "onepunchman", "chainsawman", "jojo"};
  s21::list<std::string> test_2 = {"KZN", "MSK", "SPB"};
  s21::list<std::string> copy_1(test_1);
  s21::list<std::string> copy_2(test_2);
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, copy_2));
  EXPECT_TRUE(equalLists(test_2, copy_1));
}

TEST(ModifiersSwap, ExchangeCompareInt) {
  s21::list<int> s21_test_1 = {1, 2, 3, 4, 5};
  s21::list<int> s21_test_2 = {10, 20, 30};
  std::list<int> std_test_1 = {1, 2, 3, 4, 5};
  std::list<int> std_test_2 = {10, 20, 30};
  s21_test_1.swap(s21_test_2);
  std_test_1.swap(std_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

TEST(ModifiersSwap, ExchangeCompareChar) {
  s21::list<char> s21_test_1 = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> s21_test_2 = {'X', 'Y', 'Z'};
  std::list<char> std_test_1 = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test_2 = {'X', 'Y', 'Z'};
  s21_test_1.swap(s21_test_2);
  std_test_1.swap(std_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

TEST(ModifiersSwap, ExchangeCompareStr) {
  s21::list<std::string> s21_test_1 = {"evangelion", "steinsgate", "onepunchman", "chainsawman", "jojo"};
  s21::list<std::string> s21_test_2 = {"KZN", "MSK", "SPB"};
  std::list<std::string> std_test_1 = {"evangelion", "steinsgate", "onepunchman", "chainsawman", "jojo"};
  std::list<std::string> std_test_2 = {"KZN", "MSK", "SPB"};
  s21_test_1.swap(s21_test_2);
  std_test_1.swap(std_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

TEST(ModifiersSwap, ExchangeOneEmptyCorrectInt) {
  s21::list<int> test_1;
  s21::list<int> test_2 = {10, 20, 30};
  s21::list<int> compare(test_2);
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, compare));
  EXPECT_TRUE(test_2.empty());
}

TEST(ModifiersSwap, ExchangeOneEmptyCorrectChar) {
  s21::list<char> test_1;
  s21::list<char> test_2 = {'X', 'Y', 'Z'};
  s21::list<char> compare(test_2);
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, compare));
  EXPECT_TRUE(test_2.empty());
}

TEST(ModifiersSwap, ExchangeOneEmptyCorrectStr) {
  s21::list<std::string> test_1;
  s21::list<std::string> test_2 = {"KZN", "MSK", "SPB"};
  s21::list<std::string> compare(test_2);
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, compare));
  EXPECT_TRUE(test_2.empty());
}

TEST(ModifiersSwap, ExchangeOneEmptyCompareInt) {
  s21::list<int> s21_test_1;
  s21::list<int> s21_test_2 = {10, 20, 30};
  std::list<int> std_test_1;
  std::list<int> std_test_2 = {10, 20, 30};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

TEST(ModifiersSwap, ExchangeOneEmptyCompareChar) {
  s21::list<char> s21_test_1;
  s21::list<char> s21_test_2 = {'X', 'Y', 'Z'};
  std::list<char> std_test_1;
  std::list<char> std_test_2 = {'X', 'Y', 'Z'};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

TEST(ModifiersSwap, ExchangeOneEmptyCompareStr) {
  s21::list<std::string> s21_test_1;
  s21::list<std::string> s21_test_2 = {"KZN", "MSK", "SPB"};
  std::list<std::string> std_test_1;
  std::list<std::string> std_test_2 = {"KZN", "MSK", "SPB"};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

TEST(ModifiersSwap, ExchangeBothEmptyCorrectInt) {
  s21::list<int> test_1;
  s21::list<int> test_2;
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, test_2));
}

TEST(ModifiersSwap, ExchangeBothEmptyCorrectChar) {
  s21::list<char> test_1;
  s21::list<char> test_2;
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, test_2));
}

TEST(ModifiersSwap, ExchangeBothEmptyCorrectStr) {
  s21::list<std::string> test_1;
  s21::list<std::string> test_2;
  test_1.swap(test_2);
  EXPECT_TRUE(equalLists(test_1, test_2));
}

TEST(ModifiersSwap, ExchangeBothEmptyCompareInt) {
  s21::list<int> s21_test_1;
  s21::list<int> s21_test_2;
  std::list<int> std_test_1;
  std::list<int> std_test_2;
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

TEST(ModifiersSwap, ExchangeBothEmptyCompareChar) {
  s21::list<char> s21_test_1;
  s21::list<char> s21_test_2;
  std::list<char> std_test_1;
  std::list<char> std_test_2;
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(equalLists(s21_test_1, std_test_1));
  EXPECT_TRUE(equalLists(s21_test_2, std_test_2));
}

/*TEST(ModifiersSwap, ExchangeBothEmptyCompareStr) {
 s21::list<std::string> s21_test_1;
 s21::list<std::string> s21_test_2;
 std::list<std::string> std_test_1;
 std::list<std::string> std_test_2;
 s21_test_1.swap(s21_test_2);
 s21_test_1.swap(s21_test_2);
 EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
 EXPECT_TRUE(s21_test_2.size() == std_test_2.size());
 auto s21_it_1 = s21_test_1.begin();
 auto s21_it_2 = s21_test_2.begin();
 auto std_it_1 = std_test_1.begin();
 auto std_it_2 = std_test_2.begin();
 EXPECT_TRUE(*s21_it_1 == *std_it_1);
 std::cout << *s21_it_1 << std::endl;
 std::cout << *std_it_1 << std::endl;  // segmentation fault here
 EXPECT_TRUE(*s21_it_2 == *std_it_2);
}*/
