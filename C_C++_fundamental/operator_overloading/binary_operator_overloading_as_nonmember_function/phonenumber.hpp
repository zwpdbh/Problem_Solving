//
// Created by zwpdbh on 2018/8/19.
//

#ifndef PROBLEM_SOLVING_PHONENUMBER_HPP
#define PROBLEM_SOLVING_PHONENUMBER_HPP

#include <iostream>
#include <string>

class PhoneNumber {
private:
    std::string areaCode; // 3-digit area code
    std::string exchange; // 3-digit exchange
    std::string line; // 4-digit line
public:
    /**They are non-member functions because the object of class PhoneNumber must be the operator's right operand*/
    friend std::ostream &operator<<(std::ostream &, const PhoneNumber &);
    friend std::istream &operator>>(std::istream &, PhoneNumber &);
};


#endif //PROBLEM_SOLVING_PHONENUMBER_HPP
