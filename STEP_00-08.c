void func1(void) {
	return;
}

/*�߂�l�Q�T�T*/
int func2(void) {
	return 255;
}

/*�߂�l����������*/
char *func3(void){
	return "����������";
}

/*func���Ăяo��*/
int main(void) {
	func1();
	func2();
	func3();
}