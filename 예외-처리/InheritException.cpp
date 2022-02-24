#include <stdio.h>

class ExNegative {
  protected:
    int number;
  public:
    ExNegative(int n): number(n) {}
    virtual void PrintError() {
      printf("잘못된 값(음수)");
    }
};

class ExTooBig: public ExNegative {
  public:
    ExTooBig(int n): ExNegative(n) {}
    virtual void PrintError() {
      printf("너무 큰 값");
    }
};

class ExOdd: public ExTooBig {
  public:
    ExOdd(int n): ExTooBig(n) {}
    virtual void PrintError() {
      printf("홀수");
    }
};

int main() {
  int n;;

  for(;;) {
    try {
      printf("숫자 입력");
      scanf("%d", &n);
      if(n == 0) break;
      if(n < 0) throw ExNegative(n);
      if(n > 100) throw ExTooBig(n);
      if(n % 2 != 0) throw ExOdd(n);

      printf("알맞은 숫자ㅏ");
    } catch (ExNegative &e) {
      e.PrintError();
    }
  }
}