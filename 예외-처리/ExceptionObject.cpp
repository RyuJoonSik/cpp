#include <stdio.h>

class Exception {
  private:
    int ErrorCode;
  public:
    Exception(int ae): ErrorCode(ae) {}
    int GetErrorCode() {return ErrorCode;}
    void ReportError() {
      switch(ErrorCode) {
      case 1:
        puts("not enought memory");
        break;
      case 2:
        puts("overflow");
        break;
      case 3:
        puts("hard disk is full");
        break;
    }
    }
};

void report() {
  if (true) throw Exception(3);
}

int main() {
  try {
    report();
    puts("작업 완료");
  } catch(Exception &e) {
    printf("%d\n", e.GetErrorCode());
    e.ReportError();
  }
}
