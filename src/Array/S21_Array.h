#ifndef CPP2_S21_CONTAINERS_Array_S21_Array_H
#define CPP2_S21_CONTAINERS_Array_S21_Array_H

#include <initializer_list>
#include <iterator>
#include <limits>
#include <stdexcept>

namespace s21 {

template <typename T, size_t S>
class Array {


 public:

  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using iterator = T *;
  using const_iterator = const T *;
  using size_type = size_t; 



  Array() : data_(nullptr) {}
  explicit Array(std::initializer_list<value_type> const &items) {
     size_ = items.size();
        data_ = new T[size_];
        std::copy(items.begin(), items.end(), data_);
  }
  Array(const Array &a);
  Array(Array &&a);
  ~Array() { delete[] data_; }
  Array& operator=(Array &&a) ;

//  *Array Element access*
  reference at(size_type pos);
  reference operator[](size_type pos);
  const_reference front() const;
  const_reference back() const;
  iterator data();


// *Array Iterators*
  iterator begin();
  iterator end();


// *Array Capacity*
  bool empty();
  size_type size() const;
  size_type max_size() const;


// *Array Modifiers*
    void swap(Array& other);
    void fill(const_reference value);


  private: 
   value_type *data_;  // указатель на динамический массив
   size_type size_ = S;  // размер массива

  
};

} // namespace s21

#include "s21_Array.tpp"

#endif  // CPP2_S21_CONTAINERS_Array_S21_Array_H
