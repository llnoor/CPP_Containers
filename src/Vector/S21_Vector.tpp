namespace s21 {



// конструктор с одним параметром 
template <typename value_type> // объявление шаблона класса вектор с параметром
Vector<value_type>::Vector(size_type n) : size_(n), capacity_(n), data_(new value_type[n]) { // инициализация  членов класса. data выдел новый массив  value_type размером n и присваивает его указатель переменной data_ 
    for (size_type i = 0; i < size_; ++i) {
        data_[i] = value_type();
    }
}
// Это цикл, который инициализирует каждый элемент массива data_ значением по умолчанию типа value_type. Для этого используется конструктор по умолчанию value_type(). В результате каждый элемент вектора будет проинициализирован значением по умолчанию типа value_type.


// конструктор копирования 
template <typename value_type>
Vector<value_type>::Vector(const Vector &v) 
    : size_(v.size_), capacity_(v.capacity_), data_(new value_type[v.capacity_])
{
    std::copy(v.data_, v.data_ + v.size_, data_);
}

// // конструктор перемещения 
// template <typename value_type>
template <typename value_type>
Vector<value_type>::Vector(Vector &&v):size_(v.size_), capacity_(v.capacity_), data_(v.data_) {
  v.size_ = 0;
  v.capacity_ = 0;
  v.data_ = nullptr;
}



template <typename value_type>
//если в ашке можно исп псевдонимы и короче получается  


typename Vector <value_type>:: reference Vector<value_type>::operator[](size_type pos){
return data_[pos];
}

template <typename value_type>
typename Vector<value_type>:: reference Vector<value_type>::at(size_type pos) {
  if(pos >= size()) {
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
template <typename value_type>
typename Vector<value_type>:: const_reference Vector<value_type>::front() const {
  // в ориге не выбрасывает не знаю оставлять ли
  if(size_ == 0) {
    throw std::out_of_range("empty");
  }
return data_[0];
} 

template <typename value_type>
typename Vector<value_type>:: const_reference Vector<value_type>::back() const{
  return data_[size_ - 1];
} 


// data_ указатель на начало массива size_ кол-во эл-ов

template <typename value_type>
typename Vector<value_type>:: iterator Vector <value_type>::begin() {
  return data_;
}

template <typename value_type>
typename Vector<value_type>:: iterator Vector <value_type>:: end() {
  return data_ + size_;
}



template <typename value_type>
bool Vector<value_type>::empty() {
  return size_ == 0;
}

template <typename value_type>
typename Vector<value_type>::size_type Vector<value_type>::size() {
  return size_;
}


// верхний предел на размер вектора 
template <typename value_type>
typename Vector<value_type>::size_type Vector<value_type>::max_size() {
  return std::numeric_limits<size_t>::max()/ sizeof(size_type);

}

template <typename value_type>
typename Vector<value_type>::size_type Vector<value_type>::capacity() {
  return (capacity_ - size_);
}


// template <typename value_type>
// void Vector<value_type>::clear() {
//   delete[] data_;
//   data_ = nullptr;
//   size_ = 0;
// }

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


template <typename value_type>
void Vector<value_type>::shrink_to_fit() {

}

}  // namespace s21

