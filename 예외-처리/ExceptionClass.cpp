#include <stdio.h>

class MyClass {
  public:
    class Exception {
      private:
        int ErrorCode;
      public:
        Exception(int ae): ErrorCode(ae) {}
        int GetErrorCode() {return ErrorCode;}
        void ReportError() {
          switch (ErrorCode) {
            case 1:
              puts("not enought memory");
              break;
            case 2:
              puts("overflow");
              break;
            case 3:
              puts("full hard disk");
              break;
          }
        }
    };
    void calc() {
      try {
        if (true) throw Exception(1);
      } catch (Exception &e) {
        printf("%d", e.GetErrorCode());
        e.ReportError();
      }
    }
    void calc2() {
      if (true) throw Exception(2);
    }
};

int main() {
  MyClass m;
  m.calc();
  try {
    m.calc2();
  } catch (MyClass::Exception &e) {
    printf("%d", e.GetErrorCode());
    e.ReportError();
  }
}