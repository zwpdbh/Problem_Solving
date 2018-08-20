//
// Created by zwpdbh on 2018/8/19.
//

#include "date.hpp"
#include <string>

using namespace std;

// initialize static member; one classwide copy
const array<unsigned int, 13> Date::days =
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Date constructor
Date::Date(int month, int day, int year) {
    setDate(month, day, year);
}

// set month, day and year
void Date::setDate(int mm, int dd, int yy) {
    if (mm >= 1 && mm <= 12) {
        month = mm;
    } else {
        throw invalid_argument("Month must be 1-12");
    }

    if (yy >= 1900 && yy < 2100) {
        year = yy;
    } else {
        throw invalid_argument("Year must be >= 1900 and <= 2100");
    }

    // test for a leap year
    if ((month == 2 && leapYear(year) && dd >= 1 && dd <= 29) || (dd >= 1 && dd <= days[month])) {
        day = dd;
    } else {
        throw invalid_argument("Day is out of range for current month and year");
    }
}

/**overload prefix increment operator
 * It returns a reference to the current Date object.*/
Date &Date::operator++() {
    helpIncrement();

    // *this, is returned as a Date &. This enables a pre-incremented Date object to be used as an lvalue.
    return *this; // reference return to create an lvalue;
}
/**overload postfix increment operator; note that the dummy integer parameter does not have a parameter name
 * This function cannot return a reference to the local Date object temp, because a local variable is destroyed when
 * the function in which it is declared exits. Thus, decaring the return type to this function as Date & would
 * return a reference to an object that no longer exists.*/
Date Date::operator++(int) {
    Date temp = *this; // hold current state of object
    helpIncrement();

    // return unincremented, save, temporary object
    return temp; // value return; not a reference return
}

/**add specified number of days to date*/
Date& Date::operator+=(unsigned int additionalDays) {
    for (int i = 0; i < additionalDays; ++i) {
        helpIncrement();
    }
    return *this; // enable cascading
}

/**overloaded ouput operator*/
ostream &operator<<(ostream &output, const Date &d) {
    static string monthName[13] = {"", "January", "February","March", "April", "May", "June", "July",
                                   "August","September", "October", "November", "December"};
    output << monthName[d.month] << " " << d.day << ", " << d.year;
    return output;
}

/**return true if it is a leap year; otherwise, return false*/
bool Date::leapYear(int testYear) {
    if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0)) {
        return true;
    } else {
        return false;
    }
}

/**determine whether the day is the last day of the month*/
bool Date::endOfMonth(int testDay) const {
    if (month == 2 && leapYear(year))
        return testDay == 29;
    else
        return testDay == days[month];
}

/**Function to help increment the date*/
void Date::helpIncrement() {
    if (!endOfMonth(day))
        ++day;
    else
        if (month < 12) { // days is end of month and month < 12
            ++month;
            day = 1; // first day of new month
        } else {    // last day of year
            ++year;
            month = 1;
            day = 1;
        }
}