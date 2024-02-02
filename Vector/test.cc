#include "team_vector.h"

TEST(team_vector, insert_out_of_range) {
  // создаем в
  team::Vector<int> teamvector{1, 2, 3};

  // вставить элемент за пределы вектора
  ASSERT_THROW(teamvector.insert(teamvector.begin() + 10, 4), std::out_of_range);
}

TEST(team_vector, at_out_of_range) {
  team::Vector<int> teamvector{1, 2, 3};

  ASSERT_THROW(teamvector.at(10), std::out_of_range);
}
TEST(team_vector, front_empty) {
  team::Vector<int> teamvector;

  ASSERT_THROW(teamvector.front(), std::out_of_range);
}

TEST(team_vector, front_none_empty) {
  team::Vector<int> teamvector{1, 2, 3};

  ASSERT_NO_THROW({
    const int& frontEl = teamvector.front();
    ASSERT_EQ(frontEl, 1);
  });
}

TEST(team_vector_constructor, default_constructor) {
  team::Vector<int> teamVector;
  std::vector<int> stdvector;
  ASSERT_EQ(teamVector.empty(), stdvector.empty());
  ASSERT_EQ(teamVector.size(), stdvector.size());
}

TEST(team_vector, move2) {
  team::Vector<int> teamvector{1, 2, 3};
  team::Vector<int> stdvector{3, 2, 1};
  stdvector = std::move(teamvector);
}

TEST(team_vector, copy) {
  team::Vector<int> teamvector{1, 2, 3};
  team::Vector<int> stdvector{2, 3, 4};
  teamvector = stdvector;

  // нужна перегрузка оператора
  ASSERT_EQ(teamvector.empty(), stdvector.empty());
  ASSERT_EQ(teamvector.size(), stdvector.size());
}

TEST(team_vector, OperatorSqBrackets) {
  team::Vector<int> intVector{1, 2, 3, 4, 5};
  for (std::size_t i = 0; i < intVector.size(); ++i) {
    EXPECT_EQ(intVector[i], static_cast<int>(i) + 1);
  }

  team::Vector<double> doubleVector{1.1, 2.2, 3.3, 4.4, 5.5};
  for (std::size_t i = 0; i < doubleVector.size(); ++i) {
    EXPECT_DOUBLE_EQ(doubleVector[i], (i + 1) * 1.1);
  }

  team::Vector<std::string> stringVector{"one", "two", "three", "four", "five"};
  EXPECT_EQ(stringVector[2], "three");
}

TEST(team_vector_at, valid_index) {
  team::Vector<int> myVector{1, 2, 3, 4, 5};
  int expected_value = 3;

  // Проверяем, что элемент с индексом 2 равен ожидаемому значению
  ASSERT_EQ(myVector.at(2), expected_value);
}

TEST(team_vector_front, valid) {
  std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
  team::Vector<char> let{'a', 'b', 'c', 'd', 'e', 'f'};
  ASSERT_EQ(letters.front(), let.front());
}

TEST(team_vector_front, valid1) {
  std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
  team::Vector<char> let{'a', 'b', 'c', 'd', 'e', 'f'};

  for (std::size_t i = 0; i < letters.size(); ++i) {
    ASSERT_EQ(letters[i], let[i]);
  }
}

TEST(team_vector_back, valid) {
  std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
  team::Vector<char> let{'a', 'b', 'c', 'd', 'e', 'f'};
  ASSERT_EQ(letters.back(), let.back());
}

TEST(VectorDataTest, ReturnsCorrectPointer) {
  // Создаем вектор
  team::Vector<int> myVector{1, 2, 3, 4, 5};

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
  team::Vector<int> vec = {1, 2, 3, 4, 5};

  vec.erase(vec.begin() + 2);

  EXPECT_EQ(vec.size(), 4);

  EXPECT_EQ(vec[0], 1);
  EXPECT_EQ(vec[1], 2);
  EXPECT_EQ(vec[2], 4);
  EXPECT_EQ(vec[3], 5);
}

TEST(VectorPopBackTest, PopBack) {
  team::Vector<int> vec = {1, 2, 3, 4, 5};

  vec.pop_back();

  EXPECT_EQ(vec.size(), 4);

  EXPECT_EQ(vec[0], 1);
  EXPECT_EQ(vec[1], 2);
  EXPECT_EQ(vec[2], 3);
  EXPECT_EQ(vec[3], 4);
}

TEST(VectorSwapTest, Swap) {
  team::Vector<int> vec1 = {1, 2, 3, 4, 5};
  team::Vector<int> vec2 = {10, 20, 30};

  team::Vector<int> originalVec1 = vec1;
  team::Vector<int> originalVec2 = vec2;

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
  team::Vector<int> original = {1, 2, 3, 4, 5};
  team::Vector<int> other = {10, 20, 30};

  team::Vector<int> originalCopy = original;
  team::Vector<int> otherCopy = other;

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
  team::Vector<int> vec = {1, 2, 3, 4, 5};

  team::Vector<int>::iterator it = vec.insert(vec.begin() + 2, 10);

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
