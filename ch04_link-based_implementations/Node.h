//
// Created by zwpdbh on 23/11/2017.
//

#ifndef PROBLEM_SOLVING_NODE_H
#define PROBLEM_SOLVING_NODE_H

template <class T>
class Node {
private:
    T item;
    Node<T>* next;

public:
    Node();
    explicit Node(const T& anItem);
    Node(const T& anItem, Node<T>* nextNodePtr);
    void setItem(const T& anItem);
    void setNext(Node<T>* nextNodePtr);
    T getItem() const;
    Node<T>* getNext() const;
};


template <class T>
Node<T>::Node() : next(nullptr) {

} // end default constructor

template <class T>
Node<T>::Node(const T &anItem) : item(anItem), next(nullptr) {

} // end constructor

template <class T>
Node<T>::Node(const T &anItem, Node<T> *nextNodePtr)
        : item(anItem), next(nextNodePtr) {

}

template <class T>
void Node<T>::setItem(const T &anItem) {
    this->item = anItem;
}

template <class T>
void Node<T>::setNext(Node<T> *nextNodePtr) {
    this->next = nextNodePtr;
}

template <class T>
T Node<T>::getItem() const {
    return this->item;
}

template <class T>
Node<T>* Node<T>::getNext() const {
    return this->next;
}
#endif //PROBLEM_SOLVING_NODE_H
