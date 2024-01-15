

#include <gtest/gtest.h>


 #include <Vector>
#include <Array>


#include "s21_containers.h"

using namespace s21;



TEST(s21_Vector_constructor, default_constructor) {
  s21::Vector<int> s21Vector;
  std::vector<int> stdvector;
  ASSERT_EQ(s21Vector.empty(), stdvector.empty());
  ASSERT_EQ(s21Vector.size(), stdvector.size());
}

// TEST(s21_vector, move) {
//   s21::Vector<int> s21vector{1, 2, 3};
//   s21::Vector<int> stdvector = std::move(s21vector);
// }

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


TEST(s21_Vector, OperatorSquareBrackets) {
    // Test case with integers
    s21::Vector<int> intVector{1, 2, 3, 4, 5};
    for (std::size_t i = 0; i < intVector.size(); ++i) {
        EXPECT_EQ(intVector[i], static_cast<int>(i) + 1);
    }

    // Test case with doubles
    s21::Vector<double> doubleVector{1.1, 2.2, 3.3, 4.4, 5.5};
    for (std::size_t i = 0; i < doubleVector.size(); ++i) {
        EXPECT_DOUBLE_EQ(doubleVector[i], (i + 1) * 1.1);
    }

    // Test case with strings
    s21::Vector<std::string> stringVector{"apple", "orange", "banana", "grape", "kiwi"};
    EXPECT_EQ(stringVector[2], "banana");
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



// здесь вылетает с ликом потому что еще не хватает ограничений 
// возможно надо подправить конструкторы(доьавить исключения)
// TEST(s21_vector_at, invalid_index) {
//   s21::Vector<int> myVector{1, 2, 3, 4, 5};
//   size_t invalid_index = 10;

//   // Пытаемся обратиться к элементу с индексом 10, что должно вызвать исключение
//   ASSERT_THROW(myVector.at(invalid_index), std::out_of_range);
// }



// TEST(VectorReserveComparison, CompareReserve) {
//   const std::size_t new_capacity = 10;

//   // Создаем вектор
//   s21::Vector<int> myVector;

//   // Вызываем вашу функцию reserve
//   myVector.reserve(new_capacity);

//   // Создаем стандартный вектор
//   std::vector<int> stdVector;
  
//   // Вызываем reserve для стандартного вектора
//   stdVector.reserve(new_capacity);

//   // Сравниваем емкости векторов
//   ASSERT_EQ(myVector.capacity(), stdVector.capacity());
// }




// TEST(s21_vector_constructor6, copy_constructor) {
//   s21::Vector<int> vector1{51, 12, 43};
//   std::vector<int> vector2{51, 12, 43};
//   s21::Vector<int> vector3(vector1);
//   std::vector<int> vector4(vector2);
//   ASSERT_EQ(vector3.size(), vector4.size());
//   for (std::size_t i = 0; i < vector1.size(); i++) {
//     ASSERT_EQ(vector3[i], vector4[i]);
//   }
// }

// отсутствует оператор[] 




TEST(s21_vector_push_back, valid) {
  s21::Vector<int> vec;
  std::vector<int> std_vec;

  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
    std_vec.push_back(i);
    ASSERT_EQ(vec.size(), std_vec.size());
    ASSERT_EQ(vec.back(), std_vec.back());
  }

  for (size_t i = 0; i < vec.size(); ++i) {
    ASSERT_EQ(vec[i], std_vec[i]);
  }
}

TEST(s21_vector_reserve, valid) {
  s21::Vector<int> vec;
  std::vector<int> std_vec;

  vec.reserve(20);
  std_vec.reserve(20);

  ASSERT_EQ(vec.capacity(), 20);
  ASSERT_EQ(std_vec.capacity(), 20);

  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
    std_vec.push_back(i);
    ASSERT_EQ(vec.size(), std_vec.size());
    ASSERT_EQ(vec.back(), std_vec.back());
  }

  for (size_t i = 0; i < vec.size(); ++i) {
    ASSERT_EQ(vec[i], std_vec[i]);
  }
}


/*
Array
 */

