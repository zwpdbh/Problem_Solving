//
// Created by zwpdbh on 2018/8/20.
//

#include "array.hpp"
#include <iomanip>
#include <stdexcept>

using namespace std;

/**Default constructor for class Array (default size 10*/
Array::Array(int array_size) : size(array_size), ptr(new int[size]) {
    if (size < 0) {
        throw invalid_argument("Array size must be greater than 0");
    }
    for (size_t i = 0; i < size; ++i) {
        ptr[i] = 0;
    }
}

/**Copy constructor*/
Array::Array(const Array &anotherArray) : size(anotherArray.size), ptr(new int[size]) {
    for (size_t i = 0; i < size; i++) {
        ptr[i] = anotherArray.ptr[i];  // copy into object
    }
}

/**Destructor*/
Array::~Array() {
    delete[] ptr;
    /**After calling delete, always set pointer to nullptr.
     * If not, your code could inadvertently access the reallocated memory, causing subtle,
     * non-repeatable logic errors.*/
    ptr = nullptr;
}

size_t Array::getSize() const {
    return size;
}

/**overloaded assignment operator
 * use const return could avoids: (a1 = a2) = a3*
 * expression a1=a2, calls compiler invoke a1.operator=(a2)*/
const Array &Array::operator=(const Array &right) {
    if (&right != this) { // avoid self-assignment
        if (size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }

        for (size_t i = 0; i < size; ++i) {
            ptr[i] = right.ptr[i]; // copy array into object
        }
    }

    return *this;
}

/**overloading == to determine if two Arrays are equal
 * a1 == a2, compile will invoke a1.operator==(a2)*/
bool Array::operator==(const Array &right) const {
    if (size != right.size) {
        return false;
    }

    for (size_t i = 0; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }

    return true;
}

/**Overload subscript operator for non-const Arrays,
 * reference return creates a modifiable lvalue
 * a1[5], compiler invoke a1.operator[](5)*/
int &Array::operator[](int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Subscript out of range");
    }
    return ptr[index];
}

/**Overload subscript operator for const Array, the compiler creates a call to the const version of operator[] when
 * the subscript operation is used on a const Array object.
 * Remember, a program can invoke only the const member functions of a const object.
 * const reference return creates an rvalue
 * const reference has another name: value*/
int Array::operator[](int index) const {
    if (index < 0 || index >= size)
        throw out_of_range("Subscript out of range");

    return ptr[index];
}

/**Overload output operator*/
std::ostream &operator<<(std::ostream &output, const Array &a) {
    for (size_t i = 0; i < a.size; ++i) {
        output << setw(12) << a.ptr[i];
    }

    return output;
}

/**Overload input operator*/
std::istream &operator>>(std::istream &input, Array &a) {
    for (size_t i = 0; i < a.size; ++i) {
        input >> a.ptr[i];
    }
    return input;
}