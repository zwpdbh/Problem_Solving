//
// Created by zwpdbh on 2018/8/19.
//

#ifndef PROBLEM_SOLVING_DATE_HPP
#define PROBLEM_SOLVING_DATE_HPP

#include <array>
#include <iostream>

class Date {
    friend std::ostream &operator<<(std::ostream &, const Date &);

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
    static const std::array<unsigned int, 13> days;
    void helpIncrement();

public:
    Date(int m = 1, int d= 1, int y = 1900);
    void setDate(int, int, int);
    Date &operator++(); // prefix increment operator
    Date operator++(int); // postfix increment operator
    Date &operator+=(unsigned int); // add days, modify object
    static bool leapYear(int); // is date in a leap year?
    bool endOfMonth(int) const; // is date at the end of month?
};


#endif //PROBLEM_SOLVING_DATE_HPP