TEST(s21_Array_constructor, default_constructor) {
  s21::Array<int,4> s21Array;
  std::array<int,4> stdarray;
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
// TEST(array, def_copy) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   s21::array<int, 3> s21_array_copy(s21_array);
//   std::array<int, 3> std_array{1, 2, 3};
//   std::array<int, 3> std_array_copy(std_array);

//   ASSERT_EQ(s21_array.empty(), std_array.empty());
//   ASSERT_EQ(s21_array_copy.empty(), std_array_copy.empty());
//   ASSERT_EQ(s21_array.size(), std_array.size());
//   ASSERT_EQ(s21_array_copy.size(), std_array_copy.size());
// }

// TEST(array, def_move) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   s21::array<int, 3> s21_array_move(s21_array);
//   std::array<int, 3> std_array{1, 2, 3};
//   std::array<int, 3> std_array_move(std_array);

//   ASSERT_EQ(s21_array.empty(), std_array.empty());
//   ASSERT_EQ(s21_array_move.empty(), std_array_move.empty());
//   ASSERT_EQ(s21_array.size(), std_array.size());
//   ASSERT_EQ(s21_array_move.size(), std_array_move.size());
// }

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


// TEST(Array, def_throw) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   std::array<int, 3> std_array{1, 2, 3};
//   s21_array[0] = 100;
//   std_array[0] = 100;

//   ASSERT_ANY_THROW(s21_array.at(5));
//   ASSERT_ANY_THROW(std_array.at(5));
// }

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

// TEST(array, def_data) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   std::array<int, 3> std_array{1, 2, 3};
//   int *dataPtrS21 = s21_array.data();
//   int *dataPtrStd = std_array.data();

//   ASSERT_EQ(dataPtrS21[0], dataPtrStd[0]);
//   ASSERT_EQ(dataPtrS21[1], dataPtrStd[1]);
//   ASSERT_EQ(dataPtrS21[2], dataPtrStd[2]);
//   ASSERT_EQ(s21_array.at(0), std_array.at(0));
//   ASSERT_EQ(s21_array.at(1), std_array.at(1));
//   ASSERT_EQ(s21_array.at(2), std_array.at(2));

//   ASSERT_EQ(s21_array.empty(), std_array.empty());
//   ASSERT_EQ(s21_array.size(), std_array.size());
// }

// TEST(array, def_begin) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   std::array<int, 3> std_array{1, 2, 3};
//   int *it1S21 = s21_array.begin() + 1;
//   int *it1Std = std_array.begin() + 1;

//   ASSERT_EQ(*it1S21, *it1Std);
//   ASSERT_EQ(s21_array.at(0), std_array.at(0));
//   ASSERT_EQ(s21_array.at(1), std_array.at(1));
//   ASSERT_EQ(s21_array.at(2), std_array.at(2));
// }

// TEST(array, def_end) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   std::array<int, 3> std_array{1, 2, 3};
//   int *it1S21 = s21_array.end() - 1;
//   int *it1Std = std_array.end() - 1;

//   ASSERT_EQ(*it1S21, *it1Std);
//   ASSERT_EQ(s21_array.at(0), std_array.at(0));
//   ASSERT_EQ(s21_array.at(1), std_array.at(1));
//   ASSERT_EQ(s21_array.at(2), std_array.at(2));
// }

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

// TEST(array, def_swap) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   s21::array<int, 3> s21_array_swap{4, 5, 6};
//   std::array<int, 3> std_array{1, 2, 3};
//   std::array<int, 3> std_array_swap{4, 5, 6};
//   s21_array_swap.swap(s21_array);
//   std_array_swap.swap(std_array);

//   ASSERT_EQ(s21_array.at(0), std_array.at(0));
//   ASSERT_EQ(s21_array.at(1), std_array.at(1));
//   ASSERT_EQ(s21_array.at(2), std_array.at(2));

//   ASSERT_EQ(s21_array_swap.at(0), std_array_swap.at(0));
//   ASSERT_EQ(s21_array_swap.at(1), std_array_swap.at(1));
//   ASSERT_EQ(s21_array_swap.at(2), std_array_swap.at(2));

//   ASSERT_EQ(s21_array.size(), std_array.size());
//   ASSERT_EQ(s21_array_swap.size(), std_array_swap.size());
//   ASSERT_EQ(s21_array.empty(), std_array.empty());
//   ASSERT_EQ(s21_array_swap.empty(), std_array_swap.empty());
// }

// TEST(array, def_fill) {
//   s21::array<char, 3> s21_array{'1', '2', '3'};
//   std::array<char, 3> std_array{'1', '2', '3'};
//   s21_array.fill('$');
//   std_array.fill('$');

//   ASSERT_EQ(s21_array.at(0), std_array.at(0));
//   ASSERT_EQ(s21_array.at(1), std_array.at(1));
//   ASSERT_EQ(s21_array.at(2), std_array.at(2));

//   ASSERT_EQ(s21_array.size(), std_array.size());
//   ASSERT_EQ(s21_array.empty(), std_array.empty());
// }

// TEST(array, def_fill_1) {
//   s21::array<float, 3> s21_array{1.5, 2.5, 3.5};
//   std::array<float, 3> std_array{1.5, 2.5, 3.5};
//   s21_array.fill(10.5);
//   std_array.fill(10.5);

//   ASSERT_EQ(s21_array.at(0), std_array.at(0));
//   ASSERT_EQ(s21_array.at(1), std_array.at(1));
//   ASSERT_EQ(s21_array.at(2), std_array.at(2));

//   ASSERT_EQ(s21_array.size(), std_array.size());
//   ASSERT_EQ(s21_array.empty(), std_array.empty());
// }

// TEST(array, def_fill_2) {
//   s21::array<int, 3> s21_array{1, 2, 3};
//   std::array<int, 3> std_array{1, 2, 3};
//   s21_array.fill(100);
//   std_array.fill(100);

//   ASSERT_EQ(s21_array.at(0), std_array.at(0));
//   ASSERT_EQ(s21_array.at(1), std_array.at(1));
//   ASSERT_EQ(s21_array.at(2), std_array.at(2));

//   ASSERT_EQ(s21_array.size(), std_array.size());
//   ASSERT_EQ(s21_array.empty(), std_array.empty());
// }

// ----------------

// TEST(s21_correct, def) {
//     s21::array<int, 3> s21array1{1, 2, 3};
//     s21::array<int, 3> s21array2{4, 5, 6};
//     std::array<int, 3> stdarray1{1, 2, 3};
//     std::array<int, 3> stdarray2{4, 5, 6};

//     // std::cout << s21array1.front() << std::endl;

//     s21array1.swap(s21array2);
//     stdarray1.swap(stdarray2);

//     ASSERT_EQ(s21array1, stdarray1);
//     ASSERT_EQ(s21array2, stdarray2);
// }

// TEST(arrayTest, DefaultConstructor) {
//   s21::array<int, 5> arr;
//   // Check that the size is correct
//   EXPECT_EQ(arr.size(), 5);

//   // Check that all elements are initialized to their default value (0 for int)
//   for (size_t i = 0; i < arr.size(); ++i) {
//     EXPECT_EQ(arr[i], 0);
//   }
// }



int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}