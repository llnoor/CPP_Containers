#include "s21_list.h"

namespace s21 {

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
      tail->next_ = nullptr; //new
      // tail->next_ = head; //cycle
      // head->prev_ = tail; //cycle
      updateEmptyNode();
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
      head->prev_ = nullptr; //new
      // head->prev_ = tail; //cycle
      // tail->next_ = head; //cycle
      updateEmptyNode();
    }

    delete toDelete;
    --size_;
  }

  template <typename value_type>
  void list<value_type>::clear() {
    while (!empty()) {
      pop_back();
    }
    // delete cycle;
  }

  template <typename value_type>
  void list<value_type>::erase(iterator pos) {
    if (empty()) {
      return;
    }

    Node<value_type>* posNode = pos.getCurrent();
    Node<value_type>* prevNode = posNode->prev_;
    Node<value_type>* nextNode = posNode->next_;

    if (pos == head) {
      pop_front();
    } else if (pos == tail || pos == cycle) {
      pop_back();
    } else {
      prevNode->next_ = nextNode;
      nextNode->prev_ = prevNode;
      delete posNode;
      --size_;
    }
  }

  template <typename value_type>
  void list<value_type>::unique() {
    if (size_ <= 1) { return; }
    Node<value_type> *current = head;
    while (current->next_ != cycle) {
      if (current->data_ == current->next_->data_) {
        erase(iterator(current->next_));
      } else {
        current = current->next_; 
      }
    }
  }

}