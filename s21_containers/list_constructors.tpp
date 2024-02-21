#include "s21_list.h"

namespace s21 {
  
  // default
  template <typename value_type>
  list<value_type>::list() : head(nullptr), tail(nullptr), size_(0) {
    cycle = new Node<value_type>;
  }

  // destructor
  template <typename value_type>
  list<value_type>::~list() {
    clear();
    delete cycle;
  }

  // parameterized
  template <typename value_type>
  list<value_type>::list(size_type n) : list() {
    if (n >= max_size()) {
      // actually it's hard even to reach this value
      // could only create 384307168202282325 / 10000000000 or lesser
      // theoretically this check is also needed in init list constructor and push methods
      throw std::out_of_range("error: trying to create a list which given size exceeds its max capacity or negative");
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
  }

  // move
  template <typename value_type>
  list<value_type>::list(list &&l) : head(l.head), tail(l.tail), cycle(l.cycle), size_(l.size_) {
    l.head = nullptr;
    l.tail = nullptr;
    l.cycle = nullptr;
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

} // namespace s21
