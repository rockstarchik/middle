#include "middle.h"
using namespace std;

int itc_min_num(long long number) {
    int mi;
    mi = 10;
    if (number < 0) {
        number = number * (-1);
    }
    if (number == 0) {
        return 0;
    }
    while (number > 0) {
        if (number % 10 < mi) {
            mi = number % 10;
        }
        number = number / 10;
    }
    return mi;
}

int itc_rev_num(long long number) {
    int rev;
    rev = 0;
    if (number < 0) {
        number = number * (-1);
    }
    while (number > 0) {
        rev = rev * 10 + number % 10;
        number = number / 10;
    }
    return rev;
}

int itc_null_count(long long number) {
    int null;
    null = 0;
    if (number == 0) {
        return 1;
    }
    if (number < 0) {
        number = number * (-1);
    }
    while (number > 0) {
        if (number % 10 == 0)
            null = null + 1;
        number = number / 10;
    }
    return null;
}

bool itc_mirror_num(long long number) {
    int mir, nal;
    nal = number;
    mir = 0;
    while (number > 0) {
        mir = number % 10 + mir * 10;
        number = number / 10;
    }
    if (mir == nal)
        return 1;
    return 0;
}

int itc_mirror_cout(long long number) {
    int a;
    a = 0;
    for (long long i = 1, i <= number, ++i) {
        if (i == itc_mirror_num(i)) {
            a++
        }
    }
    return a;
}


