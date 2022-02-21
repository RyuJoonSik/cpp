#include <stdio.h>

class Time
{
private:
	int hour, min, sec;
	
public:
	void SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() {
		printf("%d:%d:%d", hour, min, sec);
	}
};

int main() {
	Time now;

	now.SetTime(12, 30, 40);
	now.OutTime();
}