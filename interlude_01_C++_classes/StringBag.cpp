//
// Created by zwpdbh on 07/11/2017.
//

#include "StringBag.h"
#include <cstring>

using namespace std;

/**initialize static class number*/
int StringBag::num_strings = 0;

StringBag::StringBag() {
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;

    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBag::StringBag(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

/**copy constructor*/
StringBag::StringBag(const StringBag &s) {
    num_strings++;

    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);

//    len = std::strlen(s.str + 1);
//    str = new char[len + 1];
//    std::strcpy(str, s.str);
}

/**assignment operator*/
StringBag &StringBag::operator=(const StringBag &st) {
    /*check if it is assigning to itself*/
    if (this == &st) {
        return *this;
    }
    /*free old string*/
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

StringBag::~StringBag() {
    cout << "\"" << str << "\" object deleted, ";
    --num_strings;
    cout << num_strings << " left\n";

    /**Whenever you use new in a constructor to allocate memory, you should use delete in the corresponding destructor
     * to free that memory. If you use new [] (with brackets), then you should use delete [] (with brackets).*/
    delete[] str;
}


std::ostream &operator<<(std::ostream &os, const StringBag &st) {
    os << st.str;
    return os;
}

int StringBag::getLen() const {
    return len;
}
