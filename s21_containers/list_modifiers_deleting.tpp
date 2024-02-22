#include "s21_list.h"

namespace s21 {

template <typename value_type>
void list<value_type>::pop_back() {
  if (size_ == 0) {
    throw std::out_of_range("error: list is empty. cannot pop back.");
  }

  Node<value_type>* toDelete = tail_;

  if (size_ == 1) {
    head_ = tail_ = nullptr;
  } else {
    tail_ = tail_->prev;
    tail_->next = nullptr;
    UpdateEndNode();
  }

  delete toDelete;
  --size_;
}

template <typename value_type>
void list<value_type>::pop_front() {
  if (size_ == 0) {
    throw std::out_of_range("error: list is empty. cannot pop front.");
  }

  Node<value_type>* toDelete = head_;

  if (size_ == 1) {
    head_ = tail_ = nullptr;
  } else {
    head_ = head_->next;
    head_->prev = nullptr;
    UpdateEndNode();
  }

  delete toDelete;
  --size_;
}

template <typename value_type>
void list<value_type>::clear() {
  while (!empty()) {
    pop_back();
  }
}

template <typename value_type>
void list<value_type>::erase(iterator pos) {
  if (empty()) {
    return;
  }

  Node<value_type>* pos_node = pos.get_current();
  Node<value_type>* prev_node = pos_node->prev;
  Node<value_type>* next_node = pos_node->next;

  if (pos == head_) {
    pop_front();
  } else if (pos == tail_ || pos == cycle_) {
    pop_back();
  } else {
    prev_node->next = next_node;
    next_node->prev = prev_node;
    delete pos_node;
    --size_;
  }
}

template <typename value_type>
void list<value_type>::unique() {
  if (size_ <= 1) {
    return;
  }
  Node<value_type>* current = head_;
  while (current->next != cycle_) {
    if (current->data == current->next->data) {
      erase(iterator(current->next));
    } else {
      current = current->next;
    }
  }
}

}  // namespace s21
