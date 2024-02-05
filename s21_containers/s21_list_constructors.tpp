#include "s21_list.h"

namespace s21 {
  
  // default
  template <typename value_type>
  list<value_type>::list() : head(nullptr), tail(nullptr), size_(0) {}
  // list<value_type>::list() : lock(new Node<value_type>()), size_(0) {
  //   lock->prev_ = lock->next_ = lock;
  // }

  // destructor
  template <typename value_type>
  list<value_type>::~list() {
    while (!empty()) {  // possibly will need to make it a separate function later
      pop_back();
    }
    // delete lock;
  }

  // parameterized
  template <typename value_type>
  list<value_type>::list(size_type n) : list() {
    for (std::size_t i = 0; i < n; ++i) { // possibly use auto i = 0
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

    // std::copy(l.cbegin(), l.cend(), std::back_inserter(*this));

    // for (auto& element : l.cbegin(), l.cend()) {
    //   push_back(element);
    // }
  }

} // namespace 21
