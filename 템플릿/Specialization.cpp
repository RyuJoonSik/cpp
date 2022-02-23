#include <stdio.h>

template <typename T>
void swap(T &a, T &b) {
	T t;
	t = a; a = b; b = t;
}

template <> void swap<double>(double &a, double &b) {
  int i, j;
  i = (int)a;
  j = (int)b;
  a = a - i + j;
  b = b - j + i;
}

int main() {
  double a = 1.2, b = 3.4;
  printf("c=%g, d=%g\n", a, b);
  swap(a, b);
  printf("c=%g, d=%g\n", a, b);
}