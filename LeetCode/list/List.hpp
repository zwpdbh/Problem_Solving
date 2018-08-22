//
// Created by zwpdbh on 2018/8/21.
//

#ifndef PROBLEM_SOLVING_LIST_HPP
#define PROBLEM_SOLVING_LIST_HPP

#include <iostream>

namespace my {
    struct Node {
        int key;
        struct Node *next;

        /**Constructor*/
        explicit Node(int element) : key(element), next(nullptr) {}
    };

    class List {
        friend std::ostream &operator<<(std::ostream &, const List &);
    private:
        int size;
        Node *headPtr;
        Node *tailPtr;

    public:
        List();
        void add(int);
        ~List();
        List(const List &) = delete; // copy constructor
        List &operator=(const List &) = delete;

        int getSize();
        bool remove(int);
    };

    inline int List::getSize() {
        return size;
    }
}


#endif //PROBLEM_SOLVING_LIST_HPP
