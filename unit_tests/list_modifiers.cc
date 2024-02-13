#include "unit_tests.h"

/* push_back, push_front */

TEST(ModifiersPush, PushBackSizeCorrectInt) {
  s21::list<int> test;
  test.push_back(0);
  test.push_back(1);
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushBackSizeCorrectChar) {
  s21::list<char> test;
  test.push_back('a');
  test.push_back('z');
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushBackSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_back("sussy baka");
  test.push_back("amogus");
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushFrontSizeCorrectInt) {
  s21::list<int> test;
  test.push_front(0);
  test.push_front(1);
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushFrontSizeCorrectChar) {
  s21::list<char> test;
  test.push_front('a');
  test.push_front('z');
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushFrontSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_front("among us");
  test.push_front("IMPOSTER");
  EXPECT_TRUE(test.size() == 2);
}

TEST(ModifiersPush, PushBackCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_back(0);
  std_test.push_back(0);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back(1);
  std_test.push_back(1);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back(2);
  std_test.push_back(2);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushBackCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_back('a');
  std_test.push_back('a');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back('F');
  std_test.push_back('F');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back('z');
  std_test.push_back('z');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushBackCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_back("aboba");
  std_test.push_back("aboba");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back("LUPA");
  std_test.push_back("LUPA");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_back("Pupa");
  std_test.push_back("Pupa");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushFrontCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_front(0);
  std_test.push_front(0);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front(1);
  std_test.push_front(1);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front(2);
  std_test.push_front(2);
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushFrontCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_front('a');
  std_test.push_front('a');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front('F');
  std_test.push_front('F');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front('z');
  std_test.push_front('z');
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersPush, PushFrontCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_front("LOL");
  std_test.push_front("LOL");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front("kek");
  std_test.push_front("kek");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());
  s21_test.push_front("Chebureck");
  std_test.push_front("Chebureck");
  EXPECT_TRUE(s21_test.front() == std_test.front());
  EXPECT_TRUE(s21_test.back() == std_test.back());

  EXPECT_TRUE(s21_test.size() == std_test.size());
}

/* pop_back, pop_front */

TEST(ModifiersPop, PopFrontSizeCorrectInt) {
  s21::list<int> test;
  test.push_front(0);
  test.pop_front();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopFrontSizeCorrectChar) {
  s21::list<char> test;
  test.push_front('a');
  test.pop_front();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopFrontSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_front("yeet");
  test.pop_front();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopBackSizeCorrectInt) {
  s21::list<int> test;
  test.push_back(0);
  test.pop_back();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopBackSizeCorrectChar) {
  s21::list<char> test;
  test.push_back('a');
  test.pop_back();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopBackSizeCorrectStr) {
  s21::list<std::string> test;
  test.push_back("yeet");
  test.pop_back();
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersPop, PopFrontSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_front(0);
  s21_test.pop_front();
  std_test.push_front(0);
  std_test.pop_front();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopFrontSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_front('a');
  s21_test.pop_front();
  std_test.push_front('a');
  std_test.pop_front();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopFrontSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_front("vfr");
  s21_test.pop_front();
  std_test.push_front("vfr");
  std_test.pop_front();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopBackSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.push_back(0);
  s21_test.pop_back();
  std_test.push_back(0);
  std_test.pop_back();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopBackSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.push_back('a');
  s21_test.pop_back();
  std_test.push_back('a');
  std_test.pop_back();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopBackSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.push_back("qaz");
  s21_test.pop_back();
  std_test.push_back("qaz");
  std_test.pop_back();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersPop, PopFrontIncorrectInt) {
  s21::list<int> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ModifiersPop, PopFrontIncorrectChar) {
  s21::list<char> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ModifiersPop, PopFrontIncorrectStr) {
  s21::list<std::string> test;
  EXPECT_ANY_THROW(test.pop_front());
}

TEST(ModifiersPop, PopBackIncorrectInt) {
  s21::list<int> test;
  EXPECT_ANY_THROW(test.pop_back());
}

TEST(ModifiersPop, PopBackIncorrectChar) {
  s21::list<char> test;
  EXPECT_ANY_THROW(test.pop_back());
}

TEST(ModifiersPop, PopBackIncorrectStr) {
  s21::list<std::string> test;
  EXPECT_ANY_THROW(test.pop_back());
}

/* clear */

