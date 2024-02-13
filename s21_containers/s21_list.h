#ifndef SRC_S21_CONTAINERS_S21_LIST_H
#define SRC_S21_CONTAINERS_S21_LIST_H

#include <iostream>
#include <limits>

namespace s21 {

template <typename T>
struct Node {
  T data_;
  Node *prev_, *next_;

  Node() : data_(), prev_(nullptr), next_(nullptr) {}
  Node(const T& value) : data_(value), prev_(nullptr), next_(nullptr) {}
};

template <typename T>
class list {
  public:
    class ListIterator;
    class ListConstIterator;

    using value_type = T;
    using reference = T&;
    using const_reference = const T&;
    using iterator = ListIterator;
    using const_iterator = ListConstIterator;
    using size_type = size_t;

    class ListIterator {
      public:
        ListIterator(Node<value_type> *object) : current(object) {}
        reference operator*();
        iterator& operator++();
        iterator& operator--();
        iterator& operator+(size_type n);
        iterator& operator-(size_type n);
        iterator& operator+=(size_type n);
        iterator& operator-=(size_type n);
        bool operator==(const iterator &other) { return current == other.current; }
        bool operator!=(const iterator &other) { return current != other.current; }
        Node<value_type>* getCurrent() { return current; }

      private:
        Node<value_type> *current;
        void move_forward(size_type n);
        void move_backward(size_type n);
    };  // internal class

    class ListConstIterator {
      public:
        ListConstIterator(Node<value_type> *object) : current(object) {}
        const_reference operator*();
        const_iterator& operator++();
        const_iterator& operator--();
        const_iterator& operator+(size_type n);
        const_iterator& operator-(size_type n);
        const_iterator& operator+=(size_type n);
        const_iterator& operator-=(size_type n);
        bool operator==(const const_iterator &other) { return current == other.current; }
        bool operator!=(const const_iterator &other) { return current != other.current; }
        Node<value_type>* getCurrent() { return current; }

      private:
        Node<value_type> *current;
        void move_forward(size_type n);
        void move_backward(size_type n);
    };  // internal class

    /* functions. constructors and destructor */
    list();                  // default
    list(size_type n);       // parameterized
    list(std::initializer_list<value_type> const &items);
    list(const list &l);     // copy constructor
    list(list &&l);          // move constructor
    ~list();                 // destructor

    list<value_type>& operator=(list &&l);      // assignment operator overload for moving object

    /* methods. element access */
    const_reference front() const;  // access the first element
    const_reference back() const;   // access the last element

    /* methods. iterators */
    iterator begin();         // returns an iterator to the beginning
    iterator end();           // returns an iterator to the end
    const_iterator cbegin() const;         // returns a const iterator to the beginning
    const_iterator cend() const;           // returns a const iterator to the end

    /* methods. capacity */
    bool empty() const;             // checks whether the container is empty
    size_type size() const;         // returns the number of elements
    size_type max_size() const;     // returns the maximum possible number of elements

    /* methods. modifiers */
    void clear();                   // clears the contents
    iterator insert(iterator pos, const_reference value);
      // inserts element into concrete pos and returns the iterator that points to the new element
    void erase(iterator pos);    // erases element at pos
    void push_back(const_reference value);  // adds an element to the end
    void pop_back();             // removes the last element
    void push_front(const_reference value); // adds an element to the head
    void pop_front();            // removed the first element
    void swap(list& other);      // swaps the content
    void merge(list& other);     // merges two sorted lists
    void splice(const_iterator pos, list& other);
      // transfers elements from list other starting from pos
    void reverse();              // reverses the order of the elements
    void unique();               // removes consecutive duplicate elements
    void sort();                 // sorts the elements

    /* additional */
    void print() const;
    void print_debug() const;

  private:
    Node<value_type> *head, *tail;
    size_type size_;
    static value_type default_value;
};  // class list

}  // namespace s21

#include "s21_list.tpp"
#include "s21_list_class_iterator.tpp"
#include "s21_list_class_iterator_const.tpp"
#include "s21_list_constructors.tpp"
#include "s21_list_modifiers.tpp"
#endif // SRC_S21_CONTAINERS_S21_LIST_H
