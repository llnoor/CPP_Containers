#include "s21_list.h"

namespace s21 {

  template <typename value_type>
  void list<value_type>::push_back(const_reference value) {
    Node<value_type> *newNode = new Node<value_type>(value);

    if (empty()) {
      head = tail = newNode;
      // head->prev_ = tail->next_ = nullptr;  //cycle
    } else {
      tail->next_ = newNode;
      newNode->prev_ = tail;
      // newNode->next_ = head;  //cycle
      // head->prev_ = newNode;  //cycle
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
      // head->prev_ = tail->next_ = nullptr;  //cycle
    } else {
      newNode->next_ = head;
      head->prev_ = newNode;
      // newNode->prev_ = tail;  //cycle
      // tail->next_ = newNode;  //cycle
      head = newNode;
    }
    updateEmptyNode();

    ++size_;
  }

  template <typename value_type>
  typename list<value_type>::iterator list<value_type>::insert(iterator pos, const_reference value) {
    Node<value_type> *newNode = new Node<value_type>(value);
    if (empty()) {
      push_front(value);
      return iterator(newNode);
    }

    Node<value_type> *posNode = pos.getCurrent();
    Node<value_type> *prevNode = posNode->prev_;

    if (pos == head) {
      push_front(value);
    } else if (pos == cycle) {  // end
      push_back(value);
    } else {
      newNode->prev_ = posNode->prev_;
      newNode->next_ = posNode;
      prevNode->next_ = newNode;
      posNode->prev_ = newNode;
      ++size_;
    }

    return iterator(newNode);
  }

  template <typename value_type>
  void list<value_type>::splice(const_iterator pos, list& other) {
    if (other.empty()) { return; }
    if (empty()) {
      swap(other);
      return;
    }

    auto it = other.begin();
    iterator p(pos.getCurrent());
    
    for (size_type i = 1; i <= other.size(); ++i, ++it) {
      insert(p, *it);
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

}