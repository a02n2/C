void func1(void);
int func2(void);
char *func3(void);

int main(void) {
	func1();
	func2();
	func3();
	
	return 0;
}

/*func1�Ăяo��*/
void func1(void) {
	return;
}

/*func2�Ăяo��*/
int func2(void) {
	return 255;
}

/*func3�Ăяo��*/
char *func3(void){
	return "����������";
}
