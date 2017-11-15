//
// Created by zwpdbh on 07/11/2017.
//

#ifndef PROBLEM_SOLVING_STRINGBAG_H
#define PROBLEM_SOLVING_STRINGBAG_H

#include <iostream>

class StringBag {
private:
    char* str;
    int len;
    static int num_strings;

public:
    explicit StringBag(const char* s);
    StringBag();
    ~StringBag();

    /**explicit copy constructor*/
    StringBag(const StringBag& s);

    /**explicit assignment operator*/
    StringBag&operator=(const StringBag& st);

    /**friend function*/
    friend  std::ostream& operator<<(std::ostream& os, const StringBag& st);


    int getLen() const;
};


#endif //PROBLEM_SOLVING_STRINGBAG_H
