#include "team_array.h"

// using namespace team;

TEST(team_array_constructor, default_constructor) {
  team::Array<int, 4> teamArray;
  std::array<int, 4> stdarray;
  ASSERT_EQ(teamArray.empty(), stdarray.empty());
  ASSERT_EQ(teamArray.size(), stdarray.size());
  ASSERT_EQ(teamArray.max_size(), stdarray.max_size());
}

TEST(Array, def_constructor_int) {
  team::Array<int, 5> team_array;
  std::array<int, 5> std_array;

  ASSERT_EQ(team_array.empty(), std_array.empty());
  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_constructor_char) {
  team::Array<char, 5> team_array;
  std::array<char, 5> std_array;

  ASSERT_EQ(team_array.empty(), std_array.empty());
  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_constructor_int_1) {
  team::Array<int, 5> team_array{};
  std::array<int, 5> std_array{};

  ASSERT_EQ(team_array.empty(), std_array.empty());
  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_constructor_int_2) {
  team::Array<int, 5> team_array{1, 2, 3};
  std::array<int, 5> std_array{1, 2, 3};

  ASSERT_EQ(team_array.empty(), std_array.empty());
  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_constructor_int_3) {
  team::Array<int, 5> team_array{1, 2, 3, 4, 5};
  std::array<int, 5> std_array{1, 2, 3, 4, 5};

  ASSERT_EQ(team_array.empty(), std_array.empty());
  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_at) {
  team::Array<int, 3> team_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};
  team_array.at(0) = 100;
  std_array.at(0) = 100;

  ASSERT_EQ(team_array.at(0), std_array.at(0));
  ASSERT_EQ(team_array.at(1), std_array.at(1));
  ASSERT_EQ(team_array.at(2), std_array.at(2));
  ASSERT_EQ(team_array.empty(), std_array.empty());
  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_operator) {
  team::Array<int, 3> team_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};
  team_array[0] = 100;
  std_array[0] = 100;

  ASSERT_EQ(team_array.at(0), std_array.at(0));
  ASSERT_EQ(team_array.at(1), std_array.at(1));
  ASSERT_EQ(team_array.at(2), std_array.at(2));
  ASSERT_EQ(team_array.empty(), std_array.empty());
  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_front) {
  team::Array<int, 3> team_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(team_array.front(), std_array.front());
}

TEST(Array, def_back) {
  team::Array<int, 3> team_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(team_array.back(), std_array.back());
}

TEST(Array, def_empty) {
  team::Array<int, 3> team_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(team_array.empty(), std_array.empty());
}

TEST(Array, def_empty_1) {
  team::Array<int, 0> team_array{};
  std::array<int, 0> std_array{};

  ASSERT_EQ(team_array.empty(), std_array.empty());
}

TEST(Array, def_size) {
  team::Array<int, 3> team_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(team_array.size(), std_array.size());
}

TEST(Array, def_max_size) {
  team::Array<int, 3> team_array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(team_array.max_size(), std_array.max_size());
}
