#include "middle.h"
using namespace std;
int itc_second_max_num(long long number) {
    int max,second_max;
    max = itc_max_num(number);
    second_max = 0;
    if (number < 0)
        number = number * (-1);
    if (number < 10)
        return -1;
    while (number > 0) {
        if (second_max < number % 10 && number % 10 != max)
            second_max = number % 10;
        if (number % 10 == max)
            max = 10;
        number = number / 10;
    }
    return second_max;
}
long long itc_bin_num(long long number) {
    int a, b;
    a = 0;
    b = 1;
    while (number > 0) {
        a = a + b * (number % 2);
        b = b * 10;
        number = number / 2;
    }
    return a;
}

long long itc_oct_num(long long number) {
    int a, b;
    a = 0;
    b = 1;
    while (number > 0) {
        a = a + b * (number % 8);
        b = b * 10;
        number = number / 8;
    }
    return a;

}
int itc_rev_bin_num(long long number) {
    long long a;
    a = 0;
    int b;
    b = 1;
    while (number != 0) {
        a = a + (number % 10) * b;
        number = number / 10;
        b = b * 2;
    }
    return a;
}
int itc_rev_oct_num(long long number) {
    long long a;
    a = 0;
    int b;
    b = 1;
    while (number != 0) {
        a = a + (number % 10) * b;
        number = number / 10;
        b = b * 8;
    }
    return a;
}