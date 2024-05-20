//
//  Static_array_deque.cpp
//  Static_array_deque
//
//  Created by Роман Махаев on 29.04.2024.
//

#include "Static_array_deque.hpp"

namespace RMaxaev {

template<typename T, std::size_t n>
StaticArrayDeque<T, n>::~StaticArrayDeque() noexcept {}

template<typename T, std::size_t n>
bool StaticArrayDeque<T, n>::empty() const noexcept {
    return size == 0;
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::pop_back() {
    if (size != 0) {
        --size;
    }
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::pop_front() {
    if (size != 0) {
        std::copy(arr + 1, arr + size , arr);
        --size;
    }
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::push_back(const T& value) {
    if (size < n) {
        arr[size++] = value;
    }
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::push_front(const T& value) {
    if (size < n) {
        std::copy_backward(arr, arr + size + 1, arr + size + 2);
        arr[0] = value;
        ++size;
    }
}

template<typename T, std::size_t n>
std::size_t StaticArrayDeque<T, n>::get_size() const noexcept {
    return size ;
}

template<typename T, std::size_t n>
T StaticArrayDeque<T, n>::back() const noexcept {
    return arr[size-1];
}

template<typename T, std::size_t n>
T StaticArrayDeque<T, n>::front() const noexcept {
    return arr[0];
}

}
