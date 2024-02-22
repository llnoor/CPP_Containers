#ifndef SRC_UNIT_TESTS_UNIT_TESTS_H_
#define SRC_UNIT_TESTS_UNIT_TESTS_H_

#include <gtest/gtest.h>

#include <list>
#include <queue>
#include <stack>

#include "../s21_containers.h"

template <typename T>
bool EqualLists(const s21::list<T>& list1, const s21::list<T>& list2) {
  if (list1.size() != list2.size()) {
    return false;
  }

  auto it1 = list1.cbegin();
  auto it2 = list2.cbegin();

  for (; it1 != list1.cend() && it2 != list2.cend(); ++it1, ++it2) {
    if (*it1 != *it2) {
      return false;
    }
  }

  return true;
}

template <typename T>
bool EqualLists(const s21::list<T>& list1, const std::list<T>& list2) {
  if (list1.size() != list2.size()) {
    return false;
  }

  auto it1 = list1.cbegin();
  auto it2 = list2.cbegin();

  for (; it1 != list1.cend() && it2 != list2.cend(); ++it1, ++it2) {
    if (*it1 != *it2) {
      return false;
    }
  }

  return true;
}

template <typename T>
bool EqualQueues(const s21::queue<T>& queue1, const s21::queue<T>& queue2) {
  if (queue1.size() != queue2.size()) {
    return false;
  }

  s21::queue<T> temp1(queue1);
  s21::queue<T> temp2(queue2);

  while (!temp1.empty() && !temp2.empty()) {
    if (temp1.front() != temp2.front()) {
      return false;
    }
    temp1.pop();
    temp2.pop();
  }

  return true;
}

template <typename T>
bool EqualQueues(const s21::queue<T>& queue1, const std::queue<T>& queue2) {
  if (queue1.size() != queue2.size()) {
    return false;
  }

  s21::queue<T> temp1(queue1);
  std::queue<T> temp2(queue2);

  while (!temp1.empty() && !temp2.empty()) {
    if (temp1.front() != temp2.front()) {
      return false;
    }
    temp1.pop();
    temp2.pop();
  }

  return true;
}

template <typename T>
bool EqualStacks(const s21::stack<T>& stack1, const s21::stack<T>& stack2) {
  if (stack1.size() != stack2.size()) {
    return false;
  }

  s21::stack<T> temp1(stack1);
  s21::stack<T> temp2(stack2);

  while (!temp1.empty() && !temp2.empty()) {
    if (temp1.top() != temp2.top()) {
      return false;
    }
    temp1.pop();
    temp2.pop();
  }

  return true;
}

template <typename T>
bool EqualStacks(const s21::stack<T>& stack1, const std::stack<T>& stack2) {
  if (stack1.size() != stack2.size()) {
    return false;
  }

  s21::stack<T> temp1(stack1);
  std::stack<T> temp2(stack2);

  while (!temp1.empty() && !temp2.empty()) {
    if (temp1.top() != temp2.top()) {
      return false;
    }
    temp1.pop();
    temp2.pop();
  }

  return true;
}

// possibly also add float and double type test cases

#endif  // SRC_UNIT_TESTS_UNIT_TESTS_H_