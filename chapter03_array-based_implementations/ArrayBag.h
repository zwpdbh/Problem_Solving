//
// Created by zwpdbh on 2017/10/30.
//

#ifndef PROBLEM_SOLVING_ARRAYBAG_H
#define PROBLEM_SOLVING_ARRAYBAG_H

#include <vector>

template <class T>
class BagInterface {
public:
    /**
     * Get the current number of entries in this bag.
     * @return The integer number of entries currently in the bag
     */
    virtual  int getCurrentSize() const = 0;

    /**
     * See whether this bag is empty.
     * @return True if the bag is empy, or false if not.
     */
    virtual bool isEmpty() const = 0;

    /**
     * Add a new entry to this bag.
     * @param newEntry The object to be added as a new entry.
     * @return True if addition was successful, or false if not.
     */
    virtual bool add(const T& newEntry) = 0;

    /**
     * Remove one occurrence of a given entry from this bag
     * @param anEntry The entry to be removed.
     * @return True if removal was successful, or false if not
     */
    virtual bool remove(const T& anEntry) = 0;

    /** Removes all entries from this bag.
     @post Bag contains no items, and the cout of item is 0.*/
    virtual  void clearAll() = 0;

    /** Counts the number of times a given entry appears in bag.
     @param anEntry The entry to be counted.
     @return The number of items anEntry appears in the bag. */
    virtual  int getFrequencyOf(const T& anEntry) const = 0;

    /** Tests whether this bag contains a given entry.
    @param anEntry The entry to locate.
    @return True if bag contains anEntry, or false otherwise. */
    virtual bool contains(const T& anEntry) const = 0;

    /** Empties and then fills a given vector with all entries that are in this bag.
    @return A vector containing all the entries in the bag. */
    virtual std::vector<T> toVector() const = 0;
};


template <class T>
class ArrayBag : public BagInterface<T> {
private:
    static const int DEFAULT_CAPACITY = 6;
    T items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;
    int getIndexOf(const T& target) const;

public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const T& newEntry);
    bool remove(const T& anEntry);
    void clearAll();
    bool contains(const T& anEntry) const;
    int getFrequencyOf(const T& anEntry) const;
    std::vector<T> toVector() const;
};


#endif //PROBLEM_SOLVING_ARRAYBAG_H
