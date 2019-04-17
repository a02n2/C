void func1(void);
int func2(void);
char *func3(void);

int main(void) {
	int i=0;
	char *p=NULL;
	
/*func呼び出し*/
	func1();
	i=func2();
	p=func3();
	
	return 0;
}

/*戻り値無し*/
void func1(void) {
	return;
}

/*戻り値255*/
int func2(void) {
	return 255;
}

/*戻り値"あいうえお"*/
char *func3(void){
	return "あいうえお";
}
