#include "s21_list.h"

namespace s21 {

template <typename value_type>
typename list<value_type>::value_type list<value_type>::default_value;

/* element access */

template <typename value_type>
typename list<value_type>::const_reference list<value_type>::front() const {
  if (empty()) {
    return default_value;
  }
  return head_->data;
}

template <typename value_type>
typename list<value_type>::const_reference list<value_type>::back() const {
  if (empty()) {
    return default_value;
  }
  return tail_->data;
}

/* capacity */

template <typename value_type>
bool list<value_type>::empty() const {
  return size_ == 0;
}

template <typename value_type>
typename list<value_type>::size_type list<value_type>::size() const {
  return size_;
}

template <typename value_type>
typename list<value_type>::size_type list<value_type>::max_size() const {
  return std::numeric_limits<size_type>::max() / sizeof(Node<value_type>) / 2;
}

/* iterators */

template <typename value_type>
typename list<value_type>::iterator list<value_type>::begin() {
  if (empty()) {
    return iterator(cycle_);
  }
  return iterator(head_);
}

template <typename value_type>
typename list<value_type>::iterator list<value_type>::end() {
  return iterator(cycle_);
}

template <typename value_type>
typename list<value_type>::const_iterator list<value_type>::cbegin() const {
  if (empty()) {
    return const_iterator(cycle_);
  }
  return const_iterator(head_);
}

template <typename value_type>
typename list<value_type>::const_iterator list<value_type>::cend() const {
  return const_iterator(cycle_);
}

/* additional */

template <typename value_type>
void list<value_type>::Print() const {
  if (!head_) {
    std::cout << std::endl;
    return;
  }
  Node<value_type> *current = head_;

  while (current != cycle_) {
    std::cout << current->data << " ";

    current = current->next;
    if (current == head_) {  // exit the loop if we've come back to the head_
      break;
    }
  }
  std::cout << std::endl;
}

template <typename value_type>
void list<value_type>::UpdateEndNode() {
  head_->prev = cycle_;
  tail_->next = cycle_;
  cycle_->next = head_;
  cycle_->prev = tail_;
  cycle_->data = cycle_->prev->data;
}

}  // namespace s21
