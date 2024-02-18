#include "s21_list.h"

namespace s21 {

  /* content exchanging */

  template <typename value_type>
  void list<value_type>::swap(list& other) {
    std::swap(head, other.head);
    std::swap(tail, other.tail);
    std::swap(cycle, other.cycle);
    std::swap(size_, other.size_);
  }

  /* element reordering */

  template <typename value_type>
  void list<value_type>::reverse() {
    if (size_ <= 1) { return; }

    Node<value_type> *front = head;
    Node<value_type> *back = tail;

    while (front != back) {
      std::swap(front->data_, back->data_);
      if (front->next_ == back) { break; }
      front = front->next_;
      back = back->prev_;
    }
  }

  template <typename value_type>
  void list<value_type>::sort() {
    if (size_ <= 1) { return; }

    bool swapped = true;

    while (swapped) {
      swapped = false;
      Node<value_type>* current = head;
      Node<value_type>* last = tail->next_;

      while (current->next_ != last) {
        if (current->data_ > current->next_->data_) {
          std::swap(current->data_, current->next_->data_);
          swapped = true;
        }
        current = current->next_;
      }
      last = current;
    }
  }

} // namespace 21
