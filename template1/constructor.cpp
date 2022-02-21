#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	//Human(const char* aname, int aage) {
	//	strcpy(name, aname);
	//	age = aage;
	//}

	//Human(const char* name, int age) {
	//	strcpy(this->name, name);
	//	this->age = age;
	//}

	Human(const char* name, int age) {
		strcpy(Human::name, name);
		Human::age = age;
	}

	void intro() {
		printf("%s, %d\n", name, age);
	}
};


int main() {
	Human kim("±è", 20);
	kim.intro();
}