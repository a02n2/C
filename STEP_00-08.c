void func1(void);
int func2(void);
char *func3(void);

int main(void) {
	int i=0;
	char *p=NULL;
	
/*func�Ăяo��*/
	func1();
	i=func2();
	p=func3();
	
	return 0;
}

/*�߂�l����*/
void func1(void) {
	return;
}

/*�߂�l255*/
int func2(void) {
	return 255;
}

/*�߂�l"����������"*/
char *func3(void){
	return "����������";
}
