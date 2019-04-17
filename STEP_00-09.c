#include <stdio.h>
#include "STEP_00-09.h"

int main(void) {
	int i = 111;
	char s[32] = "‚ ‚¢‚¤";

	func1(255);
	func2('x');
	func3(&i);
	func4(&(s[0]));

	return 0;
}

void func1(int a) {

	printf("func1=%d\n", a);

	return;
}

void func2(char a) {

	printf("func2=%c\n", a);

	return;
}

void func3(int* p) {

	p = 999;

	return;
}

void func4(char* p) {

	p = "‚©‚«‚­";

	return;
}
