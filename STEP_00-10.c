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

	/*func1‚ğŒÄ‚Ño‚µ*/
	i1 = 0;		
	func1(&i1);   
	i1 = 1;		
	func1(&i1);

	/*func2‚ğ‚æ‚Ñ‚¾‚µ*/
	i2 = 0;
	func2(&i2);
	i2 = 1;
	func2(&i2);
	i2 = 2;
	func2(&i2);
	i2 = 3;
	func2(&i2);

	/*func3‚ğŒÄ‚Ño‚µ*/
	i3 = 0;
	func3(&i3);

	/*func4‚ğŒÄ‚Ño‚µ*/
	i4 = 0;
	func4(&i4);

	return 0;
}

/*if•¶*/
void func1(int *p) {

	if (*p == 0) {			/*0‚È‚ç1‚ğŠi”[‚µ•\¦*/
		*p = 1;
		printf("%d", *p);
	}
	else {					/*0ˆÈŠO‚È‚ç2‚ğŠi”[‚µ•\¦*/
		*p = 2;
		printf("%d", *p);
	}

	return;
}

/*switch•¶*/
void func2(int *p) {

	switch (*p) {
		case 0 :*p = 3; printf("%d", *p);		/*0‚È‚ç3‚ğŠi”[‚µ•\¦*/
			break;
		case 1 :*p = 4; printf("%d", *p);		/*1‚È‚ç4‚ğŠi”[‚µ•\¦*/
			break;
		case 2 :*p = 5; printf("%d", *p);		/*2‚È‚ç5‚ğŠi”[‚µ•\¦*/
			break;
		default :*p = 6; printf("%d", *p);		/*‚»‚êˆÈŠO‚È‚ç6‚ğŠi”[‚µ•\¦*/
			break;
	}

	return;
}

/*for•¶*/
void func3(int *p) {

	/*7`10‚É1‚Ã‚ÂƒCƒ“ƒNƒŠƒƒ“ƒg‚µ•\¦*/
	for (*p = 7; *p <= 10; (*p)++ ) {

		printf("%d", *p);

		if (*p == 10) {		/*10‚É‚È‚Á‚½‚ç”²‚¯‚é*/
			break;
		}

	}

	return;
}

/*while•¶*/
void func4(int *p) {

	*p = 11;	/*p‚É11‚ğŠi”[*/

	/*11`20‚É1‚Ã‚ÂƒCƒ“ƒNƒŠƒƒ“ƒg‚µ•\¦*/
	while (*p <= 20) {
	
		printf("%d", *p);

		if (*p == 20) {		/*20‚É‚È‚Á‚½‚ç”²‚¯‚é*/
			break;
		}

		(*p)++;
	}

	return;
}