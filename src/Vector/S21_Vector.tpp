#include"S21_Vector.h"

namespace s21 {

// конструктор по умолчанию
template<typename value_type>
Vector<value_type>::Vector() : data_(nullptr), size_(0), capacity_(0) {};

// конструктор с одним параметром
template<typename value_type>
Vector<value_type>::Vector(size_type n) : size_(n), capacity_(n), data_(new value_type[n]{}) {}

// конструктор списка инициализаторов, создает вектор, инициализированный с помощью std::initializer_list
template<typename value_type>
Vector<value_type>::Vector(std::initializer_list<value_type> const &items) {
  size_ = capacity_ = items.size();
  data_ = new value_type[capacity_];
  std::copy(items.begin(), items.end(), data_);
}

// конструктор копирования
template<typename value_type>
Vector<value_type>::Vector(const Vector &v)
    : data_(new value_type[v.capacity_]), size_(v.size_), capacity_(v.capacity_)  {
  std::copy(v.data_, v.data_ + v.size_, data_);
}

// конструктор перемещения
template<typename value_type>
Vector<value_type>::Vector(Vector &&v) : size_(v.size_), capacity_(v.capacity_), data_(v.data_) {
  v.size_ = v.capacity_ = 0;
  v.data_ = nullptr;
}

// деструктор
template<typename value_type>
Vector<value_type>::~Vector() {
  size_ = capacity_ = 0;
  delete[] data_;
  data_ = nullptr;
}

//Перегрузка оператора присваивания для перемещения объекта
//template<typename value_type>
//Vector<value_type> &Vector<value_type>::operator=(Vector &&v) {
//
//  return *this;
//}

template<typename value_type>
Vector<value_type> &Vector<value_type> :: operator=(const Vector &other) {
  if (this != &other) { // Проверка на самоприсваивание
    delete[] data_; // Очищаем старые данные

    // Копируем размер и емкость
    size_ = other.size_;
    capacity_ = other.capacity_;

    // Выделяем новую память и копируем элементы
    data_ = new value_type[capacity_];
    std::copy(other.data_, other.data_ + size_, data_);
  }
  return *this;
}

template<typename value_type>
typename Vector<value_type>::reference Vector<value_type>::operator[](size_type pos) {
  return data_[pos];
}

//доступ к указанному элементу с проверкой границ
template<typename value_type>
typename Vector<value_type>::reference Vector<value_type>::at(size_type pos) {
  if (pos >= size()) {
    throw std::out_of_range("out of range");
  }
  // Exceptions
// std::out_of_range if pos >= size().
  return data_[pos];
}

/*
отличие reference от const reference
первый позволяет изменять значение эл-та через эту ссылку
второй пред доступ к неизменяемому эл-ту контейнера(только читать)
*/

// возвращает ссылку на первый эл-т
template<typename value_type>
typename Vector<value_type>::const_reference Vector<value_type>::front() const {
  // в ориге не выбрасывает не знаю оставлять ли
  if (size_ == 0) {
    throw std::out_of_range("empty");
  }
  return data_[0];
}

template<typename value_type>
typename Vector<value_type>::const_reference Vector<value_type>::back() const {
  return data_[size_ - 1];
}

template<typename T>
T* s21::Vector<T>::data() {
  return data_;
}
// data_ указатель на начало массива size_ кол-во эл-ов

template<typename value_type>
typename Vector<value_type>::iterator Vector<value_type>::begin() {
  return data_;
}

template<typename value_type>
typename Vector<value_type>::iterator Vector<value_type>::end() {
  return data_ + size_;
}

template<typename value_type>
bool Vector<value_type>::empty() {
  return size_ == 0;
}

template<typename value_type>
typename Vector<value_type>::size_type Vector<value_type>::size() {
  return size_;
}

// верхний предел на размер вектора
template<typename value_type>
typename Vector<value_type>::size_type Vector<value_type>::max_size() {
  return std::numeric_limits<size_t>::max() / sizeof(size_type);

}

template<typename value_type>
typename Vector<value_type>::size_type Vector<value_type>::capacity() {
  return (capacity_ - size_);
}


 template <typename value_type>
 void Vector<value_type>::clear() {
   delete[] data_;
   data_ = nullptr;
   size_ = capacity_ = 0;
 }

// для предварительного выделения памяти для хранения указанного числа элементов
// template <typename value_type>
// void Vector<value_type>::reserve(size_type size) {
//   if(size > max_size()) {
//     throw std::length_error("lenght err");
//   }
//   if(size > capacity_) {
//     value_type* new_data = new value_type[size];

//     std::copy(data_, data_ +size_, new_data);

//     delete[] data_;
//     capacity_ = size;
//   }
// }
//  "typename" используется для указания, что следующий токен представляет собой тип


//не уверена в безопасности
template<typename value_type>
void Vector<value_type>::shrink_to_fit() {
  size_type count_ = this->size_;
  while (count_--) {
    this->capacity_--;
  }
}


// Одна из стратегий - 2^n - увеличивать ёмкость контейнера по степеням двойки.
/*
Популярная стратегия — увеличение capacity по степеням двойки.
Посмотрим на асимптотику при этом.
 Пусть финальный размер массива N, k — степень двойки такая, что 2^k <= N < 2^(k+1).
  У нас копирование происходит теперь не каждый раз,
  а всё реже и реже: после 1-го шага (1 элемент), после второго (2 элемента),
   после 4-ого (4 элемента),
    после 8-го (8 элементов) и т. д. Итого 1 + 2 + 4 + ... + 2^k = 2^(k+1) - 1 < 2*N копирований.
    Таким образом, количество копирований остаётся O(N) (за счёт менее оптимального расхода памяти).


*/

//erases element at pos стирает элемент в позиции
template<typename value_type>
void Vector<value_type> :: erase(iterator pos) {
  size_--;
  capacity_ = size_ * 2;
  value_type* newData = new value_type[size_];

  size_type count = 0;
  for (size_type i = 0; i < size_ + 1; i++) {
    if (data_ + i != pos) {
      newData[count] = data_[i];
      count++;
    }
  }
  delete[] data_;
  data_ = newData;
}



template<typename value_type>
void Vector<value_type>::push_back(const_reference value) {
  if (size_ >= capacity_) {
    // если кап = 0 новая капа будет 1, в другом случае удвоение капы
    reserve((capacity_ == 0) ? 1 : capacity_ * 2);
  }
  data_[size_++] = value;
}

template<typename value_type>
void Vector<value_type>::pop_back() {
  if(size_ > 0) size_--;
}

template<typename value_type>
void Vector<value_type>::swap(Vector& other) {
    std::swap(data_, other.data_);
    std::swap(size_, other.size_);
    std::swap(capacity_, other.capacity_);
}

template<typename value_type>
void Vector<value_type>::reserve(size_type newCapacity) {
  if (newCapacity > capacity_) {
    value_type *tmp = data_;
    data_ = new value_type[newCapacity];
    std::copy(tmp, tmp + size_, data_);
    capacity_ = newCapacity;
    delete[] tmp;
  }
}

}  // namespace s21
