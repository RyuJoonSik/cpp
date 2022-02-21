#include <stdio.h>

class Some {
public:
	//const int total;
	//Some(int atotal): total(atotal) {}
	int &total;
	Some(int &atotal): total(atotal) {}
	void OutTotal() { printf("%d\n", total); }
};

int main() {
	int i = 5;

	Some S(i);
	S.OutTotal();
}