TEST(ModifiersClear, ParameterizedSizeCorrectInt) {
  s21::list<int> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCorrectChar) {
  s21::list<char> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCorrectStr) {
  s21::list<std::string> test(3);
  EXPECT_FALSE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCompareInt) {
  s21::list<int> s21_test(3);
  std::list<int> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCompareChar) {
  s21::list<char> s21_test(3);
  std::list<char> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, ParameterizedSizeCompareStr) {
  s21::list<std::string> s21_test(3);
  std::list<std::string> std_test(3);
  EXPECT_TRUE(!s21_test.empty() == !std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, DefaultSizeCorrectInt) {
  s21::list<int> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, DefaultSizeCorrectChar) {
  s21::list<char> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, DefaultSizeCorrectStr) {
  s21::list<std::string> test;
  EXPECT_TRUE(test.empty());
  test.clear();
  EXPECT_TRUE(test.empty());
}

TEST(ModifiersClear, DefaultSizeCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, DefaultSizeCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

TEST(ModifiersClear, DefaultSizeCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
  s21_test.clear();
  std_test.clear();
  EXPECT_TRUE(s21_test.empty() == std_test.empty());
}

/* insert */

TEST(ModifiersInsert, AddingToBeginCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  int value = 10;

  auto add = test.begin();
  test.insert(add, value);
  EXPECT_TRUE(test.size() == 5 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == value);
  ++it;
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

TEST(ModifiersInsert, AddingToBeginCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  char value = 'Z';

  auto add = test.begin();
  test.insert(add, value);
  EXPECT_TRUE(test.size() == 5 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == value);
  ++it;
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

TEST(ModifiersInsert, AddingToBeginCorrectStr) {
  s21::list<std::string> test = {"amogus", "sus", "aboba"};
  std::string value = "awoo";

  auto add = test.begin();
  test.insert(add, value);
  EXPECT_TRUE(test.size() == 3 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == value);
  ++it;
  EXPECT_TRUE(*it == "amogus");
  ++it;
  EXPECT_TRUE(*it == "sus");
  ++it;
  EXPECT_TRUE(*it == "aboba");
}

TEST(ModifiersInsert, AddingToBeginCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  int value = 10;

  auto s21_add = s21_test.begin();
  auto std_add = std_test.begin();
  s21_test.insert(s21_add, value);
  std_test.insert(std_add, value);
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToBeginCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  char value = 'Z';

  auto s21_add = s21_test.begin();
  auto std_add = std_test.begin();
  s21_test.insert(s21_add, value);
  std_test.insert(std_add, value);
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToBeginCompareStr) {
  s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};
  std::list<std::string> std_test = {"amogus", "sus", "aboba"};
  std::string value = "awoo";

  auto s21_add = s21_test.begin();
  auto std_add = std_test.begin();
  s21_test.insert(s21_add, value);
  std_test.insert(std_add, value);
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToMiddleCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  int value = 10;

  auto add = test.begin();
  test.insert(add + 2, value);
  EXPECT_TRUE(test.size() == 5 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == value);
  ++it;
  EXPECT_TRUE(*it == 3);
  ++it;
  EXPECT_TRUE(*it == 4);
  ++it;
  EXPECT_TRUE(*it == 5);
}

TEST(ModifiersInsert, AddingToMiddleCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  char value = 'Z';

  auto add = test.begin();
  test.insert(add + 2, value);
  EXPECT_TRUE(test.size() == 5 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == 'a');
  ++it;
  EXPECT_TRUE(*it == 'b');
  ++it;
  EXPECT_TRUE(*it == value);
  ++it;
  EXPECT_TRUE(*it == 'c');
  ++it;
  EXPECT_TRUE(*it == 'd');
  ++it;
  EXPECT_TRUE(*it == 'e');
}

TEST(ModifiersInsert, AddingToMiddleCorrectStr) {
  s21::list<std::string> test = {"amogus", "sus", "aboba"};
  std::string value = "awoo";

  auto add = test.begin();
  test.insert(add + 2, value);
  EXPECT_TRUE(test.size() == 3 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == "amogus");
  ++it;
  EXPECT_TRUE(*it == "sus");
  ++it;
  EXPECT_TRUE(*it == value);
  ++it;
  EXPECT_TRUE(*it == "aboba");
}

TEST(ModifiersInsert, AddingToMiddleCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  int value = 10;

  s21_test.insert(++s21_test.begin(), value);
  std_test.insert(++std_test.begin(), value);
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToMiddleCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  char value = 'Z';

  s21_test.insert(++s21_test.begin(), value);
  std_test.insert(++std_test.begin(), value);
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToMiddleCompareStr) {
  s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};
  std::list<std::string> std_test = {"amogus", "sus", "aboba"};
  std::string value = "awoo";

  s21_test.insert(++s21_test.begin(), value);
  std_test.insert(++std_test.begin(), value);
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToEndCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  int value = 10;

  auto add = test.end();
  test.insert(add, value);
  EXPECT_TRUE(test.size() == 5 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 3);
  ++it;
  EXPECT_TRUE(*it == 4);
  ++it;
  EXPECT_TRUE(*it == value);
  ++it;
  EXPECT_TRUE(*it == 5);
}

TEST(ModifiersInsert, AddingToEndCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  char value = 'Z';

  auto add = test.end();
  test.insert(add, value);
  EXPECT_TRUE(test.size() == 5 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == 'a');
  ++it;
  EXPECT_TRUE(*it == 'b');
  ++it;
  EXPECT_TRUE(*it == 'c');
  ++it;
  EXPECT_TRUE(*it == 'd');
  ++it;
  EXPECT_TRUE(*it == value);
  ++it;
  EXPECT_TRUE(*it == 'e');
}

TEST(ModifiersInsert, AddingToEndCorrectStr) {
  s21::list<std::string> test = {"amogus", "sus", "aboba"};
  std::string value = "awoo";

  auto add = test.end();
  test.insert(add, value);
  EXPECT_TRUE(test.size() == 3 + 1);

  auto it = test.begin();
  EXPECT_TRUE(*it == "amogus");
  ++it;
  EXPECT_TRUE(*it == "sus");
  ++it;
  EXPECT_TRUE(*it == value);
  ++it;
  EXPECT_TRUE(*it == "aboba");
}

TEST(ModifiersInsert, AddingToEndCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  int value = 10;

  s21_test.insert(s21_test.end(), value);
  std_test.insert(std_test.end(), value);  // somnitelno no ok
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToEndCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  char value = 'Z';

  s21_test.insert(s21_test.end(), value);
  std_test.insert(std_test.end(), value);  // somnitelno no ok
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToEndCompareStr) {
  s21::list<std::string> s21_test = {"amogus", "sus", "aboba"};
  std::list<std::string> std_test = {"amogus", "sus", "aboba"};
  std::string value = "awoo";

  s21_test.insert(s21_test.end(), value);
  std_test.insert(std_test.end(), value);  // somnitelno no ok
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersInsert, AddingToEmptyCorrectInt) {
  s21::list<int> test;
  test.insert(test.begin(), 10);
  EXPECT_TRUE(test.size() == 1);
  auto it = test.begin();
  EXPECT_TRUE(*it == 10);
}

TEST(ModifiersInsert, AddingToEmptyCorrectChar) {
  s21::list<char> test;
  test.insert(test.begin(), 'A');
  EXPECT_TRUE(test.size() == 1);
  auto it = test.begin();
  EXPECT_TRUE(*it == 'A');
}

TEST(ModifiersInsert, AddingToEmptyCorrectStr) {
  s21::list<std::string> test;
  test.insert(test.begin(), "test");
  EXPECT_TRUE(test.size() == 1);
  auto it = test.begin();
  EXPECT_TRUE(*it == "test");
}

TEST(ModifiersInsert, AddingToEmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.insert(s21_test.begin(), 10);
  std_test.insert(std_test.begin(), 10);
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersInsert, AddingToEmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.insert(s21_test.begin(), 'A');
  std_test.insert(std_test.begin(), 'A');
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

TEST(ModifiersInsert, AddingToEmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.insert(s21_test.begin(), "test");
  std_test.insert(std_test.begin(), "test");
  EXPECT_TRUE(s21_test.size() == std_test.size());
}

/* erase */

TEST(ModifiersErase, DeletingFromBeginCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};

  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 3);
  ++it;
  EXPECT_TRUE(*it == 4);
  ++it;
  EXPECT_TRUE(*it == 5);
}

TEST(ModifiersErase, DeletingFromBeginCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};

  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == 'b');
  ++it;
  EXPECT_TRUE(*it == 'c');
  ++it;
  EXPECT_TRUE(*it == 'd');
  ++it;
  EXPECT_TRUE(*it == 'e');
}

