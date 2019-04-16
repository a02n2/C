#include <stdio.h>

int main(void) {
	int i = 0;
	int i2 = 0;
	char s[11] = { 0 };
	char inputBuffer[256] = { 0 };

	i = 255;
	i2 = 255;

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

	printf("変数の値は%dです\n", i);
	printf("変数の値は%#Xです\n", i2);
	printf("変数の値は%sです\n", &(s[0]));

	printf("文字列を入力してください：");
	scanf("%s", &(inputBuffer[0]));

	printf("入力された値は%sです\n", &(inputBuffer[0]));

	return 0;
}
