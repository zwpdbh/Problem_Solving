//
// Created by zwpdbh on 2018/8/20.
//

#ifndef PROBLEM_SOLVING_ARRAY_HPP
#define PROBLEM_SOLVING_ARRAY_HPP

#include <iostream>

class Array {
    friend std::ostream &operator<<(std::ostream &, const Array &);
    friend std::istream &operator>>(std::istream &, Array &);

private:
    size_t  size;
    int *ptr;

public:
    explicit Array(int = 10); // default constructor
    Array(const Array &); // copy constructor
    ~Array(); // destructor
    size_t getSize() const;

    const Array &operator=(const Array &); // assignment operator
    bool operator==(const Array &) const;
    bool operator!=(const Array &right) const {
        return !(*this == right);  // *this is this object's reference
    }

    /**subscript operator for non-const object returns modifiable lvalue
     * someArray[5] = 1000*/
    int &operator[](int);

    /**subscript operator for const object returns rvalue
     * such as << someArray[5]*/
    int operator[](int) const;
};


#endif //PROBLEM_SOLVING_ARRAY_HPP
