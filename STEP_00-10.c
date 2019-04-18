#include<stdio.h>

void func1(int *p);
void func2(int *p);
void func3(int *p);
void func4(int *p);

int main(void) {
	int i1;
	int i2;
	int i3;
	int i4;

	/*func1���Ăяo��*/
	i1 = 0;		
	func1(&i1);   
	i1 = 1;		
	func1(&i1);

	/*func2����т���*/
	i2 = 0;
	func2(&i2);
	i2 = 1;
	func2(&i2);
	i2 = 2;
	func2(&i2);
	i2 = 3;
	func2(&i2);

	/*func3���Ăяo��*/
	i3 = 0;
	func3(&i3);

	/*func4���Ăяo��*/
	i4 = 0;
	func4(&i4);

	return 0;
}

/*if��*/
void func1(int *p) {

	if (*p == 0) {			/*0�Ȃ�1���i�[���\��*/
		*p = 1;
		printf("%d", *p);
	}
	else {					/*0�ȊO�Ȃ�2���i�[���\��*/
		*p = 2;
		printf("%d", *p);
	}

	return;
}

/*switch��*/
void func2(int *p) {

	switch (*p) {
		case 0 :*p = 3; printf("%d", *p);		/*0�Ȃ�3���i�[���\��*/
			break;
		case 1 :*p = 4; printf("%d", *p);		/*1�Ȃ�4���i�[���\��*/
			break;
		case 2 :*p = 5; printf("%d", *p);		/*2�Ȃ�5���i�[���\��*/
			break;
		default :*p = 6; printf("%d", *p);		/*����ȊO�Ȃ�6���i�[���\��*/
			break;
	}

	return;
}

/*for��*/
void func3(int *p) {

	/*7�`10��1�ÂC���N�������g���\��*/
	for (*p = 7; *p <= 10; (*p)++ ) {

		printf("%d", *p);

		if (*p == 10) {		/*10�ɂȂ����甲����*/
			break;
		}

	}

	return;
}

/*while��*/
void func4(int *p) {

	*p = 11;	/*p��11���i�[*/

	/*11�`20��1�ÂC���N�������g���\��*/
	while (*p <= 20) {
	
		printf("%d", *p);

		if (*p == 20) {		/*20�ɂȂ����甲����*/
			break;
		}

		(*p)++;
	}

	return;
}