#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	//Human() {

	//}

	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	//Human(const char* name, int age) {
	//	strcpy(this->name, name);
	//	this->age = age;
	//}

	//Human(const char* name, int age) {
	//	strcpy(Human::name, name);
	//	Human::age = age;
	//}

	void intro() {
		printf("%s, %d\n", name, age);
	}
};


int main() {
	//Human momo;
	//Human arFriend[3];

	Human arFriend[3] = {
		Human("A", 30),
		Human("B", 20),
		Human("C", 10),
	};

	arFriend[2].intro();
}