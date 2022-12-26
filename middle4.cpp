#include "middle.h"
using namespace std;

int itc_second_simple_max_num(long long number) {
	if (number < 0)
		number = number * (-1);
	if (number / 10 == 0)
		return -1;
	int max1, a, i;
	max1 = itc_max_num(number);
	a = -1;
	while (number > 0) {
		i = number % 10;
		if (i > a && i != max1)
			a = i;
		number = number / 10;
	}
	if (a == max1)
		return -1;
	return a;
}