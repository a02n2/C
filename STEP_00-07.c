#include <stdio.h>

int main(void) {
	FILE *fp;
	char sBuf[256] = { 0 };

	/*1�s�ǂݍ���*/
	fp = fopen("STEP_00-07.txt", "r");

	fgets(sBuf, sizeof(sBuf), fp);

	printf("%s", &(sBuf[0]));

	fclose(fp);

	/*�ǉ�����������*/
	fp = fopen("STEP_00-07.txt", "a");

	fputs("�ǉ�", fp);

	fclose(fp);

	return 0;

}