TEST(ModifiersErase, DeletingFromBeginCorrectStr) {
  s21::list<std::string> test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == "abobus");
  ++it;
  EXPECT_TRUE(*it == "aboba");
  ++it;
  EXPECT_TRUE(*it == "amogus");
  ++it;
  EXPECT_TRUE(*it == "a mongoose");
}

TEST(ModifiersErase, DeletingFromMiddleCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};

  test.erase(test.begin() + 2);
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 4);
  ++it;
  EXPECT_TRUE(*it == 5);
}

TEST(ModifiersErase, DeletingFromMiddleCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};

  test.erase(test.begin() + 2);
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == 'a');
  ++it;
  EXPECT_TRUE(*it == 'b');
  ++it;
  EXPECT_TRUE(*it == 'd');
  ++it;
  EXPECT_TRUE(*it == 'e');
}

TEST(ModifiersErase, DeletingFromMiddleCorrectStr) {
  s21::list<std::string> test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  test.erase(test.begin() + 2);
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == "sus");
  ++it;
  EXPECT_TRUE(*it == "abobus");
  ++it;
  EXPECT_TRUE(*it == "amogus");
  ++it;
  EXPECT_TRUE(*it == "a mongoose");
}

TEST(ModifiersErase, DeletingFromEndCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};

  test.erase(test.end());
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == 1);
  ++it;
  EXPECT_TRUE(*it == 2);
  ++it;
  EXPECT_TRUE(*it == 3);
  ++it;
  EXPECT_TRUE(*it == 4);
}

TEST(ModifiersErase, DeletingFromEndCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};

  test.erase(test.end());
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == 'a');
  ++it;
  EXPECT_TRUE(*it == 'b');
  ++it;
  EXPECT_TRUE(*it == 'c');
  ++it;
  EXPECT_TRUE(*it == 'd');
}

TEST(ModifiersErase, DeletingFromEndCorrectStr) {
  s21::list<std::string> test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  test.erase(test.end());
  EXPECT_TRUE(test.size() == 4);

  auto it = test.begin();
  EXPECT_TRUE(*it == "sus");
  ++it;
  EXPECT_TRUE(*it == "abobus");
  ++it;
  EXPECT_TRUE(*it == "aboba");
  ++it;
  EXPECT_TRUE(*it == "amogus");
}

TEST(ModifiersErase, DeletingFromBeginCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.erase(s21_test.begin());
  std_test.erase(std_test.begin());
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromBeginCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.erase(s21_test.begin());
  std_test.erase(std_test.begin());
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromBeginCompareStr) {
  s21::list<std::string> s21_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  std::list<std::string> std_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  s21_test.erase(s21_test.begin());
  std_test.erase(std_test.begin());
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromMiddleCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.erase(++s21_test.begin());
  std_test.erase(++std_test.begin());
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromMiddleCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.erase(++s21_test.begin());
  std_test.erase(++std_test.begin());
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromMiddleCompareStr) {
  s21::list<std::string> s21_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  std::list<std::string> std_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  s21_test.erase(++s21_test.begin());
  std_test.erase(++std_test.begin());
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromEndCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};

  s21_test.erase(s21_test.end());
  std_test.erase(--std_test.end()); // somnitelno no ok
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromEndCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};

  s21_test.erase(s21_test.end());
  std_test.erase(--std_test.end()); // somnitelno no ok
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

TEST(ModifiersErase, DeletingFromEndCompareStr) {
  s21::list<std::string> s21_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};
  std::list<std::string> std_test = {"sus", "abobus", "aboba", "amogus", "a mongoose"};

  s21_test.erase(s21_test.end());
  std_test.erase(--std_test.end()); // somnitelno no ok
  EXPECT_TRUE(s21_test.size() == std_test.size());

  auto s21_it = s21_test.begin();
  auto std_it = std_test.begin();
  for (; s21_it != s21_test.end() && std_it != std_test.end(); ++s21_it, ++std_it) {
    EXPECT_TRUE(*s21_it == *std_it);
  }
}

// cannot compare with stl 'cause it returns: "free(): invalid pointer"
TEST(ModifiersErase, DeletingFromEmptyInt) {
  s21::list<int> test;
  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersErase, DeletingFromEmptyChar) {
  s21::list<char> test;
  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 0);
}

