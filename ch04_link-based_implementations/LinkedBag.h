//
// Created by zwpdbh on 23/11/2017.
//

#ifndef PROBLEM_SOLVING_LINKEDBAG_H
#define PROBLEM_SOLVING_LINKEDBAG_H

#include "interfaces/BagInterface.h"
#include "Node.h"

template <class T>
class LinkedBag : public BagInterface<T> {
private:
    Node<T>* headPtr;
    int itemCount;

    Node<T>* getPointerTo(const T& target) const;
    void fillVector(std::vector<T>& bagContents, Node<T>* curPtr) const;
public:
    LinkedBag();
    LinkedBag(const LinkedBag<T>& aBag); // copy constructor
    virtual ~LinkedBag(); //Destructor should be virtual
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const T& newEntry);
    bool remove(const T& anEntry);
    void clear();
    int getFrequencyOf(const T& anEntry) const;
    bool contains(const T& anEntry) const;
    std::vector<T> toVector() const;
    std::vector<T> recursiveToVector() const;
};

/*implementation part*/
template <class T>
LinkedBag<T>::LinkedBag() : headPtr(nullptr), itemCount(0) {}

template <class T>
bool LinkedBag<T>::add(const T &newEntry) {
//    my solution
//    if (headPtr->getNext() == nullptr) {
//        headPtr->setNext(new Node(newEntry));
//    } else {
//        Node<T>* newNode = new Node(newEntry);
//        newNode->setNext(headPtr->getNext());
//        headPtr->setNext(newNode);
//    }

    // better solution
    Node<T>* newNodePtr = new Node<T>();
    newNodePtr->setItem(newEntry);
    newNodePtr->setNext(headPtr);
    headPtr = newNodePtr;

    itemCount++;
    return true;
}


template <class T>
std::vector<T> LinkedBag<T>::toVector() const {
    std::vector<T> v;
    Node<T>* currPtr = headPtr;
    int counter = 0;
    while (currPtr != nullptr && counter <= itemCount) {
        v.push_back(currPtr->getItem());
        currPtr = currPtr->getNext();
        counter++;
    }

    return v;
}

template <class T>
bool LinkedBag<T>::isEmpty() const {
    return this->itemCount == 0;
}

template <class T>
int LinkedBag<T>::getCurrentSize() const {
    return this->itemCount;
}

template <class T>
LinkedBag<T>::LinkedBag(const LinkedBag<T>& aBag) {
    Node<T>* currPtr = aBag.headPtr;
    itemCount = 0;
    headPtr = nullptr;

    while (currPtr != nullptr) {
        Node<T>* newNodePtr = new Node<T>(currPtr->getItem());
        newNodePtr->setNext(headPtr);
        headPtr = newNodePtr;
        itemCount++;
        currPtr = currPtr->getNext();
    }

//    itemCount = aBag.itemCount;
//    Node<T>* origChainPtr = aBag.headPtr;
//
//    if (origChainPtr == nullptr) {
//        headPtr = nullptr;
//    } else {
//        headPtr = new Node<T>();
//        headPtr->setItem(origChainPtr->getItem());
//
//        Node<T>* newChainPtr = headPtr->getNext();
//        while (origChainPtr != nullptr) {
//            T items = origChainPtr->getItem();
//            Node<T>* newNodePtr = new Node<T>(items);
//            newChainPtr->setNext(newNodePtr);
//            newChainPtr = newChainPtr->getNext();
//
//            origChainPtr = origChainPtr->getNext();
//        }
//        newChainPtr->setNext(nullptr);
//    }
}

template <class T>
bool LinkedBag<T>::remove(const T &anEntry) {
    Node<T>* entryNodePtr = getPointerTo(anEntry);
    bool canRemoveItem = (!isEmpty() && entryNodePtr != nullptr);
    if (canRemoveItem) {
        // copy the first node items into this one and delete the first node
        entryNodePtr->setItem(headPtr->getItem());

        Node<T>* nodeToBeDeletedPtr = headPtr;
        headPtr = headPtr->getNext();
        itemCount--;

        nodeToBeDeletedPtr->setNext(nullptr);
        delete nodeToBeDeletedPtr;
        nodeToBeDeletedPtr = nullptr;
    }
    return canRemoveItem;
}

template <class T>
void LinkedBag<T>::clear() {

    while (headPtr != nullptr ) {
        Node<T>* eachNodePtr = headPtr;
        headPtr = headPtr->getNext();

        eachNodePtr->setNext(nullptr);
        delete eachNodePtr;
        eachNodePtr = nullptr;
    }
    itemCount = 0;
}

template <class T>
int LinkedBag<T>::getFrequencyOf(const T &anEntry) const {
    int counter = 0;
    Node<T>* currPtr = headPtr;

    while (currPtr != nullptr) {
        if (currPtr->getItem() == anEntry) {
            counter++;
        }
        currPtr = currPtr->getNext();
    }
    return counter;
}

template <class T>
bool LinkedBag<T>::contains(const T &anEntry) const {
    return getPointerTo(anEntry) != nullptr;
}

template <class T>
LinkedBag<T>::~LinkedBag() {
    clear();
}

template <class T>
Node<T>* LinkedBag<T>::getPointerTo(const T &target) const {
    Node<T>* currPtr = headPtr;

    while (currPtr != nullptr) {
        if (currPtr->getItem() == target) {
            break;
        }
        currPtr = currPtr->getNext();
    }
    return currPtr;
}

template <class T>
std::vector<T> LinkedBag<T>::recursiveToVector() const {
    std::vector<T> bagContents;
    // fill the bag recursively

    return bagContents;
}

template <class T>
void LinkedBag<T>::fillVector(std::vector<T> &bagContents, Node<T> *curPtr) const {
    if (curPtr != nullptr) {
        bagContents.push_back(curPtr->getItem());
        fillVector(bagContents, curPtr->getNext());
    }
}
#endif //PROBLEM_SOLVING_LINKEDBAG_H
