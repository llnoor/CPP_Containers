#include <gtest/gtest.h>

#include "s21_tree.h"

TEST(TreeIteratorTest, DereferenceOperatorConstEmptyTree) {
  s21::Tree<std::string> tree;
  EXPECT_EQ(*tree.begin(), "");
}