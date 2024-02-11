#include "s21_list.h"

namespace s21 {
  
  // default
  template <typename value_type>
  list<value_type>::list() : head(nullptr), tail(nullptr), size_(0) {}

  // destructor
  template <typename value_type>
  list<value_type>::~list() {
    clear();
  }

  // parameterized
  template <typename value_type>
  list<value_type>::list(size_type n) : list() {
    if (n >= max_size()) {  // actually it's hard even to reach this value
      throw std::out_of_range("error: trying to create a list which given size exceeds its max capacity");
    }
    for (size_type i = 0; i < n; ++i) {
      push_back(value_type{});
    }
  }

  // initializer list
  template <typename value_type>
  list<value_type>::list(std::initializer_list<value_type> const &items) : list() {
    for (auto it = items.begin(); it != items.end(); ++it) {
      push_back(*it);
    }
  }

  // copy
  template <typename value_type>
  list<value_type>::list(const list &l) : list() {
    for (auto it = l.cbegin(); it != l.cend(); ++it) {
      push_back(*it);
    }
    if (!l.empty()) {
      push_back(*l.cend());
    }
  }

  // move
  template <typename value_type>
  list<value_type>::list(list &&l) : head(l.head), tail(l.tail), size_(l.size_) {
    l.head = nullptr;
    l.tail = nullptr;
    l.size_ = 0;
  }

  /* overload operators */

  template <typename value_type>
  list<value_type>& list<value_type>::operator=(list &&l) {
    if (this != &l) {
      *this = std::move(l);
    }
    return *this;
  }

} // namespace 21
