#include "s21_list.h"

namespace s21 {

template <typename value_type>
typename list<value_type>::const_reference
list<value_type>::const_iterator::operator*() {
  if (current_ == nullptr) {
    return default_value;
  }
  return current_->data;
}

template <typename value_type>
typename list<value_type>::const_iterator&
list<value_type>::const_iterator::operator++() {
  MoveForward(1);
  return *this;
}

template <typename value_type>
typename list<value_type>::const_iterator&
list<value_type>::const_iterator::operator--() {
  MoveBackward(1);
  return *this;
}

template <typename value_type>
typename list<value_type>::const_iterator&
list<value_type>::const_iterator::operator+(size_type n) {
  MoveForward(n);
  return *this;
}

template <typename value_type>
typename list<value_type>::const_iterator&
list<value_type>::const_iterator::operator-(size_type n) {
  MoveBackward(n);
  return *this;
}

template <typename value_type>
typename list<value_type>::const_iterator&
list<value_type>::const_iterator::operator+=(size_type n) {
  MoveForward(n);
  return *this;
}

template <typename value_type>
typename list<value_type>::const_iterator&
list<value_type>::const_iterator::operator-=(size_type n) {
  MoveBackward(n);
  return *this;
}

template <typename value_type>
void list<value_type>::const_iterator::MoveForward(size_type n) {
  if (current_ == nullptr) {
    return;
  }
  for (size_type i = 0; i < n; ++i) {
    current_ = current_->next;
  }
}

template <typename value_type>
void list<value_type>::const_iterator::MoveBackward(size_type n) {
  if (current_ == nullptr) {
    return;
  }
  for (size_type i = 0; i < n; ++i) {
    current_ = current_->prev;
  }
}

}  // namespace s21
