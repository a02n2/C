#include <stdio.h>
#include "STEP_00-09.h"

int main(void) {
	int i = 111;
	char s[32] = "あいう";

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

	*p = 999;  /*"111"を"999"に変更*/

	return;
}

void func4(char* p) {

	p[0] = 0x82; /*”あいう”を”かきく”に変更*/
	p[1] = 0xA9;
	p[2] = 0x82;
	p[3] = 0xAB;
	p[4] = 0x82;
	p[5] = 0xAD;

	return;
}
