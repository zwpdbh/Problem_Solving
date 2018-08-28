//
// Created by zwpdbh on 2018/8/28.
//

#include "doublelinkedlist.hpp"

struct DoubleLinkedNode {
    int key;
    NodePtr pre;
    NodePtr next;

    explicit DoubleLinkedNode(int key) {
        this->key = key;
        pre = nullptr;
        next = nullptr;
    }
};

DoubleLinkedList::DoubleLinkedList(){
    this->size = 0;
    this->head = nullptr;
}

int DoubleLinkedList::getSize() {
    return this->size;
}

NodePtr DoubleLinkedList::search(int target) {
    if (size == 0) {
        return nullptr;
    } else {
        NodePtr current = head;
        for (int i = 0; i < size; ++i) {
            if (current == nullptr) {
                break;
            }
            if (current->key == target) {
                return current;
            }
        }
    }

    return nullptr;
}

void DoubleLinkedList::insert(int key) {
    if (size == 0) {
        NodePtr newOne = new DoubleLinkedNode(key);
        /**first immediately assign new node to head, otherwise head is nullptr
         * and the following operation will be errors*/
        head = newOne;

        head->next = head;
        head->pre = head;

        size += 1;
    } else if ((search(key)) != nullptr ) {
        return;
    } else {
        NodePtr newOne = new DoubleLinkedNode(key);

        if (size == 1) {
            /**when you assign a pointer variable, you are changing it.
             * Thus you are making it point to something new*/
            head->pre = newOne;
            newOne->next = head;
            head->next = newOne;
            newOne->pre = head;
        } else {
            newOne->next = head;
            newOne->pre = head->pre;

            head->pre->next = newOne;
            head->pre = newOne;

        }
        size += 1;
    }
}

std::ostream& operator<<(std::ostream &output, const DoubleLinkedList &list) {
    output << "[";
    NodePtr current = list.head;
    for (int i = 0; i < list.size; ++i) {
        if (i != list.size -1) {
            output << current->key << ", ";
        } else {
            output << current->key;
        }

        current = current->next;
    }
    output << "]" << std::endl;
    return output;
}