#include "s21_list.h"

namespace s21 {

  template <typename value_type>
  typename list<value_type>::iterator& list<value_type>::iterator::operator++() {
    move_forward(1);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::iterator& list<value_type>::iterator::operator--() {
    move_backward(1);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::iterator& list<value_type>::iterator::operator+(size_type n) {
    move_forward(n);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::iterator& list<value_type>::iterator::operator-(size_type n) {
    move_backward(n);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::iterator& list<value_type>::iterator::operator+=(size_type n) {
    move_forward(n);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::iterator& list<value_type>::iterator::operator-=(size_type n) {
    move_backward(n);
    return *this;
  }

  template <typename value_type>
  void list<value_type>::iterator::move_forward(size_type n) {
    for (size_type i = 0; i < n; ++i) {
      current = current->next_;
    }
  }

  template <typename value_type>
  void list<value_type>::iterator::move_backward(size_type n) {
    for (size_type i = 0; i < n; ++i) {
      current = current->prev_;
    }
  }

} // namespace 21
