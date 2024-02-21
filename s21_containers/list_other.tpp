#include "s21_list.h"

namespace s21 {

  template <typename value_type>
  typename list<value_type>::value_type list<value_type>::default_value;

  /* element access */
  
  template <typename value_type>
  typename list<value_type>::const_reference list<value_type>::front() const {
    if (empty()) { return default_value; }
    return head->data_;
  }

  template <typename value_type>
  typename list<value_type>::const_reference list<value_type>::back() const {
    if (empty()) { return default_value; }
    return tail->data_;
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
    if (empty()) { return iterator(cycle); }
    return iterator(head);
  }

  template <typename value_type>
  typename list<value_type>::iterator list<value_type>::end() {
    return iterator(cycle);
  }

  template <typename value_type>
  typename list<value_type>::const_iterator list<value_type>::cbegin() const {
    if (empty()) { return const_iterator(cycle); }
    return const_iterator(head);
  }

  template <typename value_type>
  typename list<value_type>::const_iterator list<value_type>::cend() const {
    return const_iterator(cycle);
  }

  /* additional */

  template <typename value_type>
  void list<value_type>::print() const {
    if (!head) {
      std::cout << std::endl;
      return;
    }
    Node<value_type> *current = head;

    while (current != cycle) {
      std::cout << current->data_ << " ";
      /*// pointer debugging
      std::cout << current << ": " << current->data_ << std::endl;
      std::cout << "  prev: " << current->prev_ << ", next: " << current->next_ << std::endl;
      */

      current = current->next_;
      if (current == head) {  // exit the loop if we've come back to the head
        break;
      }
    }
    std::cout << std::endl;
  }

  template <typename value_type>
  void list<value_type>::updateEmptyNode() {
    head->prev_ = cycle;
    tail->next_ = cycle;
    cycle->next_ = head;
    cycle->prev_ = tail;
    cycle->data_ = cycle->prev_->data_;
  }

} // namespace s21
