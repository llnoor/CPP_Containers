#ifndef CPP2_S21_CONTAINERS_VECTOR_S21_VECTOR_H
#define CPP2_S21_CONTAINERS_VECTOR_S21_VECTOR_H
#include <initializer_list>
#include <iterator>
#include <limits>
#include <stdexcept>

namespace s21 {
template<typename T>
class Vector {
 public:

  //Member type
  using value_type = T;               //T defines the type of an element (T is template parameter)
  using reference = T &;              //T & defines the type of the reference to an element
  using const_reference = const T &;  //const T & defines the type of the constant reference
  using iterator = T *;               //T * or internal class VectorIterator<T> defines the type for iterating through the container
  using const_iterator = const T *;   //const T * or internal class VectorConstIterator<T> defines the constant type for iterating through the container
  using size_type = size_t;           //size_t defines the type of the container size (standard type is size_t)

  //Functions
  Vector();                                                   //default constructor, creates empty vector
  Vector(size_type n);                                        //parameterized constructor, creates the vector of size n
  Vector(std::initializer_list<value_type> const &items);     //initializer list constructor, creates vector initizialized using std::initializer_list
  Vector(const Vector &v);                                    //copy constructor
  Vector(Vector &&v);                                         //move constructor
  ~Vector();                                                  //destructor
  //operator=(vector &&v);                                      //assignment operator overload for moving object


  Vector &operator=(const Vector &other) {
    if (this != &other) { // Проверка на самоприсваивание
      delete[] data_; // Очищаем старые данные

      // Копируем размер и емкость
      size_ = other.size_;
      capacity_ = other.capacity_;

      // Выделяем новую память и копируем элементы
      data_ = new value_type[capacity_];
      std::copy(other.data_, other.data_ + size_, data_);
    }
    return *this;
  }

  // value_type& operator[](size_type index) {
  //     return data_[index];
  // }

  //        value_type& operator[](size_type index) {
  //     return data_[index];
  // }
  // template <typename value_type>
  // typename Vector

// этот оператор возвращает ссылку на элемент контейнера
  reference operator[](size_type pos);

// operator[] доступа к элементам контейнера по индексу(для получения доступа по позиции)
//size_type тип для предоставления размера контейнера

// reference указывает на то что оператор возврщаает ссылку на эл-т

// возвращает ссылку на элемент контейнера по указанному индексу

  reference at(size_type pos);

  const_reference front() const;
  const_reference back() const;

// доступ к внутреннему массиву
// возвращает указатель на начало массива
  T *data() {
    return data_;
  };
// Vector<int> то T* -> int* указатель на массив эл-ов типа int внутри вектора


// Vector iterators

  iterator begin();
  iterator end();

  bool empty();
  size_type size();
  size_type max_size();

  void reserve(size_type size);

  size_type capacity();



  // void clear();

  void shrink_to_fit();
  void push_back(const_reference value);

 private:
  value_type *data_;
  size_type size_;
  size_type capacity_;

};
}

#include "s21_Vector.tpp"
#endif // CPP2_S21_CONTAINERS_VECTOR_S21_VECTOR_H




