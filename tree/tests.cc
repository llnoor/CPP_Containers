#include <gtest/gtest.h>

#include "team_tree.h"

TEST(TreeIteratorTest, DereferenceOperatorConstEmptyTree) {
  team::Tree<std::string> tree;
  EXPECT_EQ(*tree.begin(), "");
}