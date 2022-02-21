#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
		printf("������ ȣ��: %s\n", pname);
	}

	~Human() {
		printf("�ı��� ȣ��: %s\n", pname);
		delete[] pname;
	}

	void intro() {
		printf("%s, %d\n", pname, age);
	}
};

int main() {
	Human kang("������", 1424);
	Human boy = kang;
	
	boy.intro();
}