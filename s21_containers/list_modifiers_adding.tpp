#include "s21_list.h"

namespace s21 {

template <typename value_type>
void list<value_type>::push_back(const_reference value) {
  Node<value_type> *new_node = new Node<value_type>(value);

  if (empty()) {
    head_ = tail_ = new_node;
  } else {
    tail_->next = new_node;
    new_node->prev = tail_;
    tail_ = new_node;
  }
  UpdateEndNode();

  ++size_;
}

template <typename value_type>
void list<value_type>::push_front(const_reference value) {
  Node<value_type> *new_node = new Node<value_type>(value);

  if (empty()) {
    head_ = tail_ = new_node;
  } else {
    new_node->next = head_;
    head_->prev = new_node;
    head_ = new_node;
  }
  UpdateEndNode();

  ++size_;
}

template <typename value_type>
typename list<value_type>::iterator list<value_type>::insert(
    iterator pos, const_reference value) {
  if (empty()) {
    push_front(value);
    return pos;
  }

  if (pos == head_) {
    push_front(value);
  } else if (pos == cycle_) {  // end
    push_back(value);
  } else {
    Node<value_type> *new_node = new Node<value_type>(value);
    Node<value_type> *pos_node = pos.get_current();
    Node<value_type> *prev_node = pos_node->prev;

    new_node->prev = pos_node->prev;
    new_node->next = pos_node;
    prev_node->next = new_node;
    pos_node->prev = new_node;

    ++size_;
  }

  return pos;
}

template <typename value_type>
void list<value_type>::splice(const_iterator pos, list &other) {
  if (other.empty()) {
    return;
  }
  if (empty()) {
    swap(other);
    return;
  }

  auto it_other = other.begin();
  auto it_this(pos.get_current());

  for (size_type i = 1; i <= other.size(); ++i, ++it_other) {
    insert(it_this, *it_other);
  }
  other.clear();
}

template <typename value_type>
void list<value_type>::merge(list &other) {
  if (empty()) {
    swap(other);
    return;
  }
  if (other.empty()) {
    return;
  }
  if (this == &other) {
    return;
  }

  auto it_this = begin();
  auto it_other = other.begin();

  while (it_other != other.end()) {
    if (*it_other < *it_this || it_this == end()) {
      insert(it_this, *it_other);
      auto temp = it_other;
      ++it_other;
      other.erase(temp);
    } else {
      ++it_this;
    }
  }
}

}  // namespace s21
