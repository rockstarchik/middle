#include "middle.h"
using namespace std;

void itc_num_print(int number) {
    cout << number;
}

int itc_len_num(long long number)
{
    int col;
    col = 0;
    if (number < 0) {
        number = number * (-1);
    }
    if (number == 0) {
        return 1;
    }
    while (number > 0) {
        col = col + 1;
        number = number / 10;
    }
    return col;
}

int itc_sum_num(long long number) {
    int sum;
    sum = 0;
    if (number < 0) {
        number = number * (-1);
    }
    while (number > 0) {
        sum = number % 10 + sum;
        number = number / 10;
    }
    return sum;
}

long long itc_multi_num(long long number) {
    int pro;
    pro = 1;
    if (number < 0) {
        number = number * (-1);
    }
    while (number > 0) {
        pro = pro * number % 10;
        number = number / 10;
    }
    return pro;
}

int itc_max_num(long long number) {
    int m, n;
    m = 0;
    if (number < 0) {
        number = number * (-1);
    }
    while (number > 0) {
        n = number % 10;
        if (n > m)
            m = n;
        number = number / 10;
    }
    return m;
}