#include <stdio.h>

namespace A {
  double value;
}

namespace B {
  int value;
}

int main() {
  A::value = 12.345;
  B::value = 123;
}