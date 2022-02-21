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
		printf("생성자 호출: %s\n", pname);
	}

	Human(const Human& other) {
		pname = new char[strlen(other.pname) + 1];
		strcpy(pname, other.pname);
		age = other.age;
	}

	~Human() {
		printf("파괴자 호출: %s\n", pname);
		delete[] pname;
	}

	void intro() {
		printf("%s, %d\n", pname, age);
	}
};

void printHuman(Human who) {
	who.intro();
}

int main() {
	Human kang("강감찬", 1424);
	Human boy = kang;
	printHuman(boy);
}