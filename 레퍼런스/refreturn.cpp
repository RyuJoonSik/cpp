#include <stdio.h>

int ar[] = {1, 2, 3, 4, 5};

int& GetAr(int i) {
	return ar[i];
}

int main() {
	GetAr(3) = 6;
	printf("%d", ar[3]);
}

// int i = 3;
// int& ri = i;
// ri++;

// int i = 3;
// int* ri = &i;
// (*ri)++;