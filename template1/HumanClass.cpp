#include <stdio.h>

class Human {
private:
	char name[12];
	int age;

public:
	void intro() {
		printf("%s, %d\n", name, age);
	}
};

int main() {
	Human kim;
	//kim.age = 20;
	kim.intro();
}