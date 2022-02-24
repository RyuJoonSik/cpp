#include <stdio.h>

enum E_Error {OUTOMEMORY, OVERRANGE, HARDFULL};

void report() {
  if (true) throw OVERRANGE;
}

int main() {
  try {
    report();
    puts("작업 완료");
  } catch(E_Error e) {
    switch(e) {
      case OUTOMEMORY:
        puts("not enought memory");
        break;
      case OVERRANGE:
        puts("overflow");
        break;
      case HARDFULL:
        puts("hard disk is full");
        break;
    }
  }
}