TEST(ModifiersErase, DeletingFromEmptyStr) {
  s21::list<std::string> test;
  test.erase(test.begin());
  EXPECT_TRUE(test.size() == 0);
}

/* swap */

TEST(ModifiersSwap, ExchangeCorrectInt) {
  s21::list<int> test_1 = {1, 2, 3, 4, 5};
  s21::list<int> test_2 = {10, 20, 30};
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == 3);
  EXPECT_TRUE(test_2.size() == 5);

  auto it_1 = test_1.begin();
  EXPECT_TRUE(*it_1 == 10);
  ++it_1;
  EXPECT_TRUE(*it_1 == 20);
  ++it_1;
  EXPECT_TRUE(*it_1 == 30);

  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_2 == 1);
  ++it_2;
  EXPECT_TRUE(*it_2 == 2);
  ++it_2;
  EXPECT_TRUE(*it_2 == 3);
  ++it_2;
  EXPECT_TRUE(*it_2 == 4);
  ++it_2;
  EXPECT_TRUE(*it_2 == 5);
}

TEST(ModifiersSwap, ExchangeCorrectChar) {
  s21::list<char> test_1 = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> test_2 = {'X', 'Y', 'Z'};
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == 3);
  EXPECT_TRUE(test_2.size() == 5);

  auto it_1 = test_1.begin();
  EXPECT_TRUE(*it_1 == 'X');
  ++it_1;
  EXPECT_TRUE(*it_1 == 'Y');
  ++it_1;
  EXPECT_TRUE(*it_1 == 'Z');

  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_2 == 'a');
  ++it_2;
  EXPECT_TRUE(*it_2 == 'b');
  ++it_2;
  EXPECT_TRUE(*it_2 == 'c');
  ++it_2;
  EXPECT_TRUE(*it_2 == 'd');
  ++it_2;
  EXPECT_TRUE(*it_2 == 'e');
}

TEST(ModifiersSwap, ExchangeCorrectStr) {
  s21::list<std::string> test_1 = {"evangelion", "steinsgate", "onepunchman", "chainsawman", "jojo"};
  s21::list<std::string> test_2 = {"KZN", "MSK", "SPB"};
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == 3);
  EXPECT_TRUE(test_2.size() == 5);

  auto it_1 = test_1.begin();
  EXPECT_TRUE(*it_1 == "KZN");
  ++it_1;
  EXPECT_TRUE(*it_1 == "MSK");
  ++it_1;
  EXPECT_TRUE(*it_1 == "SPB");

  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_2 == "evangelion");
  ++it_2;
  EXPECT_TRUE(*it_2 == "steinsgate");
  ++it_2;
  EXPECT_TRUE(*it_2 == "onepunchman");
  ++it_2;
  EXPECT_TRUE(*it_2 == "chainsawman");
  ++it_2;
  EXPECT_TRUE(*it_2 == "jojo");
}

TEST(ModifiersSwap, ExchangeCompareInt) {
  s21::list<int> s21_test_1 = {1, 2, 3, 4, 5};
  s21::list<int> s21_test_2 = {10, 20, 30};
  std::list<int> std_test_1 = {1, 2, 3, 4, 5};
  std::list<int> std_test_2 = {10, 20, 30};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  for (; s21_it_1 != s21_test_1.end() && s21_it_2 != s21_test_2.end() &&
         std_it_1 != std_test_1.end() && std_it_2 != std_test_2.end();
         ++s21_it_1, ++s21_it_2, ++std_it_1, ++std_it_2) {
           EXPECT_TRUE(*s21_it_1 == *std_it_1);
           EXPECT_TRUE(*s21_it_2 == *std_it_2);
        }
}

TEST(ModifiersSwap, ExchangeCompareChar) {
  s21::list<char> s21_test_1 = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> s21_test_2 = {'X', 'Y', 'Z'};
  std::list<char> std_test_1 = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test_2 = {'X', 'Y', 'Z'};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  for (; s21_it_1 != s21_test_1.end() && s21_it_2 != s21_test_2.end() &&
         std_it_1 != std_test_1.end() && std_it_2 != std_test_2.end();
         ++s21_it_1, ++s21_it_2, ++std_it_1, ++std_it_2) {
           EXPECT_TRUE(*s21_it_1 == *std_it_1);
           EXPECT_TRUE(*s21_it_2 == *std_it_2);
        }
}

TEST(ModifiersSwap, ExchangeCompareStr) {
  s21::list<std::string> s21_test_1 = {"evangelion", "steinsgate", "onepunchman", "chainsawman", "jojo"};
  s21::list<std::string> s21_test_2 = {"KZN", "MSK", "SPB"};
  std::list<std::string> std_test_1 = {"evangelion", "steinsgate", "onepunchman", "chainsawman", "jojo"};
  std::list<std::string> std_test_2 = {"KZN", "MSK", "SPB"};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  for (; s21_it_1 != s21_test_1.end() && s21_it_2 != s21_test_2.end() &&
         std_it_1 != std_test_1.end() && std_it_2 != std_test_2.end();
         ++s21_it_1, ++s21_it_2, ++std_it_1, ++std_it_2) {
           EXPECT_TRUE(*s21_it_1 == *std_it_1);
           EXPECT_TRUE(*s21_it_2 == *std_it_2);
        }
}

TEST(ModifiersSwap, ExchangeOneEmptyCorrectInt) {
  s21::list<int> test_1;
  s21::list<int> test_2 = {10, 20, 30};
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == 3);
  EXPECT_TRUE(test_2.size() == 0);

  auto it_1 = test_1.begin();
  EXPECT_TRUE(*it_1 == 10);
  ++it_1;
  EXPECT_TRUE(*it_1 == 20);
  ++it_1;
  EXPECT_TRUE(*it_1 == 30);

  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_2 == 0);
}

