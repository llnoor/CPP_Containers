#include "unit_tests.h"

TEST(StackModifiers, SwapCorrectInt) {
  s21::stack<int> dest = {1, 2, 3, 4, 5};
  s21::stack<int> src = {10, 20, 30};
  s21::stack<int> copy_dest(dest);
  s21::stack<int> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, copy_src));
  EXPECT_TRUE(EqualStacks(src, copy_dest));
}

TEST(StackModifiers, SwapCorrectChar) {
  s21::stack<char> dest = {'a', 'b', 'c', 'd', 'e'};
  s21::stack<char> src = {'X', 'Y', 'Z'};
  s21::stack<char> copy_dest(dest);
  s21::stack<char> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, copy_src));
  EXPECT_TRUE(EqualStacks(src, copy_dest));
}

TEST(StackModifiers, SwapCorrectStr) {
  s21::stack<std::string> dest = {"evangelion", "steinsgate", "onepunchman",
                                  "chainsawman", "jojo"};
  s21::stack<std::string> src = {"KZN", "MSK", "SPB"};
  s21::stack<std::string> copy_dest(dest);
  s21::stack<std::string> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, copy_src));
  EXPECT_TRUE(EqualStacks(src, copy_dest));
}

TEST(StackModifiers, SwapCompareInt) {
  s21::stack<int> s21_dest = {1, 2, 3, 4, 5};
  s21::stack<int> s21_src = {10, 20, 30};
  std::stack<int> std_dest;
  for (int i = 1; i != 5 + 1; ++i) {
    std_dest.push(i);
  }
  std::stack<int> std_src;
  std_src.push(10);
  std_src.push(20);
  std_src.push(30);
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapCompareChar) {
  s21::stack<char> s21_dest = {'a', 'b', 'c', 'd', 'e'};
  s21::stack<char> s21_src = {'X', 'Y', 'Z'};
  std::stack<char> std_dest;
  for (char i = 'a'; i != 'e' + 1; ++i) {
    std_dest.push(i);
  }
  std::stack<char> std_src;
  std_src.push('X');
  std_src.push('Y');
  std_src.push('Z');
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapCompareStr) {
  s21::stack<std::string> s21_dest = {"evangelion", "steinsgate", "onepunchman",
                                      "chainsawman", "jojo"};
  s21::stack<std::string> s21_src = {"KZN", "MSK", "SPB"};
  std::stack<std::string> std_dest;
  std_dest.push("evangelion");
  std_dest.push("steinsgate");
  std_dest.push("onepunchman");
  std_dest.push("chainsawman");
  std_dest.push("jojo");
  std::stack<std::string> std_src;
  std_src.push("KZN");
  std_src.push("MSK");
  std_src.push("SPB");
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapDestEmptyCorrectInt) {
  s21::stack<int> dest;
  s21::stack<int> src = {10, 20, 30};
  s21::stack<int> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(StackModifiers, SwapDestEmptyCorrectChar) {
  s21::stack<char> dest;
  s21::stack<char> src = {'X', 'Y', 'Z'};
  s21::stack<char> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(StackModifiers, SwapDestEmptyCorrectStr) {
  s21::stack<std::string> dest;
  s21::stack<std::string> src = {"KZN", "MSK", "SPB"};
  s21::stack<std::string> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(StackModifiers, SwapDestEmptyCompareInt) {
  s21::stack<int> s21_dest;
  s21::stack<int> s21_src = {10, 20, 30};
  std::stack<int> std_dest;
  std::stack<int> std_src;
  std_src.push(10);
  std_src.push(20);
  std_src.push(30);
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapDestEmptyCompareChar) {
  s21::stack<char> s21_dest;
  s21::stack<char> s21_src = {'X', 'Y', 'Z'};
  std::stack<char> std_dest;
  std::stack<char> std_src;
  std_src.push('X');
  std_src.push('Y');
  std_src.push('Z');
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapDestEmptyCompareStr) {
  s21::stack<std::string> s21_dest;
  s21::stack<std::string> s21_src = {"KZN", "MSK", "SPB"};
  std::stack<std::string> std_dest;
  std::stack<std::string> std_src;
  std_src.push("KZN");
  std_src.push("MSK");
  std_src.push("SPB");
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapSourceEmptyCorrectInt) {
  s21::stack<int> dest = {10, 20, 30};
  s21::stack<int> src;
  s21::stack<int> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(StackModifiers, SwapSourceEmptyCorrectChar) {
  s21::stack<char> dest = {'X', 'Y', 'Z'};
  s21::stack<char> src;
  s21::stack<char> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(StackModifiers, SwapSourceEmptyCorrectStr) {
  s21::stack<std::string> dest = {"KZN", "MSK", "SPB"};
  s21::stack<std::string> src;
  s21::stack<std::string> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(StackModifiers, SwapSourceEmptyCompareInt) {
  s21::stack<int> s21_dest = {10, 20, 30};
  s21::stack<int> s21_src;
  std::stack<int> std_dest;
  std_dest.push(10);
  std_dest.push(20);
  std_dest.push(30);
  std::stack<int> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapSourceEmptyCompareChar) {
  s21::stack<char> s21_dest = {'X', 'Y', 'Z'};
  s21::stack<char> s21_src;
  std::stack<char> std_dest;
  std_dest.push('X');
  std_dest.push('Y');
  std_dest.push('Z');
  std::stack<char> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapSourceEmptyCompareStr) {
  s21::stack<std::string> s21_dest = {"KZN", "MSK", "SPB"};
  s21::stack<std::string> s21_src;
  std::stack<std::string> std_dest;
  std_dest.push("KZN");
  std_dest.push("MSK");
  std_dest.push("SPB");
  std::stack<std::string> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapBothEmptyCorrectInt) {
  s21::stack<int> dest;
  s21::stack<int> src;
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, src));
}

TEST(StackModifiers, SwapBothEmptyCorrectChar) {
  s21::stack<char> dest;
  s21::stack<char> src;
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, src));
}

TEST(StackModifiers, SwapBothEmptyCorrectStr) {
  s21::stack<std::string> dest;
  s21::stack<std::string> src;
  dest.swap(src);
  EXPECT_TRUE(EqualStacks(dest, src));
}

TEST(StackModifiers, SwapBothEmptyCompareInt) {
  s21::stack<int> s21_dest;
  s21::stack<int> s21_src;
  std::stack<int> std_dest;
  std::stack<int> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapBothEmptyCompareChar) {
  s21::stack<char> s21_dest;
  s21::stack<char> s21_src;
  std::stack<char> std_dest;
  std::stack<char> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}

TEST(StackModifiers, SwapBothEmptyCompareStr) {
  s21::stack<std::string> s21_dest;
  s21::stack<std::string> s21_src;
  std::stack<std::string> std_dest;
  std::stack<std::string> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualStacks(s21_dest, std_dest));
  EXPECT_TRUE(EqualStacks(s21_src, std_src));
}
