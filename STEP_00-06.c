#include <stdio.h>

int main(void) {
	int i = 255;
	int i2 = 255;
	char s[11] = "あいうえお";
	char inputBuffer[256] = { 0 };

	printf("変数の値は%dです\n", i);
	printf("変数の値は%#Xです\n", i2);
	printf("変数の値は%sです\n", &(s[0]));

	printf("文字列を入力してください：");
	gets(&(inputBuffer[0]));

	printf("入力された値は%sです\n", &(inputBuffer[0]));

	return 0;
}