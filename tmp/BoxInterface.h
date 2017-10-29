//
// Created by zwpdbh on 2017/10/29.
//

#ifndef PROBLEM_SOLVING_BOXINTERFACE_H
#define PROBLEM_SOLVING_BOXINTERFACE_H

template <class T>
class BoxInterface {
public:
    virtual void setItem(const T& theItem) = 0;
    virtual T getItem() const = 0;
};

#endif //PROBLEM_SOLVING_BOXINTERFACE_H
