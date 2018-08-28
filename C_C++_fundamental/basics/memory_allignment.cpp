//
// Created by zwpdbh on 2018/8/27.
//

#include <iostream>

using namespace std;

/**It should be 35*/
struct block {
    char a;         // 1
    short b;        // 2
    int c;          // 4
    long d;         // 8
    float e;        // 4
    double f;       // 8
    void *g;        // 8
};

struct mixData {
    char data1;
    // padding 1
    short data2;
    int data3;
    char data4;
    // padding 3

    // total = 1 + 1 + 2+ 4 + 1 + 3 = 12
};


struct descendingData {
    char a;
    // padding 1
    short b;
    int c;
    char d;
    // padding 3
    // total = 1 + 1 + 2 + 4 + 1 + 3 = 12
};

/**Rearrange the order, could save memory space.*/
struct ascendingData {
    char a;
    char b;
    short c;
    int d;
    // total = 1 + 1 + 2 + 4 = 8
};

/**last member is padded with the number of bytes required so that the total size of
 * the structure should be a multiple of the largest alignment of any structure member*/
int main() {
    cout << sizeof(struct block) << endl;

    cout << sizeof(struct mixData) << endl;

    cout << sizeof(struct descendingData) << endl;

    cout << sizeof(struct ascendingData) << endl;
    return 0;
}