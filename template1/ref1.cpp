#include <stdio.h>

int main()
{
	int i = 3;
	int& ri = i;

	printf("i=%d, ri = %d\n", i, ri);
	ri++;
	printf("i=%d, ri=%d\n", i, ri);
	printf("i����=%x, ri����=%x\n", &i, &ri);
}