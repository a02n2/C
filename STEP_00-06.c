#include <stdio.h>

int main(void) {
	int i = 255;
	int i2 = 255;
	char s[11] = "����������";
	char inputBuffer[256] = { 0 };

	printf("�ϐ��̒l��%d�ł�\n", i);
	printf("�ϐ��̒l��%#X�ł�\n", i2);
	printf("�ϐ��̒l��%s�ł�\n", &(s[0]));

	printf("���������͂��Ă��������F");
	gets(&(inputBuffer[0]));

	printf("���͂��ꂽ�l��%s�ł�\n", &(inputBuffer[0]));

	return 0;
}