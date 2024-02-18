#ifndef SRC_UNIT_TESTS_UNIT_TESTS_H_
#define SRC_UNIT_TESTS_UNIT_TESTS_H_

#include <gtest/gtest.h>
#include <list>
#include "../s21_containers/s21_list.h"

template <typename T>
bool equalLists(const s21::list<T>& list1, const s21::list<T>& list2) {
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
bool equalLists(const s21::list<T>& list1, const std::list<T>& list2) {
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

// possibly also add float and double type test cases

#endif  // SRC_UNIT_TESTS_UNIT_TESTS_H_