#include "s21_list.h"

namespace s21 {

template <typename value_type>
template <typename... Args>
void list<value_type>::insert_many_back(Args&&... args) {
  std::initializer_list<value_type> elements{args...};
  for (auto it = elements.begin(); it != elements.end(); ++it) {
    push_back(*it);
  }
}

template <typename value_type>
template <typename... Args>
void list<value_type>::insert_many_front(Args&&... args) {
  std::initializer_list<value_type> elements{args...};
  s21::list<value_type> temp;

  for (auto it = elements.begin(); it != elements.end(); ++it) {
    temp.push_back(*it);
  }
  splice(cbegin(), temp);
}

template <typename value_type>
template <typename... Args>
typename list<value_type>::iterator list<value_type>::insert_many(
    const_iterator pos, Args&&... args) {
  std::initializer_list<value_type> elements{args...};
  auto it_this(pos.get_current());

  for (auto it_args = elements.begin(); it_args != elements.end(); ++it_args) {
    insert(it_this, *it_args);
  }

  return it_this;
}

}  // namespace s21
