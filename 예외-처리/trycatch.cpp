#include <stdio.h>

int main() {
  int a, b;

  try {
    printf("수 입력\n");
    scanf("%d", &a);
    if(a < 0) throw a;
    printf("나누는 수 입력\n");
    scanf("%d", &b);
    if (b == 0) throw "0나누기 불가";
    printf("%d\n", a / b);
  } catch(int c) {
    printf("%d는 음수\n", c);
  } catch(const char *message) {
    puts(message);
  }
}