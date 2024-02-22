#include "unit_tests.h"

TEST(ListModifiersSwap, ExchangeCorrectInt) {
  s21::list<int> dest = {1, 2, 3, 4, 5};
  s21::list<int> src = {10, 20, 30};
  s21::list<int> copy_dest(dest);
  s21::list<int> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, copy_src));
  EXPECT_TRUE(EqualLists(src, copy_dest));
}

TEST(ListModifiersSwap, ExchangeCorrectChar) {
  s21::list<char> dest = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> src = {'X', 'Y', 'Z'};
  s21::list<char> copy_dest(dest);
  s21::list<char> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, copy_src));
  EXPECT_TRUE(EqualLists(src, copy_dest));
}

TEST(ListModifiersSwap, ExchangeCorrectStr) {
  s21::list<std::string> dest = {"evangelion", "steinsgate", "onepunchman",
                                 "chainsawman", "jojo"};
  s21::list<std::string> src = {"KZN", "MSK", "SPB"};
  s21::list<std::string> copy_dest(dest);
  s21::list<std::string> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, copy_src));
  EXPECT_TRUE(EqualLists(src, copy_dest));
}

TEST(ListModifiersSwap, ExchangeCompareInt) {
  s21::list<int> s21_dest = {1, 2, 3, 4, 5};
  s21::list<int> s21_src = {10, 20, 30};
  std::list<int> std_dest = {1, 2, 3, 4, 5};
  std::list<int> std_src = {10, 20, 30};
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeCompareChar) {
  s21::list<char> s21_dest = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> s21_src = {'X', 'Y', 'Z'};
  std::list<char> std_dest = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_src = {'X', 'Y', 'Z'};
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeCompareStr) {
  s21::list<std::string> s21_dest = {"evangelion", "steinsgate", "onepunchman",
                                     "chainsawman", "jojo"};
  s21::list<std::string> s21_src = {"KZN", "MSK", "SPB"};
  std::list<std::string> std_dest = {"evangelion", "steinsgate", "onepunchman",
                                     "chainsawman", "jojo"};
  std::list<std::string> std_src = {"KZN", "MSK", "SPB"};
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeDestEmptyCorrectInt) {
  s21::list<int> dest;
  s21::list<int> src = {10, 20, 30};
  s21::list<int> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(ListModifiersSwap, ExchangeDestEmptyCorrectChar) {
  s21::list<char> dest;
  s21::list<char> src = {'X', 'Y', 'Z'};
  s21::list<char> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(ListModifiersSwap, ExchangeDestEmptyCorrectStr) {
  s21::list<std::string> dest;
  s21::list<std::string> src = {"KZN", "MSK", "SPB"};
  s21::list<std::string> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(ListModifiersSwap, ExchangeDestEmptyCompareInt) {
  s21::list<int> s21_dest;
  s21::list<int> s21_src = {10, 20, 30};
  std::list<int> std_dest;
  std::list<int> std_src = {10, 20, 30};
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeDestEmptyCompareChar) {
  s21::list<char> s21_dest;
  s21::list<char> s21_src = {'X', 'Y', 'Z'};
  std::list<char> std_dest;
  std::list<char> std_src = {'X', 'Y', 'Z'};
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeDestEmptyCompareStr) {
  s21::list<std::string> s21_dest;
  s21::list<std::string> s21_src = {"KZN", "MSK", "SPB"};
  std::list<std::string> std_dest;
  std::list<std::string> std_src = {"KZN", "MSK", "SPB"};
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeSourceEmptyCorrectInt) {
  s21::list<int> dest = {10, 20, 30};
  s21::list<int> src;
  s21::list<int> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(ListModifiersSwap, ExchangeSourceEmptyCorrectChar) {
  s21::list<char> dest = {'X', 'Y', 'Z'};
  s21::list<char> src;
  s21::list<char> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(ListModifiersSwap, ExchangeSourceEmptyCorrectStr) {
  s21::list<std::string> dest = {"KZN", "MSK", "SPB"};
  s21::list<std::string> src;
  s21::list<std::string> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualLists(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(ListModifiersSwap, ExchangeSourceEmptyCompareInt) {
  s21::list<int> s21_dest = {10, 20, 30};
  s21::list<int> s21_src;
  std::list<int> std_dest = {10, 20, 30};
  std::list<int> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeSourceEmptyCompareChar) {
  s21::list<char> s21_dest = {'X', 'Y', 'Z'};
  s21::list<char> s21_src;
  std::list<char> std_dest = {'X', 'Y', 'Z'};
  std::list<char> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeSourceEmptyCompareStr) {
  s21::list<std::string> s21_dest = {"KZN", "MSK", "SPB"};
  s21::list<std::string> s21_src;
  std::list<std::string> std_dest = {"KZN", "MSK", "SPB"};
  std::list<std::string> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeBothEmptyCorrectInt) {
  s21::list<int> dest;
  s21::list<int> src;
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, src));
}

TEST(ListModifiersSwap, ExchangeBothEmptyCorrectChar) {
  s21::list<char> dest;
  s21::list<char> src;
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, src));
}

TEST(ListModifiersSwap, ExchangeBothEmptyCorrectStr) {
  s21::list<std::string> dest;
  s21::list<std::string> src;
  dest.swap(src);
  EXPECT_TRUE(EqualLists(dest, src));
}

TEST(ListModifiersSwap, ExchangeBothEmptyCompareInt) {
  s21::list<int> s21_dest;
  s21::list<int> s21_src;
  std::list<int> std_dest;
  std::list<int> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

TEST(ListModifiersSwap, ExchangeBothEmptyCompareChar) {
  s21::list<char> s21_dest;
  s21::list<char> s21_src;
  std::list<char> std_dest;
  std::list<char> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualLists(s21_dest, std_dest));
  EXPECT_TRUE(EqualLists(s21_src, std_src));
}

/*TEST(ListModifiersSwap, ExchangeBothEmptyCompareStr) {
 s21::list<std::string> s21_dest;
 s21::list<std::string> s21_src;
 std::list<std::string> std_dest;
 std::list<std::string> std_src;
 s21_dest.swap(s21_src);
 std_dest.swap(std_src);
 EXPECT_TRUE(s21_dest.size() == std_dest.size());
 EXPECT_TRUE(s21_src.size() == std_src.size());
 auto s21_it_1 = s21_dest.begin();
 auto s21_it_2 = s21_src.begin();
 auto std_it_1 = std_dest.begin();
 auto std_it_2 = std_src.begin();
 EXPECT_TRUE(*s21_it_1 == *std_it_1);
 std::cout << *s21_it_1 << std::endl;
 std::cout << *std_it_1 << std::endl;  // segmentation fault here
 EXPECT_TRUE(*s21_it_2 == *std_it_2);
}*/
