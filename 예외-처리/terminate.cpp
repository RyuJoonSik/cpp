#include <stdio.h>
#include <exception>
using namespace std;

void mytern() {
  puts("occur exception");
}

int main() {
  set_terminate(mytern);
  try {
    throw 1;
  } catch(char *m) {
    
  }
}