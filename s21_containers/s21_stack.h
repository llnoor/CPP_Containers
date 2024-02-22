#ifndef SRC_S21_CONTAINERS_S21_STACK_H_
#define SRC_S21_CONTAINERS_S21_STACK_H_

#include <iostream>

#include "s21_list.h"

namespace s21 {

template <typename T>
class stack {
 public:
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using size_type = size_t;

  /* functions. constructors and destructor */
  stack();  // default
  stack(std::initializer_list<value_type> const &items);
  stack(const stack &s);  // copy
  stack(stack &&s);       // move
  ~stack();               // destructor

  stack<value_type> &operator=(stack &&s);
  // assignment operator overload for moving object

  /* methods. element access */
  const_reference top() const;  // accesses the top element

  /* methods. capacity */
  bool empty() const;      // checks whether the container is empty
  size_type size() const;  // returns the number of elements

  /* methods. modifiers */
  void push(const_reference value);  // inserts element at the top
  void pop();                        // removes the top element
  void swap(stack &other);           // swaps the contents
  /* bonus */
  template <typename... Args>
  void insert_many_front(Args &&...args);
  // appends new elements to the top of the container

  /* additional */
  void Print();

 private:
  s21::list<value_type> list_;
};  // class stack

}  // namespace s21

#include "stack.tpp"
#endif  // SRC_S21_CONTAINERS_S21_STACK_H_
