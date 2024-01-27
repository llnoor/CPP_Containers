#include "S21_Array.h"

// using namespace s21;

TEST(s21_Array_constructor, default_constructor) {
  s21::Array<int, 4> s21Array;
  std::array<int, 4> stdarray;
  ASSERT_EQ(s21Array.empty(), stdarray.empty());
  ASSERT_EQ(s21Array.size(), stdarray.size());
  ASSERT_EQ(s21Array.max_size(), stdarray.max_size());
}

TEST(Array, def_constructor_int) {
  s21::Array<int, 5> s21_Array;
  std::array<int, 5> std_array;

  ASSERT_EQ(s21_Array.empty(), std_array.empty());
  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_constructor_char) {
  s21::Array<char, 5> s21_Array;
  std::array<char, 5> std_array;

  ASSERT_EQ(s21_Array.empty(), std_array.empty());
  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_constructor_int_1) {
  s21::Array<int, 5> s21_Array{};
  std::array<int, 5> std_array{};

  ASSERT_EQ(s21_Array.empty(), std_array.empty());
  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_constructor_int_2) {
  s21::Array<int, 5> s21_Array{1, 2, 3};
  std::array<int, 5> std_array{1, 2, 3};

  ASSERT_EQ(s21_Array.empty(), std_array.empty());
  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_constructor_int_3) {
  s21::Array<int, 5> s21_Array{1, 2, 3, 4, 5};
  std::array<int, 5> std_array{1, 2, 3, 4, 5};

  ASSERT_EQ(s21_Array.empty(), std_array.empty());
  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_at) {
  s21::Array<int, 3> s21_Array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};
  s21_Array.at(0) = 100;
  std_array.at(0) = 100;

  ASSERT_EQ(s21_Array.at(0), std_array.at(0));
  ASSERT_EQ(s21_Array.at(1), std_array.at(1));
  ASSERT_EQ(s21_Array.at(2), std_array.at(2));
  ASSERT_EQ(s21_Array.empty(), std_array.empty());
  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_operator) {
  s21::Array<int, 3> s21_Array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};
  s21_Array[0] = 100;
  std_array[0] = 100;

  ASSERT_EQ(s21_Array.at(0), std_array.at(0));
  ASSERT_EQ(s21_Array.at(1), std_array.at(1));
  ASSERT_EQ(s21_Array.at(2), std_array.at(2));
  ASSERT_EQ(s21_Array.empty(), std_array.empty());
  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_front) {
  s21::Array<int, 3> s21_Array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(s21_Array.front(), std_array.front());
}

TEST(Array, def_back) {
  s21::Array<int, 3> s21_Array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(s21_Array.back(), std_array.back());
}

TEST(Array, def_empty) {
  s21::Array<int, 3> s21_Array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(s21_Array.empty(), std_array.empty());
}

TEST(Array, def_empty_1) {
  s21::Array<int, 0> s21_Array{};
  std::array<int, 0> std_array{};

  ASSERT_EQ(s21_Array.empty(), std_array.empty());
}

TEST(Array, def_size) {
  s21::Array<int, 3> s21_Array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(s21_Array.size(), std_array.size());
}

TEST(Array, def_max_size) {
  s21::Array<int, 3> s21_Array{1, 2, 3};
  std::array<int, 3> std_array{1, 2, 3};

  ASSERT_EQ(s21_Array.max_size(), std_array.max_size());
}