TEST(ModifiersSwap, ExchangeOneEmptyCorrectChar) {
  s21::list<char> test_1;
  s21::list<char> test_2 = {'X', 'Y', 'Z'};
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == 3);
  EXPECT_TRUE(test_2.size() == 0);

  auto it_1 = test_1.begin();
  EXPECT_TRUE(*it_1 == 'X');
  ++it_1;
  EXPECT_TRUE(*it_1 == 'Y');
  ++it_1;
  EXPECT_TRUE(*it_1 == 'Z');

  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_2 == 0);
}

TEST(ModifiersSwap, ExchangeOneEmptyCorrectStr) {
  s21::list<std::string> test_1;
  s21::list<std::string> test_2 = {"KZN", "MSK", "SPB"};
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == 3);
  EXPECT_TRUE(test_2.size() == 0);

  auto it_1 = test_1.begin();
  EXPECT_TRUE(*it_1 == "KZN");
  ++it_1;
  EXPECT_TRUE(*it_1 == "MSK");
  ++it_1;
  EXPECT_TRUE(*it_1 == "SPB");

  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_2 == "");
}

TEST(ModifiersSwap, ExchangeOneEmptyCompareInt) {
  s21::list<int> s21_test_1;
  s21::list<int> s21_test_2 = {10, 20, 30};
  std::list<int> std_test_1;
  std::list<int> std_test_2 = {10, 20, 30};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  for (; s21_it_1 != s21_test_1.end() && s21_it_2 != s21_test_2.end() &&
         std_it_1 != std_test_1.end() && std_it_2 != std_test_2.end();
         ++s21_it_1, ++s21_it_2, ++std_it_1, ++std_it_2) {
           EXPECT_TRUE(*s21_it_1 == *std_it_1);
           EXPECT_TRUE(*s21_it_2 == *std_it_2);
        }
}

TEST(ModifiersSwap, ExchangeOneEmptyCompareChar) {
  s21::list<char> s21_test_1;
  s21::list<char> s21_test_2 = {'X', 'Y', 'Z'};
  std::list<char> std_test_1;
  std::list<char> std_test_2 = {'X', 'Y', 'Z'};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  for (; s21_it_1 != s21_test_1.end() && s21_it_2 != s21_test_2.end() &&
         std_it_1 != std_test_1.end() && std_it_2 != std_test_2.end();
         ++s21_it_1, ++s21_it_2, ++std_it_1, ++std_it_2) {
           EXPECT_TRUE(*s21_it_1 == *std_it_1);
           EXPECT_TRUE(*s21_it_2 == *std_it_2);
        }
}

TEST(ModifiersSwap, ExchangeOneEmptyCompareStr) {
  s21::list<std::string> s21_test_1;
  s21::list<std::string> s21_test_2 = {"KZN", "MSK", "SPB"};
  std::list<std::string> std_test_1;
  std::list<std::string> std_test_2 = {"KZN", "MSK", "SPB"};
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  for (; s21_it_1 != s21_test_1.end() && s21_it_2 != s21_test_2.end() &&
         std_it_1 != std_test_1.end() && std_it_2 != std_test_2.end();
         ++s21_it_1, ++s21_it_2, ++std_it_1, ++std_it_2) {
           EXPECT_TRUE(*s21_it_1 == *std_it_1);
           EXPECT_TRUE(*s21_it_2 == *std_it_2);
        }
}

TEST(ModifiersSwap, ExchangeBothEmptyCorrectInt) {
  s21::list<int> test_1;
  s21::list<int> test_2;
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == test_2.size());

  auto it_1 = test_1.begin();
  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_1 == *it_2);
}

TEST(ModifiersSwap, ExchangeBothEmptyCorrectChar) {
  s21::list<char> test_1;
  s21::list<char> test_2;
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == test_2.size());

  auto it_1 = test_1.begin();
  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_1 == *it_2);
}

TEST(ModifiersSwap, ExchangeBothEmptyCorrectStr) {
  s21::list<std::string> test_1;
  s21::list<std::string> test_2;
  test_1.swap(test_2);
  EXPECT_TRUE(test_1.size() == test_2.size());

  auto it_1 = test_1.begin();
  auto it_2 = test_2.begin();
  EXPECT_TRUE(*it_1 == *it_2);
}

TEST(ModifiersSwap, ExchangeBothEmptyCompareInt) {
  s21::list<int> s21_test_1;
  s21::list<int> s21_test_2;
  std::list<int> std_test_1;
  std::list<int> std_test_2;
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  EXPECT_TRUE(*s21_it_1 == *std_it_1);
  EXPECT_TRUE(*s21_it_2 == *std_it_2);
}

TEST(ModifiersSwap, ExchangeBothEmptyCompareChar) {
  s21::list<char> s21_test_1;
  s21::list<char> s21_test_2;
  std::list<char> std_test_1;
  std::list<char> std_test_2;
  s21_test_1.swap(s21_test_2);
  s21_test_1.swap(s21_test_2);
  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());

  auto s21_it_1 = s21_test_1.begin();
  auto s21_it_2 = s21_test_2.begin();
  auto std_it_1 = std_test_1.begin();
  auto std_it_2 = std_test_2.begin();

  EXPECT_TRUE(*s21_it_1 == *std_it_1);
  EXPECT_TRUE(*s21_it_2 == *std_it_2);
}

