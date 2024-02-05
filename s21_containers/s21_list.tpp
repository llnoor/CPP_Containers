#include "s21_list.h"

namespace s21 {

  /* element access */
  
  template <typename value_type>
  typename list<value_type>::const_reference list<value_type>::front() const {
    if (empty()) {
      throw std::out_of_range("error: list is empty, cannot access the front element.");
    }
    return head->data_;
  }

  template <typename value_type>
  typename list<value_type>::const_reference list<value_type>::back() const {
    if (empty()) {
      throw std::out_of_range("error: list is empty, cannot access the back element.");
    }
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

  /* iterators */

  template <typename value_type>
  typename list<value_type>::iterator list<value_type>::begin() {
    return iterator(head);
  }

  template <typename value_type>
  typename list<value_type>::iterator list<value_type>::end() {
    return iterator(tail);  // nullptr?
  }

  template <typename value_type>
  typename list<value_type>::const_iterator list<value_type>::cbegin() const {
    return const_iterator(head);
  }

  template <typename value_type>
  typename list<value_type>::const_iterator list<value_type>::cend() const {
    return const_iterator(tail);  // nullptr?
  }

  /* additional */

  template <typename value_type>
  void list<value_type>::print() const {
    Node<value_type> *current = head;

    while (current != nullptr) {
      std::cout << current->data_ << " ";
      current = current->next_;
      if (current == head) {  // exit the loop if we've come back to the head
        break;
      }
    }
    std::cout << std::endl;
  }

  template <typename value_type>
  void list<value_type>::print_debug() const {
    Node<value_type> *current = head;

    while (current != nullptr) {
      std::cout << current << ": " << current->data_ << std::endl;
      std::cout << "  prev: " << current->prev_ << ", next: " << current->next_ << std::endl;
      
      current = current->next_;
      if (current == head) {  // exit the loop if we've come back to the head
        break;
      }
    }
    std::cout << std::endl;
  }

} // namespace 21
