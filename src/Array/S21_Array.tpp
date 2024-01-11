namespace s21 {



  template <typename T, size_t N>
Array<T, N>& Array<T, N>::operator=(Array&& a) {
    for (size_type i = 0; i < N; ++i) {
        data_[i] = std::move(a.data_[i]);
    }
    return *this;
}

template <typename T, size_t S>
typename Array<T, S>::reference Array<T, S>::at(size_type pos) {
    if (pos >= S) throw std::out_of_range("Index out of range");
    return data_[pos];
}

template <typename T, size_t S>
typename Array<T, S>::reference Array<T, S>::operator[](size_type pos) {
    return data_[pos];
}

template <typename T, size_t S>
typename Array<T, S>::const_reference Array<T, S>::front() const {
    return data_[0];
}

template <typename T, size_t S>
typename Array<T, S>::const_reference Array<T, S>::back() const {
    return data_[size_ - 1];
}

template <typename T, size_t S>
typename Array<T, S>::iterator Array<T, S>::data() {
    return data_;
}

template <typename T, size_t S>
typename Array<T, S>::iterator Array<T, S>::begin() {
    return data_;
}

template <typename T, size_t S>
typename Array<T, S>::iterator Array<T, S>::end() {
    return data_ + S;
}

template <typename T, size_t S>
  bool Array<T, S>::empty() {
    return size_ == 0;
  }


template <typename T, size_t S>
typename Array<T, S>::size_type Array<T, S>::size() const {
    return S;
}


template <typename T, size_t S>
typename Array<T,S>::size_type Array<T, S>::max_size() const {
    return S;
}



template <typename T, size_t S>
void Array<T, S>::swap(Array& other) {
    for (size_t i = 0; i < S; i++) {
        std::swap(data_[i], other.data_[i]);
    }
}


template <typename T, size_t S>
void Array<T, S>::fill(const_reference value) {
  std::fill(size_, size_ + S, value);
}

}

