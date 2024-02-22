#include "s21_list.h"

namespace s21 {

/* content exchanging */

template <typename value_type>
void list<value_type>::swap(list& other) {
  std::swap(head_, other.head_);
  std::swap(tail_, other.tail_);
  std::swap(cycle_, other.cycle_);
  std::swap(size_, other.size_);
}

/* element reordering */

template <typename value_type>
void list<value_type>::reverse() {
  if (size_ <= 1) {
    return;
  }

  Node<value_type>* front = head_;
  Node<value_type>* back = tail_;

  while (front != back) {
    std::swap(front->data, back->data);
    if (front->next == back) {
      break;
    }
    front = front->next;
    back = back->prev;
  }
}

template <typename value_type>
void list<value_type>::sort() {
  if (size_ <= 1) {
    return;
  }

  bool swapped = true;

  while (swapped) {
    swapped = false;
    Node<value_type>* current = head_;
    Node<value_type>* last = tail_->next;

    while (current->next != last) {
      if (current->data > current->next->data) {
        std::swap(current->data, current->next->data);
        swapped = true;
      }
      current = current->next;
    }
    last = current;
  }
}

}  // namespace s21
