//
// Created by zwpdbh on 23/11/2017.
//

#ifndef PROBLEM_SOLVING_LINKEDBAG_H
#define PROBLEM_SOLVING_LINKEDBAG_H

#include "../interfaces/BagInterface.h"
#include "Node.h"

template <class ItemType>
class LinkedBag : public BagInterface<ItemType> {
private:
    Node<ItemType>* headPtr;
    int itemCount;

    Node<ItemType>* getPointerTo(const ItemType& target) const;
    void fillVector(std::vector<ItemType>& bagContents, Node<ItemType>* curPtr) const;
public:
    LinkedBag();
    LinkedBag(const LinkedBag<ItemType>& aBag);         // copy constructor
    virtual ~LinkedBag();                               //Destructor should be virtual
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void clear();
    int getFrequencyOf(const ItemType& anEntry) const;
    bool contains(const ItemType& anEntry) const;
    std::vector<ItemType> toVector() const;
    std::vector<ItemType> recursiveToVector() const;
};

/*implementation part*/
template <class ItemType>
LinkedBag<ItemType>::LinkedBag() : headPtr(nullptr), itemCount(0) {}

template <class ItemType>
bool LinkedBag<ItemType>::add(const ItemType &newEntry) {
    /**A common mistake is headPtr has the 'next' part;
     * This misconception is rooted in the belief that the variable headPtr does not exist if it does not point to a node
     * headPtr is only a pointer nothing else!
     * */
    Node<ItemType>* newNodePtr = new Node<ItemType>();
    newNodePtr->setItem(newEntry);
    newNodePtr->setNext(headPtr);   // at this moment, headPtr's address is the same as the firstNode;
    headPtr = newNodePtr;           // at this moment, make headPtr point to the new first Node.

    itemCount++;
    return true;
}


template <class T>
std::vector<T> LinkedBag<T>::toVector() const {
    std::vector<T> v;
    Node<T>* currPtr = headPtr;
    int counter = 0;
    /**A common error in the while statement we used in toVector is to compare curPtr->getNext()
     * instead of curPtr with nullptr.*/
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

/**Copy constructor is needed when the compiler generated shallow copy constructor is not enough.
 * In this case, we need deep copy, so we need to define our own copy constructor.*/
template <class ItemType>
LinkedBag<ItemType>::LinkedBag(const LinkedBag<ItemType>& aBag) {
    headPtr = aBag.headPtr;
    itemCount = aBag.itemCount;

    if (aBag.headPtr != nullptr) {
        // create firstNode and make headPtr points to it.
        Node<ItemType>* firstNode = new Node<ItemType>();
        firstNode->setItem(aBag.headPtr->getItem());
        firstNode->setNext(nullptr);
        headPtr = firstNode;

        // ptr is for aBag
        Node<ItemType>* ptr = aBag.headPtr->getNext();
        // currPtr is for this new created linked list
        Node<ItemType>* currPtr = headPtr;

        while (ptr != nullptr) {
            Node<ItemType>* newNode = new Node<ItemType>();
            newNode->setItem(ptr->getItem());
            currPtr->setNext(newNode);
            newNode->setNext(nullptr);

            currPtr = currPtr->getNext();
            ptr = ptr->getNext();
        }
    }

}


/**method remove the target by using the first node to replace it*/
template <class ItemType>
bool LinkedBag<ItemType>::remove(const ItemType &anEntry) {
    Node<ItemType>* entryNodePtr = getPointerTo(anEntry);
    bool canRemoveItem = (!isEmpty() && entryNodePtr != nullptr);

    if (canRemoveItem) {
        // copy the first node items into this one and delete the first node
        entryNodePtr->setItem(headPtr->getItem());

        // delete first node
        Node<ItemType>* nodeToBeDeletedPtr = headPtr;
        headPtr = headPtr->getNext();

        // return allocated resource to system
        nodeToBeDeletedPtr->setNext(nullptr);
        /**Remember that any time you allocate memory by using new, you must eventually deallocate it by using delete.*/
        delete nodeToBeDeletedPtr;

        /**For a pointer p, delete p deallocates the node to which p points;
         * it does not deal- locate p.
         * The pointer p still exists, but it contains an undefined value.
         * You should not reference p or any other pointer variable that still points to the deallocated node.
         * To help you avoid this kind of error, you can assign nullptr to p after executing delete p.*/
        nodeToBeDeletedPtr = nullptr;

        itemCount--;
    }
    return canRemoveItem;
}

template <class T>
void LinkedBag<T>::clear() {
    Node<T>* nodeToDelete;
    while (headPtr != nullptr) {
        nodeToDelete = headPtr;
        headPtr = headPtr->getNext();

        // return node to system
        nodeToDelete->setNext(nullptr);
        delete nodeToDelete;
    }

    nodeToDelete = nullptr;
    itemCount = 0;
}

template <class T>
int LinkedBag<T>::getFrequencyOf(const T &anEntry) const {
    int frequency = 0;
    int counter = 0;
    Node<T>* currPtr = headPtr;
    while (currPtr != nullptr && counter < itemCount) {
        if (anEntry == currPtr->getItem()) {
            frequency++;
        }

        counter++;
        currPtr = currPtr->getNext();
    }

    return frequency;
}

template <class T>
bool LinkedBag<T>::contains(const T &anEntry) const {
    return getPointerTo(anEntry) != nullptr;
}

template <class T>
LinkedBag<T>::~LinkedBag() {
    clear();
}

template <class ItemType>
Node<ItemType>* LinkedBag<ItemType>::getPointerTo(const ItemType &target) const {
    bool found = false;
    Node<ItemType>* currPtr = headPtr;

    while (!found && currPtr != nullptr) {
        if (target == currPtr->getItem()) {
            found = true;
        } else {
            currPtr = currPtr->getNext();
        }

        return currPtr;
    }
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
