#include <stdio.h>

struct SHuman {
	char name[12];
	int age;

	void intro() {
		printf("%s, %d\n", name, age);
	}
};

int main() {
	SHuman kim = { "��", 20 };
	kim.intro();
}