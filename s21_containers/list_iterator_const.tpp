#include "s21_list.h"

namespace s21 {

  template <typename value_type>
  typename list<value_type>::const_reference list<value_type>::const_iterator::operator*() {
    if (current == nullptr) { return default_value; }
    return current->data_; 
  }

  template <typename value_type>
  typename list<value_type>::const_iterator& list<value_type>::const_iterator::operator++() {
    move_forward(1);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::const_iterator& list<value_type>::const_iterator::operator--() {
    move_backward(1);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::const_iterator& list<value_type>::const_iterator::operator+(size_type n) {
    move_forward(n);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::const_iterator& list<value_type>::const_iterator::operator-(size_type n) {
    move_backward(n);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::const_iterator& list<value_type>::const_iterator::operator+=(size_type n) {
    move_forward(n);
    return *this;
  }

  template <typename value_type>
  typename list<value_type>::const_iterator& list<value_type>::const_iterator::operator-=(size_type n) {
    move_backward(n);
    return *this;
  }

  template <typename value_type>
  void list<value_type>::const_iterator::move_forward(size_type n) {
    if (current == nullptr) { return; }
    for (size_type i = 0; i < n; ++i) {
      current = current->next_;
    }
  }

  template <typename value_type>
  void list<value_type>::const_iterator::move_backward(size_type n) {
    if (current == nullptr) { return; }
    for (size_type i = 0; i < n; ++i) {
      current = current->prev_;
    }
  }

} // namespace s21
