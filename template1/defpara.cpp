#include <stdio.h>

int GetSum(int from, int to, int step = 1, int base = 0);

int main() {
	printf("%d", GetSum(1, 10));
}

int GetSum(int from, int to, int step/* = 1*/, int base/* = 0*/) {
	int sum = base;

	for (int i = from; i <= to; i += step) {
		sum += i;
	}

	return sum;
}