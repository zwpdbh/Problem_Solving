//
// Created by zwpdbh on 14/11/2017.
//

#ifndef PROBLEM_SOLVING_DMA_H
#define PROBLEM_SOLVING_DMA_H


#include <iostream>

// Base Class Using DMA
class baseDMA
{
private:
    char *label;
    int rating;

public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &rs);
    friend  std::ostream &operator<<(std::ostream &os, const baseDMA &rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// using implicit assignment operator
class lackDMA : public baseDMA
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lackDMA(const char *c = "blank", const char *l = "null", int r = 0);
    lackDMA(const char *c, const baseDMA &rs);
    friend  std::ostream &operator<<(std::ostream &os, const lackDMA &rs);
};

// derived class with DMA
class hasDMA : public baseDMA
{
private:
    char *style;
public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);
    hasDMA(const char *s, const baseDMA &rs);
    hasDMA(const hasDMA &rs);
    ~hasDMA();
    hasDMA &operator=(const hasDMA &rs);
    friend std::ostream &operator<<(std::ostream &os, const hasDMA &rs);
};

#endif //PROBLEM_SOLVING_DMA_H
