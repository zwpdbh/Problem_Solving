//
// Created by zwpdbh on 2018/8/21.
//

#include "List.hpp"

namespace my {
    List::List() {
        size = 0;
        headPtr = nullptr;
        tailPtr = nullptr;
    }

    void List::add(int element) {
        Node *n = new Node(element);

        if (size == 0) {
            tailPtr = n->next;
            headPtr = n;
        } else if(size > 0) {
            n->next = headPtr;
            headPtr = n;
        }

        size += 1;
    }

    /**When considering cases, use straight forward way of thinking even if it is not very "elegant"*/
    bool List::remove(int target) {
        if (size == 0)
            return false;

        if (size == 1 && headPtr->key != target) {
            return false;
        }

        if (headPtr->key == target) {
            Node *tmp = headPtr;
            headPtr = headPtr->next;
            delete tmp;
            tmp = nullptr;
            size -= 1;
            return true;
        }

        Node *current = headPtr;
        while (current->next != nullptr) {
            if (current->next->key == target) {
                Node *tmp = current->next;
                current->next = current->next->next;
                delete tmp;
                tmp = nullptr;
                size -= 1;
                return true;
            }
            current = current->next;
        }

        return false;
    }

    std::ostream &operator<<(std::ostream &output, const my::List &list) {
        output << "<";
        Node *current = list.headPtr;
        for (int i = 0; i < list.size; ++i) {
            output << current->key;
            if (current->next != nullptr) {
                output << ", ";
            }
            current = current->next;
        }

        output << ">";
        return output;
    }

    List::~List() {
        while(headPtr != nullptr) {
            Node *current = headPtr;
            headPtr = headPtr->next;
            delete current;
        }
        size = 0;
        headPtr = nullptr;
        tailPtr = nullptr;
    }
}