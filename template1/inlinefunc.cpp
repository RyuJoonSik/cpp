#include <stdio.h>
#include <stdlib.h>
#define length(array) (sizeof(array) / array[0])

inline int randfunc(int n) {
	return rand() % n;
}

int main() {
	int i, j, k;
	i = randfunc(10);
	j = randfunc(100);
	k = randfunc(50);

	int temp[] = { 4, 3, 4, 4, 1, 2, 3, 4 };
	printf("%d\n", temp);
	printf("%d\n", sizeof(temp));
	printf("%d", length(temp));
}