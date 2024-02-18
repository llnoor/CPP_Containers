#include "s21_list.h"

namespace s21 {

  template <typename value_type>
  void list<value_type>::push_back(const_reference value) {
    Node<value_type> *newNode = new Node<value_type>(value);

    if (empty()) {
      head = tail = newNode;
    } else {
      tail->next_ = newNode;
      newNode->prev_ = tail;
      tail = newNode;
    }
    updateEmptyNode();

    ++size_;
  }

  template <typename value_type>
  void list<value_type>::push_front(const_reference value) {
    Node<value_type> *newNode = new Node<value_type>(value);

    if (empty()) {
      head = tail = newNode;
    } else {
      newNode->next_ = head;
      head->prev_ = newNode;
      head = newNode;
    }
    updateEmptyNode();

    ++size_;
  }

  template <typename value_type>
  typename list<value_type>::iterator list<value_type>::insert(iterator pos, const_reference value) {
    if (empty()) {
      push_front(value);
      return pos;
    }

    if (pos == head) {
      push_front(value);
    } else if (pos == cycle) {  // end
      push_back(value);
    } else {
      Node<value_type> *newNode = new Node<value_type>(value);
      Node<value_type> *posNode = pos.getCurrent();
      Node<value_type> *prevNode = posNode->prev_;

      newNode->prev_ = posNode->prev_;
      newNode->next_ = posNode;
      prevNode->next_ = newNode;
      posNode->prev_ = newNode;

      ++size_;
    }

    return pos;
  }

  template <typename value_type>
  void list<value_type>::splice(const_iterator pos, list& other) {
    if (other.empty()) { return; }
    if (empty()) {
      swap(other);
      return;
    }

    auto it_other = other.begin();
    auto it_this(pos.getCurrent());
    
    for (size_type i = 1; i <= other.size(); ++i, ++it_other) {
      insert(it_this, *it_other);
    }
    other.clear();
  }

  template <typename value_type>
  void list<value_type>::merge(list& other) {
    if (empty()) {
      swap(other);
      return;
    }
    if (other.empty()) { return; }
    if (this == &other) { return; }
    
    auto it_this = begin();
    auto it_other = other.begin();

    while (!other.empty()) {
      if (*it_other < *it_this || it_this == end()) {
        insert(it_this, *it_other);
        other.erase(it_other);
        ++it_other;
      } else {
        ++it_this;
      }
    }
  }

} // namespace 21
