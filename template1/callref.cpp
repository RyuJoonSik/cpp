#include <stdio.h>

void plusref(int& ra)
{
	ra = ra + 1;
}

int main() 
{
	int a = 5;

	plusref(a);
	printf("%d", a);
}