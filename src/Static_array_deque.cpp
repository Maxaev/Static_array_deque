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
    return head_index == -1;
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::pop_back() {
    if (head_index != -1) {
        --head_index;
    }
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::pop_front() {
    if (head_index != -1) {
        std::copy(arr + 1, arr + head_index + 1, arr);
        --head_index;
    }
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::push_back(const T& value) {
    if (head_index < n - 1) {
        arr[++head_index] = value;
    }
}

template<typename T, std::size_t n>
void StaticArrayDeque<T, n>::push_front(const T& value) {
    if (head_index < n - 1) {
        std::copy_backward(arr, arr + head_index + 1, arr + head_index + 2);
        arr[0] = value;
        ++head_index;
    }
}

template<typename T, std::size_t n>
std::size_t StaticArrayDeque<T, n>::size() const noexcept {
    return head_index + 1;
}

template<typename T, std::size_t n>
T StaticArrayDeque<T, n>::back() const noexcept {
    return arr[head_index];
}

template<typename T, std::size_t n>
T StaticArrayDeque<T, n>::front() const noexcept {
    return arr[0];
}

}
