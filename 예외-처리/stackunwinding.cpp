#include <stdio.h>

class C {
  int a;
  public:
    C() {puts("constructor call");}
    ~C() {puts("destoryer call");}
};

void divide(int a, int d) {
  if (d == 0) throw "can't divide by 0";
  printf("%d\n");
}

void calc(int t, const char *m) {
  C c;
  divide(10, 0);
}

int main() {
  try {
    calc(1, "calc");
  } catch(const char *message) {
    puts(message);
  }
  puts("program exit");
}