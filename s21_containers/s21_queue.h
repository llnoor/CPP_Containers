#ifndef SRC_S21_CONTAINERS_S21_QUEUE_H
#define SRC_S21_CONTAINERS_S21_QUEUE_H

#include <iostream>
#include "s21_list.h"

namespace s21 {

template <typename T>
class queue {
  public:
    using value_type = T;
    using reference = T&;
    using const_reference = const T&;
    using size_type = size_t;

    /* functions. constructors and destructor */
    queue();                // default
    queue(std::initializer_list<value_type> const &items);
    queue(const queue &q);  // copy constructor
    queue(queue &&q);       // move constructor
    ~queue();               // destructor

    queue<value_type>& operator=(queue &&q);
      // assignment operator overload for moving object
    
    /* methods. element access */
    const_reference front() const;  // access the first element
    const_reference back() const;   // access the last element

    /* methods. capacity */
    bool empty() const;             // checks whether the container is empty
    size_type size() const;         // returns the number of elements

    /* methods. modifiers */
    void push(const_reference value); // inserts element at the end
    void pop();                       // removes the first element
    void swap(queue& other);          // swaps the contents
    /* bonus */
    template <typename... Args>
    void insert_many_back(Args&&... args);
      // appends new elements to the end of the container

    /* additional */
    void print();

  private:
    s21::list<value_type> list;
};  // class queue

}  // namespace s21

#include "queue.tpp"
#endif // SRC_S21_CONTAINERS_S21_QUEUE_H
