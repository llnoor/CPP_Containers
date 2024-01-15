#ifndef CPP2_S21_CONTAINERS_VECTOR_S21_VECTOR_H
#define CPP2_S21_CONTAINERS_VECTOR_S21_VECTOR_H
#include <initializer_list>
#include <iterator>
#include <limits>
#include <stdexcept>


namespace s21 {
    template <typename T>
    class Vector {
        public:
        using value_type = T;
        using reference = value_type&;
        using const_reference = const T&;
        using iterator = T*;
        using const_iterator = const T*;
        using size_type = size_t ;


        Vector():data_(nullptr), size_(0), capacity_(0){};
        // explicit Vector(size_type n);
        //промежуточный вариант
        Vector(size_type n);
        // explicit Vector(std::initializer_list<value_type> const &items);
        Vector(const Vector &v);
        Vector(Vector &&v);
        ~Vector() {
            // clear();
              delete[] data_;
        }


          Vector(std::initializer_list<T> const& items) {
        size_ = items.size();
        capacity_ = items.size();
        data_ = new value_type[capacity_];
        std::copy(items.begin(), items.end(), data_);
    }

        // operator=(Vector &&v);


          Vector& operator=(const Vector& other) {
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

    // value_type& operator[](size_type index) {
    //     return data_[index];
    // }

    //        value_type& operator[](size_type index) {
    //     return data_[index];
    // }
    // template <typename value_type>
    // typename Vector 

// этот оператор возвращает ссылку на элемент контейнера
reference operator[](size_type pos);

// operator[] доступа к элементам контейнера по индексу(для получения доступа по позиции)
//size_type тип для предоставления размера контейнера

// reference указывает на то что оператор возврщаает ссылку на эл-т

// возвращает ссылку на элемент контейнера по указанному индексу

reference at(size_type pos);


const_reference front() const;
const_reference back() const;


// доступ к внутреннему массиву 
// возвращает указатель на начало массива 
T* data() {
    return data_;
}; 
// Vector<int> то T* -> int* указатель на массив эл-ов типа int внутри вектора


// Vector iterators

iterator begin();
iterator end();


        bool empty();
        size_type size();
        size_type max_size();


        void reserve(size_type size);

        size_type capacity();



        // void clear();

        void shrink_to_fit();
        void push_back(const_reference value);

        private:
        value_type *data_;
        size_type size_;
        size_type capacity_;
       


    } ;
}



#include "s21_Vector.tpp"
#endif // CPP2_S21_CONTAINERS_VECTOR_S21_VECTOR_H





