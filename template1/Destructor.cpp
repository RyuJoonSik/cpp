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

	~Human() {
		printf("파괴자 호출: %s", pname);
		delete[] pname;
	}

	void intro() {
		printf("%s, %d\n", pname, age);
	}
};

int main() {
	Human boy("김수한무거북이와두루미", 12);
	boy.intro();
}