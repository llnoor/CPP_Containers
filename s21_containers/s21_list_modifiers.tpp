#include "s21_list.h"

namespace s21 {

  template <typename value_type>
  void list<value_type>::push_back(const_reference value) {
    Node<value_type> *newNode = new Node<value_type>(value);

    if (empty()) {
      head = tail = newNode;
      head->prev_ = tail->next_ = nullptr;
      // tail->next_ = head;
      // lock->prev_ = tail;
    } else {
      tail->next_ = newNode;
      newNode->prev_ = tail;
      newNode->next_ = head;
      head->prev_ = newNode;
      tail = newNode;
    }

    ++size_;
  }

  template <typename value_type>
  void list<value_type>::push_front(const_reference value) {
    Node<value_type> *newNode = new Node<value_type>(value);

    if (empty()) {
      head = tail = newNode;
      head->prev_ = tail->next_ = nullptr;
      // tail->next_ = head;
      // lock->prev_ = tail;
    } else {
      newNode->next_ = head;
      head->prev_ = newNode;
      newNode->prev_ = tail;
      tail->next_ = newNode;
      head = newNode;
    }

    ++size_;
  }

  template <typename value_type>
  void list<value_type>::pop_back() {
    if (size_ == 0) {
      throw std::out_of_range("error: list is empty. cannot pop back.");
    }

    Node<value_type> *toDelete = tail;

    if (size_ == 1) {
      head = tail = nullptr;
    } else {
      tail = tail->prev_;
      tail->next_ = head;
      head->prev_ = tail;
    }

    delete toDelete;
    --size_;
  }

  template <typename value_type>
  void list<value_type>::pop_front() {
    if (size_ == 0) {
      throw std::out_of_range("error: list is empty. cannot pop front.");
    }

    Node<value_type> *toDelete = head;

    if (size_ == 1) {
      head = tail = nullptr;
    } else {
      head = head->next_;
      head->prev_ = tail;
      tail->next_ = head;
    }

    delete toDelete;
    --size_;
  }

} // namespace 21
