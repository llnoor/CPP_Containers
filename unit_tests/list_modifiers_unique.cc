#include "unit_tests.h"

TEST(ModifiersUnique, EmptyCorrectInt) {
  s21::list<int> test;
  test.unique();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersUnique, EmptyCorrectChar) {
  s21::list<char> test;
  test.unique();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersUnique, EmptyCorrectStr) {
  s21::list<std::string> test;
  test.unique();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersUnique, EmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersUnique, EmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersUnique, EmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersUnique, OneElementCorrectInt) {
  s21::list<int> test{1};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ModifiersUnique, OneElementCorrectChar) {
  s21::list<char> test{'a'};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ModifiersUnique, OneElementCorrectStr) {
  s21::list<std::string> test{"aboba"};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ModifiersUnique, OneElementCompareInt) {
  s21::list<int> s21_test{1};
  std::list<int> std_test{1};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ModifiersUnique, OneElementCompareChar) {
  s21::list<char> s21_test{'a'};
  std::list<char> std_test{'a'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ModifiersUnique, OneElementCompareStr) {
  s21::list<std::string> s21_test{"aboba"};
  std::list<std::string> std_test{"aboba"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
}

TEST(ModifiersUnique, TwoDiffElementsCorrectInt) {
  s21::list<int> test{1, 2};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, TwoDiffElementsCorrectChar) {
  s21::list<char> test{'A', 'Z'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, TwoDiffElementsCorrectStr) {
  s21::list<std::string> test{"sus", "amogus"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, TwoDiffElementsCompareInt) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, TwoDiffElementsCompareChar) {
  s21::list<char> s21_test{'A', 'Z'};
  std::list<char> std_test{'A', 'Z'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, TwoDiffElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "amogus"};
  std::list<std::string> std_test{"sus", "amogus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, TwoSameElementsCorrectInt) {
  s21::list<int> test{1, 1};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ModifiersUnique, TwoSameElementsCorrectChar) {
  s21::list<char> test{'a', 'a'};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ModifiersUnique, TwoSameElementsCorrectStr) {
  s21::list<std::string> test{"sus", "sus"};
  test.unique();
  EXPECT_TRUE(test.size() == 1);
  EXPECT_TRUE(test.front() == test.back());
}

TEST(ModifiersUnique, TwoSameElementsCompareInt) {
  s21::list<int> s21_test{1, 1};
  std::list<int> std_test{1, 1};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, TwoSameElementsCompareChar) {
  s21::list<char> s21_test{'a', 'a'};
  std::list<char> std_test{'a', 'a'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, TwoSameElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "sus"};
  std::list<std::string> std_test{"sus", "sus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCorrectInt) {
  s21::list<int> test{1, 2, 3, 4, 5};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCorrectChar) {
  s21::list<char> test{'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCorrectStr) {
  s21::list<std::string> test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCompareInt) {
  s21::list<int> s21_test{1, 2, 3, 4, 5};
  std::list<int> std_test{1, 2, 3, 4, 5};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCompareChar) {
  s21::list<char> s21_test{'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test{'a', 'b', 'c', 'd', 'e'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCompareStr) {
  s21::list<std::string> s21_test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  std::list<std::string> std_test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCorrectInt) {
  s21::list<int> test{1, 1, 1, 2, 3};
  s21::list<int> compare{1, 2, 3};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCorrectChar) {
  s21::list<char> test{'x', 'x', 'x', 'y', 'z'};
  s21::list<char> compare{'x', 'y', 'z'};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCorrectStr) {
  s21::list<std::string> test{"sus", "sus", "sus", "among", "us"};
  s21::list<std::string> compare{"sus", "among", "us"};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCompareInt) {
  s21::list<int> s21_test{1, 1, 1, 2, 3};
  std::list<int> std_test{1, 1, 1, 2, 3};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCompareChar) {
  s21::list<char> s21_test{'x', 'x', 'x', 'y', 'z'};
  std::list<char> std_test{'x', 'x', 'x', 'y', 'z'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "sus", "sus", "among", "us"};
  std::list<std::string> std_test{"sus", "sus", "sus", "among", "us"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCorrectInt) {
  s21::list<int> test{1, 2, 3, 2, 1};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCorrectChar) {
  s21::list<char> test{'x', 'y', 'z', 'y', 'x'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCorrectStr) {
  s21::list<std::string> test{"sus", "aboba", "amogus", "aboba", "sus"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(equalLists(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCompareInt) {
  s21::list<int> s21_test{1, 2, 3, 2, 1};
  std::list<int> std_test{1, 2, 3, 2, 1};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCompareChar) {
  s21::list<char> s21_test{'x', 'y', 'z', 'y', 'x'};
  std::list<char> std_test{'x', 'y', 'z', 'y', 'x'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "aboba", "amogus", "aboba", "sus"};
  std::list<std::string> std_test{"sus", "aboba", "amogus", "aboba", "sus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(equalLists(s21_test, std_test));
}
