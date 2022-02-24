#include <stdio.h>

class Int100 {
  private:
    int num;
  public:
    Int100(int a) try: num(a) {
      if (a > 100) {
        throw a;
      }
    } catch (int) {
      printf("bigger than 100\n");
    }
    void OutValue() {
      printf("%d\n", num);
    }
};

int main() {
  try {
    Int100 i(101);
    i.OutValue();
  } catch (int) {
    puts("not usable object");
  }
}