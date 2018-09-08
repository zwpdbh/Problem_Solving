//
// Created by zwpdbh on 2018/9/8.
//

#include <iostream>
#include <climits>

using namespace std;

template<typename T>
T swap_endian(T u) {
    static_assert(CHAR_BIT == 8, "CHAR_BIT != 8");

    union {
        T u;
        unsigned char u8[sizeof(T)];
    } source, dest;

    source.u = u;

    for (size_t k = 0; k < sizeof(T); k++)
        dest.u8[k] = source.u8[sizeof(T) - k - 1];

    return dest.u;
}

int main() {
    uint32_t x = 0x12345678;

    printf("origin is: %x\n", x);
    printf("converted is %x\n", swap_endian<uint32_t>(x));


    /**manual convert method 1*/
    x = 0x12345678;
    uint32_t res = 0;
    uint32_t b0, b1, b2, b3;
    b0 = (x & 0x000000ff) << 24;        // least significant to most significant
    b1 = (x & 0x0000ff00) << 8;         // 2nd least sig. to 2nd most sig.
    b2 = (x & 0x00ff0000) >> 8;         // 2nd most sig. to 2nd least sig.
    b3 = (x & 0xff000000) >> 24;        // most sig. to least sig.
    res = b0 | b1 | b2 | b3;
    printf("manually converting result is: %x\n", res);

    /**manual convert method 2*/
    x = 0x12345678;
    uint8_t b[4];
    b[0] = (uint8_t) (x >> 0);  // 78
    b[1] = (uint8_t) (x >> 8);  // 56
    b[2] = (uint8_t) (x >> 16); // 34
    b[3] = (uint8_t) (x >> 24); // 12
    printf("b[0] =  %x\n", b[0]);
    printf("b[1] =  %x\n", b[1]);
    printf("b[2] =  %x\n", b[2]);
    printf("b[3] =  %x\n", b[3]);
    res = (b[0] << 24 | b[1] << 16 | b[2] << 8 | b[3] << 0);
    printf("converted one is: %x\n", res);
}