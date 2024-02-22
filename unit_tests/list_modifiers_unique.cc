#include "unit_tests.h"

TEST(ListModifiersUnique, EmptyCorrectInt) {
  s21::list<int> test;
  test.unique();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersUnique, EmptyCorrectChar) {
  s21::list<char> test;
  test.unique();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersUnique, EmptyCorrectStr) {
  s21::list<std::string> test;
  test.unique();
  EXPECT_TRUE(test.empty());
}

TEST(ListModifiersUnique, EmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersUnique, EmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersUnique, EmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ListModifiersUnique, OneElementCorrectInt) {
  s21::list<int> test{1};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ListModifiersUnique, OneElementCorrectChar) {
  s21::list<char> test{'a'};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ListModifiersUnique, OneElementCorrectStr) {
  s21::list<std::string> test{"aboba"};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ListModifiersUnique, OneElementCompareInt) {
  s21::list<int> s21_test{1};
  std::list<int> std_test{1};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ListModifiersUnique, OneElementCompareChar) {
  s21::list<char> s21_test{'a'};
  std::list<char> std_test{'a'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ListModifiersUnique, OneElementCompareStr) {
  s21::list<std::string> s21_test{"aboba"};
  std::list<std::string> std_test{"aboba"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ListModifiersUnique, TwoDiffElementsCorrectInt) {
  s21::list<int> test{1, 2};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, TwoDiffElementsCorrectChar) {
  s21::list<char> test{'A', 'Z'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, TwoDiffElementsCorrectStr) {
  s21::list<std::string> test{"sus", "amogus"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, TwoDiffElementsCompareInt) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, TwoDiffElementsCompareChar) {
  s21::list<char> s21_test{'A', 'Z'};
  std::list<char> std_test{'A', 'Z'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, TwoDiffElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "amogus"};
  std::list<std::string> std_test{"sus", "amogus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, TwoSameElementsCorrectInt) {
  s21::list<int> test{1, 1};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ListModifiersUnique, TwoSameElementsCorrectChar) {
  s21::list<char> test{'a', 'a'};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ListModifiersUnique, TwoSameElementsCorrectStr) {
  s21::list<std::string> test{"sus", "sus"};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ListModifiersUnique, TwoSameElementsCompareInt) {
  s21::list<int> s21_test{1, 1};
  std::list<int> std_test{1, 1};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, TwoSameElementsCompareChar) {
  s21::list<char> s21_test{'a', 'a'};
  std::list<char> std_test{'a', 'a'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, TwoSameElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "sus"};
  std::list<std::string> std_test{"sus", "sus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleAllDifferentElementsCorrectInt) {
  s21::list<int> test{1, 2, 3, 4, 5};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleAllDifferentElementsCorrectChar) {
  s21::list<char> test{'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleAllDifferentElementsCorrectStr) {
  s21::list<std::string> test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleAllDifferentElementsCompareInt) {
  s21::list<int> s21_test{1, 2, 3, 4, 5};
  std::list<int> std_test{1, 2, 3, 4, 5};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleAllDifferentElementsCompareChar) {
  s21::list<char> s21_test{'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test{'a', 'b', 'c', 'd', 'e'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleAllDifferentElementsCompareStr) {
  s21::list<std::string> s21_test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  std::list<std::string> std_test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleSomeDuplConseqElementsCorrectInt) {
  s21::list<int> test{1, 1, 1, 2, 3};
  s21::list<int> compare{1, 2, 3};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleSomeDuplConseqElementsCorrectChar) {
  s21::list<char> test{'x', 'x', 'x', 'y', 'z'};
  s21::list<char> compare{'x', 'y', 'z'};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleSomeDuplConseqElementsCorrectStr) {
  s21::list<std::string> test{"sus", "sus", "sus", "among", "us"};
  s21::list<std::string> compare{"sus", "among", "us"};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleSomeDuplConseqElementsCompareInt) {
  s21::list<int> s21_test{1, 1, 1, 2, 3};
  std::list<int> std_test{1, 1, 1, 2, 3};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleSomeDuplConseqElementsCompareChar) {
  s21::list<char> s21_test{'x', 'x', 'x', 'y', 'z'};
  std::list<char> std_test{'x', 'x', 'x', 'y', 'z'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleSomeDuplConseqElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "sus", "sus", "among", "us"};
  std::list<std::string> std_test{"sus", "sus", "sus", "among", "us"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleSomeDuplElementsCorrectInt) {
  s21::list<int> test{1, 2, 3, 2, 1};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleSomeDuplElementsCorrectChar) {
  s21::list<char> test{'x', 'y', 'z', 'y', 'x'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleSomeDuplElementsCorrectStr) {
  s21::list<std::string> test{"sus", "aboba", "amogus", "aboba", "sus"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(EqualLists(test, compare));
}

TEST(ListModifiersUnique, MultipleSomeDuplElementsCompareInt) {
  s21::list<int> s21_test{1, 2, 3, 2, 1};
  std::list<int> std_test{1, 2, 3, 2, 1};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleSomeDuplElementsCompareChar) {
  s21::list<char> s21_test{'x', 'y', 'z', 'y', 'x'};
  std::list<char> std_test{'x', 'y', 'z', 'y', 'x'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}

TEST(ListModifiersUnique, MultipleSomeDuplElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "aboba", "amogus", "aboba", "sus"};
  std::list<std::string> std_test{"sus", "aboba", "amogus", "aboba", "sus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(EqualLists(s21_test, std_test));
}
