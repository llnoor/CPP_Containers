#include "s21_Vector.h"

TEST(s21_Vector, insert_out_of_range) {
  // создаем в
  s21::Vector<int> s21vector{1, 2, 3};

  // вставить элемент за пределы вектора
  ASSERT_THROW(s21vector.insert(s21vector.begin() + 10, 4), std::out_of_range);
}

TEST(s21_Vector, at_out_of_range) {
  s21::Vector<int> s21vector{1, 2, 3};

  ASSERT_THROW(s21vector.at(10), std::out_of_range);
}
TEST(s21_Vector, front_empty) {
  s21::Vector<int> s21vector;

  ASSERT_THROW(s21vector.front(), std::out_of_range);
}

TEST(s21_Vector, front_none_empty) {
  s21::Vector<int> s21vector{1, 2, 3};

  ASSERT_NO_THROW({
    const int& frontEl = s21vector.front();
    ASSERT_EQ(frontEl, 1);
  });
}

TEST(s21_Vector_constructor, default_constructor) {
  s21::Vector<int> s21Vector;
  std::vector<int> stdvector;
  ASSERT_EQ(s21Vector.empty(), stdvector.empty());
  ASSERT_EQ(s21Vector.size(), stdvector.size());
}

TEST(s21_vector, move2) {
  s21::Vector<int> s21vector{1, 2, 3};
  s21::Vector<int> stdvector{3, 2, 1};
  stdvector = std::move(s21vector);
}

TEST(s21_vector, copy) {
  s21::Vector<int> s21vector{1, 2, 3};
  s21::Vector<int> stdvector{2, 3, 4};
  s21vector = stdvector;

  // нужна перегрузка оператора
  ASSERT_EQ(s21vector.empty(), stdvector.empty());
  ASSERT_EQ(s21vector.size(), stdvector.size());
}

TEST(s21_Vector, OperatorSqBrackets) {
  s21::Vector<int> intVector{1, 2, 3, 4, 5};
  for (std::size_t i = 0; i < intVector.size(); ++i) {
    EXPECT_EQ(intVector[i], static_cast<int>(i) + 1);
  }

  s21::Vector<double> doubleVector{1.1, 2.2, 3.3, 4.4, 5.5};
  for (std::size_t i = 0; i < doubleVector.size(); ++i) {
    EXPECT_DOUBLE_EQ(doubleVector[i], (i + 1) * 1.1);
  }

  s21::Vector<std::string> stringVector{"one", "two", "three", "four", "five"};
  EXPECT_EQ(stringVector[2], "three");
}

TEST(s21_vector_at, valid_index) {
  s21::Vector<int> myVector{1, 2, 3, 4, 5};
  int expected_value = 3;

  // Проверяем, что элемент с индексом 2 равен ожидаемому значению
  ASSERT_EQ(myVector.at(2), expected_value);
}

TEST(s21_vector_front, valid) {
  std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
  s21::Vector<char> let{'a', 'b', 'c', 'd', 'e', 'f'};
  ASSERT_EQ(letters.front(), let.front());
}

TEST(s21_vector_front, valid1) {
  std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
  s21::Vector<char> let{'a', 'b', 'c', 'd', 'e', 'f'};

  for (std::size_t i = 0; i < letters.size(); ++i) {
    ASSERT_EQ(letters[i], let[i]);
  }
}

TEST(s21_vector_back, valid) {
  std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
  s21::Vector<char> let{'a', 'b', 'c', 'd', 'e', 'f'};
  ASSERT_EQ(letters.back(), let.back());
}

TEST(VectorDataTest, ReturnsCorrectPointer) {
  // Создаем вектор
  s21::Vector<int> myVector{1, 2, 3, 4, 5};

  // Получаем указатель на массив элементов с использованием метода data()
  int* dataPtr = myVector.data();

  // Проверяем, что указатель не равен nullptr
  ASSERT_NE(dataPtr, nullptr);

  // Проверяем, что элементы вектора доступны через указатель
  for (std::size_t i = 0; i < myVector.size(); ++i) {
    ASSERT_EQ(dataPtr[i], myVector[i]);
  }
}

TEST(VectorEraseTest, Erase) {
  s21::Vector<int> vec = {1, 2, 3, 4, 5};

  vec.erase(vec.begin() + 2);

  EXPECT_EQ(vec.size(), 4);

  EXPECT_EQ(vec[0], 1);
  EXPECT_EQ(vec[1], 2);
  EXPECT_EQ(vec[2], 4);
  EXPECT_EQ(vec[3], 5);
}

TEST(VectorPopBackTest, PopBack) {
  s21::Vector<int> vec = {1, 2, 3, 4, 5};

  vec.pop_back();

  EXPECT_EQ(vec.size(), 4);

  EXPECT_EQ(vec[0], 1);
  EXPECT_EQ(vec[1], 2);
  EXPECT_EQ(vec[2], 3);
  EXPECT_EQ(vec[3], 4);
}

TEST(VectorSwapTest, Swap) {
  s21::Vector<int> vec1 = {1, 2, 3, 4, 5};
  s21::Vector<int> vec2 = {10, 20, 30};

  s21::Vector<int> originalVec1 = vec1;
  s21::Vector<int> originalVec2 = vec2;

  vec1.swap(vec2);

  EXPECT_EQ(vec1.size(), originalVec2.size());
  EXPECT_EQ(vec2.size(), originalVec1.size());

  for (size_t i = 0; i < vec1.size(); ++i) {
    EXPECT_EQ(vec1[i], originalVec2[i]);
  }

  for (size_t i = 0; i < vec2.size(); ++i) {
    EXPECT_EQ(vec2[i], originalVec1[i]);
  }
}

TEST(VectorMove, Move) {
  s21::Vector<int> original = {1, 2, 3, 4, 5};
  s21::Vector<int> other = {10, 20, 30};

  s21::Vector<int> originalCopy = original;
  s21::Vector<int> otherCopy = other;

  original = std::move(other);

  // Проверяем, что размер и емкость original теперь равны other
  EXPECT_EQ(original.size(), otherCopy.size());
  EXPECT_EQ(original.capacity(), otherCopy.capacity());

  // Проверяем, что данные original теперь равны данным other
  for (size_t i = 0; i < original.size(); ++i) {
    EXPECT_EQ(original[i], otherCopy[i]);
  }

  // Проверяем, что other стал пустым (размер и емкость равны 0)
  EXPECT_EQ(other.size(), 0);
  EXPECT_EQ(other.capacity(), 0);
}

TEST(VectorInsert, Insert) {
  s21::Vector<int> vec = {1, 2, 3, 4, 5};

  s21::Vector<int>::iterator it = vec.insert(vec.begin() + 2, 10);

  EXPECT_EQ(vec.size(), 6);

  EXPECT_EQ(vec[0], 1);
  EXPECT_EQ(vec[1], 2);
  EXPECT_EQ(vec[2], 10);
  EXPECT_EQ(vec[3], 3);
  EXPECT_EQ(vec[4], 4);
  EXPECT_EQ(vec[5], 5);

  EXPECT_EQ(*it, 10);
  EXPECT_EQ(it - vec.begin(), 2);
}
