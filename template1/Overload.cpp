#include <stdio.h>

int Add(int a, int b);
int Add(int a, int b, int c);
double Add(double a, double b);

int main() {
	printf("%d\n", Add(1, 2));
	printf("%d\n", Add(3, 4, 5));
	printf("%.1f\n", Add(1.414, 2.43));
	printf("%p", (int*)NULL);
}

int Add(int a, int b) {
	return a + b;
}
int Add(int a, int b, int c) {
	return a + b + c;
}

double Add(double a, double b) {
	return a + b;
}