void func1(void);
int func2(void);
char *func3(void);

int main(void) {
	func1();
	func2();
	func3();
	
	return 0;
}

/*func1ŒÄ‚Ño‚µ*/
void func1(void) {
	return;
}

/*func2ŒÄ‚Ño‚µ*/
int func2(void) {
	return 255;
}

/*func3ŒÄ‚Ño‚µ*/
char *func3(void){
	return "‚ ‚¢‚¤‚¦‚¨";
}