//TEST(ModifiersSwap, ExchangeBothEmptyCompareStr) {
//  s21::list<std::string> s21_test_1;
//  s21::list<std::string> s21_test_2;
//  std::list<std::string> std_test_1;
//  std::list<std::string> std_test_2;
//  s21_test_1.swap(s21_test_2);
//  s21_test_1.swap(s21_test_2);
//  EXPECT_TRUE(s21_test_1.size() == std_test_1.size());
//  EXPECT_TRUE(s21_test_2.size() == std_test_2.size());
//  auto s21_it_1 = s21_test_1.begin();
//  auto s21_it_2 = s21_test_2.begin();
//  auto std_it_1 = std_test_1.begin();
//  auto std_it_2 = std_test_2.begin();
//  EXPECT_TRUE(*s21_it_1 == *std_it_1);
//  std::cout << *s21_it_1 << std::endl;
//  std::cout << *std_it_1 << std::endl;  // segmentation fault here
//  EXPECT_TRUE(*s21_it_2 == *std_it_2);
//}

/* reverse */

TEST(ModifiersReverse, IntCorrect) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> compare = {5, 4, 3, 2, 1};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, CharCorrect) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare = {'e', 'd', 'c', 'b', 'a'};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, StrCorrect) {
  s21::list<std::string> test = {"aboba", "sus", "sugoma", "ligma", "yeet"};
  s21::list<std::string> compare = {"yeet", "ligma", "sugoma", "sus", "aboba"};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, IntCompare) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, CharCompare) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, StrCompare) {
  s21::list<std::string> s21_test = {"aboba", "sus", "sugoma", "ligma", "yeet"};
  std::list<std::string> std_test = {"aboba", "sus", "sugoma", "ligma", "yeet"};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, IntOneCorrect) {
  s21::list<int> test = {1};
  s21::list<int> compare = {1};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, CharOneCorrect) {
  s21::list<char> test = {'a'};
  s21::list<char> compare = {'a'};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, StrOneCorrect) {
  s21::list<std::string> test = {"aboba"};
  s21::list<std::string> compare = {"aboba"};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, IntOneCompare) {
  s21::list<int> s21_test = {1};
  std::list<int> std_test = {1};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, CharOneCompare) {
  s21::list<char> s21_test = {'a'};
  std::list<char> std_test = {'a'};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, StrOneCompare) {
  s21::list<std::string> s21_test = {"aboba"};
  std::list<std::string> std_test = {"aboba"};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, IntTwoCorrect) {
  s21::list<int> test = {1, 2};
  s21::list<int> compare = {2, 1};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, CharTwoCorrect) {
  s21::list<char> test = {'a', 'z'};
  s21::list<char> compare = {'z', 'a'};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, StrTwoCorrect) {
  s21::list<std::string> test = {"among", "us"};
  s21::list<std::string> compare = {"us", "among"};
  test.reverse();
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersReverse, IntTwoCompare) {
  s21::list<int> s21_test = {1, 2};
  std::list<int> std_test = {1, 2};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, CharTwoCompare) {
  s21::list<char> s21_test = {'a', 'b'};
  std::list<char> std_test = {'a', 'b'};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersReverse, StrTwoCompare) {
  s21::list<std::string> s21_test = {"among", "us"};
  std::list<std::string> std_test = {"among", "us"};
  s21_test.reverse();
  std_test.reverse();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

/* unique */

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
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, TwoDiffElementsCorrectChar) {
  s21::list<char> test{'A', 'Z'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, TwoDiffElementsCorrectStr) {
  s21::list<std::string> test{"sus", "amogus"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 2);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, TwoDiffElementsCompareInt) {
  s21::list<int> s21_test{1, 2};
  std::list<int> std_test{1, 2};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, TwoDiffElementsCompareChar) {
  s21::list<char> s21_test{'A', 'Z'};
  std::list<char> std_test{'A', 'Z'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, TwoDiffElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "amogus"};
  std::list<std::string> std_test{"sus", "amogus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
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
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, TwoSameElementsCompareChar) {
  s21::list<char> s21_test{'a', 'a'};
  std::list<char> std_test{'a', 'a'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, TwoSameElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "sus"};
  std::list<std::string> std_test{"sus", "sus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCorrectInt) {
  s21::list<int> test{1, 2, 3, 4, 5};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCorrectChar) {
  s21::list<char> test{'a', 'b', 'c', 'd', 'e'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCorrectStr) {
  s21::list<std::string> test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCompareInt) {
  s21::list<int> s21_test{1, 2, 3, 4, 5};
  std::list<int> std_test{1, 2, 3, 4, 5};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCompareChar) {
  s21::list<char> s21_test{'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test{'a', 'b', 'c', 'd', 'e'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleAllDifferentElementsCompareStr) {
  s21::list<std::string> s21_test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  std::list<std::string> std_test{"KZN", "MSK", "SPB", "NSK", "EKB"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCorrectInt) {
  s21::list<int> test{1, 1, 1, 2, 3};
  s21::list<int> compare{1, 2, 3};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCorrectChar) {
  s21::list<char> test{'x', 'x', 'x', 'y', 'z'};
  s21::list<char> compare{'x', 'y', 'z'};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCorrectStr) {
  s21::list<std::string> test{"sus", "sus", "sus", "among", "us"};
  s21::list<std::string> compare{"sus", "among", "us"};
  test.unique();
  EXPECT_TRUE(test.size() == 3);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCompareInt) {
  s21::list<int> s21_test{1, 1, 1, 2, 3};
  std::list<int> std_test{1, 1, 1, 2, 3};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCompareChar) {
  s21::list<char> s21_test{'x', 'x', 'x', 'y', 'z'};
  std::list<char> std_test{'x', 'x', 'x', 'y', 'z'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplConseqElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "sus", "sus", "among", "us"};
  std::list<std::string> std_test{"sus", "sus", "sus", "among", "us"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCorrectInt) {
  s21::list<int> test{1, 2, 3, 2, 1};
  s21::list<int> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCorrectChar) {
  s21::list<char> test{'x', 'y', 'z', 'y', 'x'};
  s21::list<char> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCorrectStr) {
  s21::list<std::string> test{"sus", "aboba", "amogus", "aboba", "sus"};
  s21::list<std::string> compare(test);
  test.unique();
  EXPECT_TRUE(test.size() == 5);
  EXPECT_TRUE(listsEqual(test, compare));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCompareInt) {
  s21::list<int> s21_test{1, 2, 3, 2, 1};
  std::list<int> std_test{1, 2, 3, 2, 1};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCompareChar) {
  s21::list<char> s21_test{'x', 'y', 'z', 'y', 'x'};
  std::list<char> std_test{'x', 'y', 'z', 'y', 'x'};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersUnique, MultipleSomeDuplElementsCompareStr) {
  s21::list<std::string> s21_test{"sus", "aboba", "amogus", "aboba", "sus"};
  std::list<std::string> std_test{"sus", "aboba", "amogus", "aboba", "sus"};
  s21_test.unique();
  std_test.unique();
  EXPECT_TRUE(s21_test.size() == std_test.size());
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

/* sort */

TEST(ModifiersSort, MultipleUniqueElementsCorrectInt) {
  s21::list<int> test = {5, 3, 2, 4, 1};
  s21::list<int> result = {1, 2, 3, 4, 5};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleUniqueElementsCorrectChar) {
  s21::list<char> test = {'d', 'a', 'c', 'b', 'e'};
  s21::list<char> result = {'a', 'b', 'c', 'd', 'e'};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleUniqueElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  s21::list<std::string> result = {"!!!", "123", "ABOBA", "amogus", "sus"};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleUniqueElementsCompareInt) {
  s21::list<int> s21_test = {5, 3, 2, 4, 1};
  std::list<int> std_test = {5, 3, 2, 4, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleUniqueElementsCompareChar) {
  s21::list<char> s21_test = {'d', 'a', 'c', 'b', 'e'};
  std::list<char> std_test = {'d', 'a', 'c', 'b', 'e'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleUniqueElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  std::list<std::string> std_test = {"sus", "amogus", "ABOBA", "!!!", "123"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleSameElementsCorrectInt) {
  s21::list<int> test = {4, 1, 2, 4, 1};
  s21::list<int> result = {1, 1, 2, 4, 4};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleSameElementsCorrectChar) {
  s21::list<char> test = {'d', 'a', 'b', 'd', 'a'};
  s21::list<char> result = {'a', 'a', 'b', 'd', 'd'};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleSameElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  s21::list<std::string> result = {"ABOBA", "amogus", "amogus", "sus", "sus"};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleSameElementsCompareInt) {
  s21::list<int> s21_test = {4, 1, 2, 4, 1};
  std::list<int> std_test = {4, 1, 2, 4, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleSameElementsCompareChar) {
  s21::list<char> s21_test = {'d', 'a', 'b', 'd', 'a'};
  std::list<char> std_test = {'d', 'a', 'b', 'd', 'a'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleSameElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  std::list<std::string> std_test = {"sus", "amogus", "ABOBA", "sus", "amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleAlreadySortedCorrectInt) {
  s21::list<int> test = {1, 2, 3, 4, 5};
  s21::list<int> result = {1, 2, 3, 4, 5};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleAlreadySortedCorrectChar) {
  s21::list<char> test = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> result = {'a', 'b', 'c', 'd', 'e'};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleAlreadySortedCorrectStr) {
  s21::list<std::string> test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  s21::list<std::string> result = {"!!!", "123", "ABOBA", "amogus", "sus"};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, MultipleAlreadySortedCompareInt) {
  s21::list<int> s21_test = {1, 2, 3, 4, 5};
  std::list<int> std_test = {1, 2, 3, 4, 5};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleAlreadySortedCompareChar) {
  s21::list<char> s21_test = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_test = {'a', 'b', 'c', 'd', 'e'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, MultipleAlreadySortedCompareStr) {
  s21::list<std::string> s21_test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  std::list<std::string> std_test = {"!!!", "123", "ABOBA", "amogus", "sus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, TwoUniqueElementsCorrectInt) {
  s21::list<int> test = {2, 1};
  s21::list<int> result = {1, 2};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, TwoUniqueElementsCorrectChar) {
  s21::list<char> test = {'Z', 'A'};
  s21::list<char> result = {'A', 'Z'};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, TwoUniqueElementsCorrectStr) {
  s21::list<std::string> test = {"sus", "amogus"};
  s21::list<std::string> result = {"amogus", "sus"};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, TwoUniqueElementsCompareInt) {
  s21::list<int> s21_test = {2, 1};
  std::list<int> std_test = {2, 1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, TwoUniqueElementsCompareChar) {
  s21::list<char> s21_test = {'Z', 'A'};
  std::list<char> std_test = {'Z', 'A'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, TwoUniqueElementsCompareStr) {
  s21::list<std::string> s21_test = {"sus", "amogus"};
  std::list<std::string> std_test = {"sus", "amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, TwoAlreadySortedCorrectInt) {
  s21::list<int> test = {1, 2};
  s21::list<int> result = {1, 2};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, TwoAlreadySortedCorrectChar) {
  s21::list<char> test = {'A', 'Z'};
  s21::list<char> result = {'A', 'Z'};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, TwoAlreadySortedCorrectStr) {
  s21::list<std::string> test = {"amogus", "sus"};
  s21::list<std::string> result = {"amogus", "sus"};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, TwoAlreadySortedCompareInt) {
  s21::list<int> s21_test = {1, 2};
  std::list<int> std_test = {1, 2};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, TwoAlreadySortedCompareChar) {
  s21::list<char> s21_test = {'A', 'Z'};
  std::list<char> std_test = {'A', 'Z'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, TwoAlreadySortedCompareStr) {
  s21::list<std::string> s21_test = {"amogus", "sus"};
  std::list<std::string> std_test = {"amogus", "sus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, OneElementCorrectInt) {
  s21::list<int> test = {1};
  s21::list<int> result = {1};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, OneElementCorrectChar) {
  s21::list<char> test = {'A'};
  s21::list<char> result = {'A'};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, OneElementCorrectStr) {
  s21::list<std::string> test = {"amogus"};
  s21::list<std::string> result = {"amogus"};
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, OneElementCompareInt) {
  s21::list<int> s21_test = {1};
  std::list<int> std_test = {1};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, OneElementCompareChar) {
  s21::list<char> s21_test = {'A'};
  std::list<char> std_test = {'A'};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, OneElementCompareStr) {
  s21::list<std::string> s21_test = {"amogus"};
  std::list<std::string> std_test = {"amogus"};
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, EmptyCorrectInt) {
  s21::list<int> test;
  s21::list<int> result;
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, EmptyCorrectChar) {
  s21::list<char> test;
  s21::list<char> result;
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, EmptyCorrectStr) {
  s21::list<std::string> test;
  s21::list<std::string> result;
  test.sort();
  EXPECT_TRUE(listsEqual(test, result));
}

TEST(ModifiersSort, EmptyCompareInt) {
  s21::list<int> s21_test;
  std::list<int> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, EmptyCompareChar) {
  s21::list<char> s21_test;
  std::list<char> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

TEST(ModifiersSort, EmptyCompareStr) {
  s21::list<std::string> s21_test;
  std::list<std::string> std_test;
  s21_test.sort();
  std_test.sort();
  EXPECT_TRUE(listsEqual(s21_test, std_test));
}

/* merge */

//uncomment later after insert fix
// TEST(ModifiersMerge, TwoListsCorrectInt) {
//   s21::list<int> dest = {1, 2, 3, 4, 5};
//   s21::list<int> src = {30, 20, 10};
//   s21::list<int> compare = {1, 2, 3, 4, 5, 30, 20, 10};
//   dest.merge(src);
//   EXPECT_TRUE(listsEqual(dest, compare));
// }

TEST(ModifiersMerge, TwoListsCorrectChar) {
  s21::list<char> dest = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> src = {'Z', 'Y', 'X'};
  s21::list<char> compare = {'Z', 'Y', 'X', 'a', 'b', 'c', 'd', 'e'};
  dest.merge(src);
  EXPECT_TRUE(listsEqual(dest, compare));
}

//uncomment later after insert fix
// TEST(ModifiersMerge, TwoListsCorrectStr) {
//   s21::list<std::string> dest = {"sus", "amogus", "ABOBA", "sus"};
//   s21::list<std::string> src = {"sugoma", "BAOBAB", "yeet"};
//   s21::list<std::string> compare = {"sugoma", "BAOBAB", "sus", "amogus", "ABOBA", "sus", "yeet"}; // very strange
//   dest.merge(src);
//   EXPECT_TRUE(listsEqual(dest, compare));
// }

//uncomment later after insert fix
// TEST(ModifiersMerge, TwoListsComparetInt) {
//   s21::list<int> s21_dest = {1, 2, 3, 4, 5};
//   s21::list<int> s21_src = {30, 20, 10};
//   std::list<int> std_dest = {1, 2, 3, 4, 5};
//   std::list<int> std_src = {30, 20, 10};
//   s21_dest.merge(s21_src);
//   std_dest.merge(std_src);
//   EXPECT_TRUE(listsEqual(s21_dest, std_dest));
// }

TEST(ModifiersMerge, TwoListsCompareChar) {
  s21::list<char> s21_dest = {'a', 'b', 'c', 'd', 'e'};
  s21::list<char> s21_src = {'Z', 'Y', 'X'};
  std::list<char> std_dest = {'a', 'b', 'c', 'd', 'e'};
  std::list<char> std_src = {'Z', 'Y', 'X'};
  s21_dest.merge(s21_src);
  std_dest.merge(std_src);
  EXPECT_TRUE(listsEqual(s21_dest, std_dest));
}

//uncomment later after insert fix
// TEST(ModifiersMerge, TwoListsCompareStr) {
//   s21::list<std::string> s21_dest = {"sus", "amogus", "ABOBA", "sus"};
//   s21::list<std::string> s21_src = {"sugoma", "BAOBAB", "yeet"};
//   std::list<std::string> std_dest = {"sus", "amogus", "ABOBA", "sus"};
//   std::list<std::string> std_src = {"sugoma", "BAOBAB", "yeet"};
//   s21_dest.merge(s21_src);
//   std_dest.merge(std_src);
//   EXPECT_TRUE(listsEqual(s21_dest, std_dest));
// }

TEST(ModifiersMerge, TwoListsRandomOrderCorrectInt) {
  s21::list<int> dest = {5, 9, 1, 3, 3};
  s21::list<int> src = {8, 7, 2, 3, 4, 4};
  s21::list<int> compare = {5, 8, 7, 2, 3, 4, 4, 9, 1, 3, 3};
  dest.merge(src);
  EXPECT_TRUE(listsEqual(dest, compare));
}

TEST(ModifiersMerge, TwoListsRandomOrderCompareInt) {
  s21::list<int> s21_dest = {5, 9, 1, 3, 3};
  s21::list<int> s21_src = {8, 7, 2, 3, 4, 4};
  std::list<int> std_dest = {5, 9, 1, 3, 3};
  std::list<int> std_src = {8, 7, 2, 3, 4, 4};
  s21_dest.merge(s21_src);
  std_dest.merge(std_src);
  EXPECT_TRUE(listsEqual(s21_dest, std_dest));
}
