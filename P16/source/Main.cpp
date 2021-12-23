#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80
int main()
{
	FILE *fptr;
	char b,str[MAX];
	int i = 0;
	fptr = fopen("C://Users/八斗/Desktop/高階程式語言/110360207_林桔慶hw8/P16/P16/output.txt", "a");
	
		printf("請輸入字串");
		while ((b = getche()) != ENTER && (i<MAX))
		{
			str[i++] = b;
		}
		putc('\n', fptr);
		fwrite(str, sizeof(char), i, fptr);
		fclose(fptr);
		printf("\n附加完畢");

	
	system("pause");
	return 0;
}
