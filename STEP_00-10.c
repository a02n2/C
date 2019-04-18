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

	/*func1を呼び出し*/
	i1 = 0;		
	func1(&i1);   
	i1 = 1;		
	func1(&i1);

	/*func2をよびだし*/
	i2 = 0;
	func2(&i2);
	i2 = 1;
	func2(&i2);
	i2 = 2;
	func2(&i2);
	i2 = 3;
	func2(&i2);

	/*func3を呼び出し*/
	i3 = 0;
	func3(&i3);

	/*func4を呼び出し*/
	i4 = 0;
	func4(&i4);

	return 0;
}

/*if文*/
void func1(int *p) {
	if (*p == 0) {			/*0なら1を格納し表示*/
		*p = 1;
		printf("%d", *p);
	}
	else {				/*0以外なら2を格納し表示*/
		*p = 2;
		printf("%d", *p);
	}
	return;
}

/*switch文*/
void func2(int *p) {
	switch (*p) {
		case 0 :*p = 3; printf("%d", *p);		/*0なら3を格納し表示*/
			break;
		case 1 :*p = 4; printf("%d", *p);		/*1なら4を格納し表示*/
			break;
		case 2 :*p = 5; printf("%d", *p);		/*2なら5を格納し表示*/
			break;
		default :*p = 6; printf("%d", *p);		/*それ以外なら6を格納し表示*/
			break;
	}
	return;
}

/*for文*/
void func3(int *p) {
	/*7～10に1づつインクリメントし表示*/
	for (*p = 7; *p <= 10; (*p)++ ) {
		printf("%d", *p);
		if (*p == 10) {break;}		/*10になったら抜ける*/
	}
	return;
}

/*while文*/
void func4(int *p) {
	*p = 11;	/*pに11を格納*/

	/*11～20に1づつインクリメントし表示*/
	while (*p <= 20) {
		printf("%d", *p);
		if (*p == 20) {break;}		/*20になったら抜ける*/
		(*p)++;
	}
	return;
}
