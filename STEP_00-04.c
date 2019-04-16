#include <stdio.h>

int main(void) {
	int i=0 ;
	char s[16] = {0};

	int *pi = NULL;
	char *ps = NULL;

	i = 0xff;
	pi = &i;

	s[0] = 0x82;
	s[1] = 0xA0;
	s[2] = 0x82;
	s[3] = 0xA2;
	s[4] = 0x82;
	s[5] = 0xA4;
	s[6] = 0x82;
	s[7] = 0xA6;
	s[8] = 0x82;
	s[9] = 0xA8;
	s[10] = '\0';
	ps = &(s[0]);

	return 0;

}