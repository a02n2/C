void func1(void);
int func2(void);
char *func3(void);

int main(void) {
	func1();
	func2();
	func3();
	
	return 0;
}

/*func1呼び出し*/
void func1(void) {
	return;
}

/*func2呼び出し*/
int func2(void) {
	return 255;
}

/*func3呼び出し*/
char *func3(void){
	return "あいうえお";
}
