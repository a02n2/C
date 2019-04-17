#include <stdio.h>

int main(void) {
	FILE *fp;
	char sBuf[256] = { 0 };
	int iSize = sizeof(sBuf);

	/*1s“Ç‚İ‚İ*/
	fp = fopen("STEP_00-07.txt", "r");

	fgets(sBuf, iSize, fp);

	printf("%s", &(sBuf[0]));

	fclose(fp);

	/*’Ç‰Á‚ğ‘‚«‚İ*/
	fp = fopen("STEP_00-07.txt", "a");

	fputs("’Ç‰Á", fp);

	fclose(fp);

	return 0;

}