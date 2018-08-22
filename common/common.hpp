//
// Created by zwpdbh on 2018/8/10.
//

#ifndef PROJECT_COMMON_HPP
#define PROJECT_COMMON_HPP

#include <stdexcept>
#include <string>
#include <iostream>

class TargetNotFoundException : public std::logic_error {
public:
    TargetNotFoundException(const std::string &message = "")
            : logic_error("Target not found: " + std::string(message)) {}
};

template <typename T>
void swap(T &a, T &b) {
    T *tmp = new T();
    *tmp = a;
    a = b;
    b = *tmp;
    delete tmp;
}

template <typename T>
void printArray(T elements[], int n) {
    std::cout << "[";
    for (int i = 0; i < n; i++) {
        std::cout << elements[i];
        if (i != n-1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
}
#endif //PROJECT_COMMON_HPP
