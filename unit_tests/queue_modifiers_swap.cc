#include "unit_tests.h"

TEST(QueueModifiers, SwapCorrectInt) {
  s21::queue<int> dest = {1, 2, 3, 4, 5};
  s21::queue<int> src = {10, 20, 30};
  s21::queue<int> copy_dest(dest);
  s21::queue<int> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, copy_src));
  EXPECT_TRUE(EqualQueues(src, copy_dest));
}

TEST(QueueModifiers, SwapCorrectChar) {
  s21::queue<char> dest = {'a', 'b', 'c', 'd', 'e'};
  s21::queue<char> src = {'X', 'Y', 'Z'};
  s21::queue<char> copy_dest(dest);
  s21::queue<char> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, copy_src));
  EXPECT_TRUE(EqualQueues(src, copy_dest));
}

TEST(QueueModifiers, SwapCorrectStr) {
  s21::queue<std::string> dest = {"evangelion", "steinsgate", "onepunchman",
                                  "chainsawman", "jojo"};
  s21::queue<std::string> src = {"KZN", "MSK", "SPB"};
  s21::queue<std::string> copy_dest(dest);
  s21::queue<std::string> copy_src(src);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, copy_src));
  EXPECT_TRUE(EqualQueues(src, copy_dest));
}

TEST(QueueModifiers, SwapCompareInt) {
  s21::queue<int> s21_dest = {1, 2, 3, 4, 5};
  s21::queue<int> s21_src = {10, 20, 30};
  std::queue<int> std_dest;
  for (int i = 1; i != 5 + 1; ++i) {
    std_dest.push(i);
  }
  std::queue<int> std_src;
  std_src.push(10);
  std_src.push(20);
  std_src.push(30);
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapCompareChar) {
  s21::queue<char> s21_dest = {'a', 'b', 'c', 'd', 'e'};
  s21::queue<char> s21_src = {'X', 'Y', 'Z'};
  std::queue<char> std_dest;
  for (char i = 'a'; i != 'e' + 1; ++i) {
    std_dest.push(i);
  }
  std::queue<char> std_src;
  std_src.push('X');
  std_src.push('Y');
  std_src.push('Z');
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapCompareStr) {
  s21::queue<std::string> s21_dest = {"evangelion", "steinsgate", "onepunchman",
                                      "chainsawman", "jojo"};
  s21::queue<std::string> s21_src = {"KZN", "MSK", "SPB"};
  std::queue<std::string> std_dest;
  std_dest.push("evangelion");
  std_dest.push("steinsgate");
  std_dest.push("onepunchman");
  std_dest.push("chainsawman");
  std_dest.push("jojo");
  std::queue<std::string> std_src;
  std_src.push("KZN");
  std_src.push("MSK");
  std_src.push("SPB");
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapDestEmptyCorrectInt) {
  s21::queue<int> dest;
  s21::queue<int> src = {10, 20, 30};
  s21::queue<int> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(QueueModifiers, SwapDestEmptyCorrectChar) {
  s21::queue<char> dest;
  s21::queue<char> src = {'X', 'Y', 'Z'};
  s21::queue<char> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(QueueModifiers, SwapDestEmptyCorrectStr) {
  s21::queue<std::string> dest;
  s21::queue<std::string> src = {"KZN", "MSK", "SPB"};
  s21::queue<std::string> compare(src);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, compare));
  EXPECT_TRUE(src.empty());
}

TEST(QueueModifiers, SwapDestEmptyCompareInt) {
  s21::queue<int> s21_dest;
  s21::queue<int> s21_src = {10, 20, 30};
  std::queue<int> std_dest;
  std::queue<int> std_src;
  std_src.push(10);
  std_src.push(20);
  std_src.push(30);
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapDestEmptyCompareChar) {
  s21::queue<char> s21_dest;
  s21::queue<char> s21_src = {'X', 'Y', 'Z'};
  std::queue<char> std_dest;
  std::queue<char> std_src;
  std_src.push('X');
  std_src.push('Y');
  std_src.push('Z');
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapDestEmptyCompareStr) {
  s21::queue<std::string> s21_dest;
  s21::queue<std::string> s21_src = {"KZN", "MSK", "SPB"};
  std::queue<std::string> std_dest;
  std::queue<std::string> std_src;
  std_src.push("KZN");
  std_src.push("MSK");
  std_src.push("SPB");
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapSourceEmptyCorrectInt) {
  s21::queue<int> dest = {10, 20, 30};
  s21::queue<int> src;
  s21::queue<int> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(QueueModifiers, SwapSourceEmptyCorrectChar) {
  s21::queue<char> dest = {'X', 'Y', 'Z'};
  s21::queue<char> src;
  s21::queue<char> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(QueueModifiers, SwapSourceEmptyCorrectStr) {
  s21::queue<std::string> dest = {"KZN", "MSK", "SPB"};
  s21::queue<std::string> src;
  s21::queue<std::string> compare(dest);
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(src, compare));
  EXPECT_TRUE(dest.empty());
}

TEST(QueueModifiers, SwapSourceEmptyCompareInt) {
  s21::queue<int> s21_dest = {10, 20, 30};
  s21::queue<int> s21_src;
  std::queue<int> std_dest;
  std_dest.push(10);
  std_dest.push(20);
  std_dest.push(30);
  std::queue<int> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapSourceEmptyCompareChar) {
  s21::queue<char> s21_dest = {'X', 'Y', 'Z'};
  s21::queue<char> s21_src;
  std::queue<char> std_dest;
  std_dest.push('X');
  std_dest.push('Y');
  std_dest.push('Z');
  std::queue<char> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapSourceEmptyCompareStr) {
  s21::queue<std::string> s21_dest = {"KZN", "MSK", "SPB"};
  s21::queue<std::string> s21_src;
  std::queue<std::string> std_dest;
  std_dest.push("KZN");
  std_dest.push("MSK");
  std_dest.push("SPB");
  std::queue<std::string> std_src;
  s21_dest.swap(s21_src);
  s21_dest.swap(s21_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapBothEmptyCorrectInt) {
  s21::queue<int> dest;
  s21::queue<int> src;
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, src));
}

TEST(QueueModifiers, SwapBothEmptyCorrectChar) {
  s21::queue<char> dest;
  s21::queue<char> src;
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, src));
}

TEST(QueueModifiers, SwapBothEmptyCorrectStr) {
  s21::queue<std::string> dest;
  s21::queue<std::string> src;
  dest.swap(src);
  EXPECT_TRUE(EqualQueues(dest, src));
}

TEST(QueueModifiers, SwapBothEmptyCompareInt) {
  s21::queue<int> s21_dest;
  s21::queue<int> s21_src;
  std::queue<int> std_dest;
  std::queue<int> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapBothEmptyCompareChar) {
  s21::queue<char> s21_dest;
  s21::queue<char> s21_src;
  std::queue<char> std_dest;
  std::queue<char> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}

TEST(QueueModifiers, SwapBothEmptyCompareStr) {
  s21::queue<std::string> s21_dest;
  s21::queue<std::string> s21_src;
  std::queue<std::string> std_dest;
  std::queue<std::string> std_src;
  s21_dest.swap(s21_src);
  std_dest.swap(std_src);
  EXPECT_TRUE(EqualQueues(s21_dest, std_dest));
  EXPECT_TRUE(EqualQueues(s21_src, std_src));
}
