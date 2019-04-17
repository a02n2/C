void func1(void) {
	return;
}

int func2(void) {
	return 255;
}

char *func3(void){
	return "‚ ‚¢‚¤‚¦‚¨";
}

int main(void) {
	func1();
	func2();
	func3();
}