#include "s21_stack.h"

namespace s21 {

  /* constructors */

  // default
  template <typename value_type>
  stack<value_type>::stack() {}

  // initializer list
  template <typename value_type>
  stack<value_type>::stack(std::initializer_list<value_type> const &items) {
    for (auto it = items.begin(); it != items.end(); ++it) {
      push(*it);
    }
  }

  // copy
  template <typename value_type>
  stack<value_type>::stack(const stack &s) : list(s.list) {}

  // move
  template <typename value_type>
  stack<value_type>::stack(stack &&s) : list(std::move(s.list)) {}

  // destructor
  template <typename value_type>
  stack<value_type>::~stack() {}

  /* overload operators */

  template <typename value_type>
  stack<value_type>& stack<value_type>::operator=(stack &&s) {
    list = std::move(s.list);
    return *this;
  }

  /* element access */

  template <typename value_type>
  typename stack<value_type>::const_reference stack<value_type>::top() const {
    return list.back();
  }

  /* capacity */

  template <typename value_type>
  bool stack<value_type>::empty() const {
    return list.empty();
  }

  template <typename value_type>
  typename stack<value_type>::size_type stack<value_type>::size() const {
    return list.size();
  }

  /* modifiers */

  template <typename value_type>
  void stack<value_type>::push(const_reference value) {
    list.push_back(value);
  }

  template <typename value_type>
  void stack<value_type>::pop() {
    if (!empty()) {
      list.pop_back();
    }
  }

  template <typename value_type>
  void stack<value_type>::swap(stack& other) {
    list.swap(other.list);
  }

  template <typename value_type>
  template <typename... Args>
  void stack<value_type>::insert_many_front(Args&&... args) {
    std::initializer_list<value_type> elements{args...};
    for (auto it = elements.begin(); it != elements.end(); ++it) {
      push(*it);
    }
  }

  /* additional */

  template <typename value_type>
  void stack<value_type>::print() {
    s21::stack<value_type> init_temp(*this);
    s21::stack<value_type> prnt_temp;
    while (!init_temp.empty()) {
      auto val = init_temp.top();
      prnt_temp.push(val);
      init_temp.pop();
    }
    while (!prnt_temp.empty()) {
      std::cout << prnt_temp.top() << " ";
      prnt_temp.pop();
    }
    std::cout << std::endl;
  }

} // namespace s21
