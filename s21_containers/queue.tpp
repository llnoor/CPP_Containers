#include "s21_queue.h"

namespace s21 {

/* constructors */

// default
template <typename value_type>
queue<value_type>::queue() {}

// initializer list
template <typename value_type>
queue<value_type>::queue(std::initializer_list<value_type> const &items) {
  for (auto it = items.begin(); it != items.end(); ++it) {
    push(*it);
  }
}

// copy
template <typename value_type>
queue<value_type>::queue(const queue &q) : list_(q.list_) {}

// move
template <typename value_type>
queue<value_type>::queue(queue &&q) : list_(std::move(q.list_)) {}

// destructor
template <typename value_type>
queue<value_type>::~queue() {}

/* overload operators */

template <typename value_type>
queue<value_type> &queue<value_type>::operator=(queue &&q) {
  list_ = std::move(q.list_);
  return *this;
}

/* element access */

template <typename value_type>
typename queue<value_type>::const_reference queue<value_type>::front() const {
  return list_.front();
}

template <typename value_type>
typename queue<value_type>::const_reference queue<value_type>::back() const {
  return list_.back();
}

/* capacity */

template <typename value_type>
bool queue<value_type>::empty() const {
  return list_.empty();
}

template <typename value_type>
typename queue<value_type>::size_type queue<value_type>::size() const {
  return list_.size();
}

/* modifiers */

template <typename value_type>
void queue<value_type>::push(const_reference value) {
  list_.push_back(value);
}

template <typename value_type>
void queue<value_type>::pop() {
  if (!empty()) {
    list_.pop_front();
  }
}

template <typename value_type>
void queue<value_type>::swap(queue &other) {
  list_.swap(other.list_);
}

template <typename value_type>
template <typename... Args>
void queue<value_type>::insert_many_back(Args &&...args) {
  std::initializer_list<value_type> elements{args...};
  for (auto it = elements.begin(); it != elements.end(); ++it) {
    push(*it);
  }
}

/* additional */

template <typename value_type>
void queue<value_type>::Print() {
  s21::queue<value_type> temp(*this);
  while (!temp.empty()) {
    std::cout << temp.front() << " ";
    temp.pop();
  }
  std::cout << std::endl;
}

}  // namespace s21
