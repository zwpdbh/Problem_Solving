//
// Created by zwpdbh on 2018/8/28.
//

#ifndef PROJECT_DOUBLELINKEDLIST_HPP
#define PROJECT_DOUBLELINKEDLIST_HPP

#include <iostream>

typedef struct DoubleLinkedNode *NodePtr;


/**A double linked circular linked list*/
class DoubleLinkedList {
    friend std::ostream &operator<<(std::ostream &, const DoubleLinkedList &list);

private:
    int size;
    NodePtr head;

public:
    DoubleLinkedList();
    NodePtr search(int target);
    void insert(int key);
    int getSize();
};


#endif //PROJECT_DOUBLELINKEDLIST_HPP
