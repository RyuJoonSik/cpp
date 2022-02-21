#include <stdio.h>

class Human {
public:
	char name[12];
	int age;

	void intro() {
		printf("%s, %d\n", name, age);
	}
};

int main() {
	Human arFriend[10] = {
		{"A", 10},
		{"A", 10},
		{"A", 10},
	};

	Human* pFriend;
	pFriend = arFriend + 1;
	pFriend->intro();
}