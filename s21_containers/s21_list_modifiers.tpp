#include "s21_list.h"

namespace s21 {

  /* element adding */

  template <typename value_type>
  void list<value_type>::push_back(const_reference value) {
    Node<value_type> *newNode = new Node<value_type>(value);

    if (empty()) {
      head = tail = newNode;
      head->prev_ = tail->next_ = nullptr;
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

  /* element deleting */

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

  template <typename value_type>
  void list<value_type>::clear() {
    while (!empty()) { pop_back(); }
  }

  template <typename value_type>
  void list<value_type>::erase(iterator pos) {
    if (empty()) { return; }

    Node<value_type>* posNode = pos.getCurrent();
    Node<value_type>* prevNode = posNode->prev_;
    Node<value_type>* nextNode = posNode->next_;

    if (pos == head) {
      pop_front();
    } else if (pos == tail) {
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
    while (current->next_ != head) {
      if (current->data_ == current->next_->data_) {
        erase(iterator(current->next_));
      } else {
        current = current->next_; 
      }
    }
  }

  /* content exchanging */

  template <typename value_type>
  void list<value_type>::swap(list& other) {
    std::swap(head, other.head);
    std::swap(tail, other.tail);
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

} // namespace 21
