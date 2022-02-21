#include <stdio.h>

struct SHuman {
private:
	char name[12];
	int age;

public:
	void intro() {
		printf("%s, %d\n", name, age);
	}
};

int main() {
	SHuman kim;
	//kim.age = 20;
	kim.intro();
}