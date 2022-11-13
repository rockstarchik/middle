#include "middle2.h"
using namespace std;

int itc_second_max_num(long long number) {
    int m, n, p;
    m = 0;
    p = 0;
    if (number < 10)
        return -1;
    else
    while (number > 0) {
        n = number % 10;
        if (n > m)
            m = n;
        number = number / 10;
    }
    while (number > 0) {
        n = number % 10;
        if (n > p && p < m)
            p = n;
        number = number / 10;
    }
    return p;
}

long long itc_bin_num(long long number) {
    int bin, rev;
    bin = 0;
    rev = 0;
    while (number > 1) {
        bin = bin*10 + number % 2;
        number = number / 2;
    }
    while (bin > 0) {
        rev = rev * 10 + bin % 10;
        bin = bin / 10;
    }
    return rev;
}

long long itc_oct_num(long long number) {
    int oct, rev;
    oct = 0;
    rev = 0;
    while (number > 7) {
        oct = oct * 10 + number % 8;
        number = number / 8;
    }
    while (oct > 0) {
        rev = rev * 10 + oct % 10;
        oct = oct / 10;
    }
    return rev;
}


