//
// Created by zwpdbh on 2018/8/10.
//

#ifndef PROJECT_COMMON_HPP
#define PROJECT_COMMON_HPP

#include <stdexcept>
#include <string>
#include <iostream>
#include <stdio.h>

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

/**simple function convert int into its binary using bit shift:
 * 1u is unsigned 1, for portable reason
 * left shift, or right shift will fill the blank with 0 for unsigned integer
 * when it is signed type, it is often compiler dependent*/
void showbits(unsigned int x) {
    for (int i = (sizeof(int) * 8) - 1; i >= 0; i--) {
        (x & (1u << i)) ? putchar('1') : putchar('0');
    }
    printf("\n");
}
#endif //PROJECT_COMMON_HPP
