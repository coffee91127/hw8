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
	fptr = fopen("C://Users/�K��/Desktop/�����{���y��/110360207_�L�ܼyhw8/P16/P16/output.txt", "a");
	
		printf("�п�J�r��");
		while ((b = getche()) != ENTER && (i<MAX))
		{
			str[i++] = b;
		}
		putc('\n', fptr);
		fwrite(str, sizeof(char), i, fptr);
		fclose(fptr);
		printf("\n���[����");

	
	system("pause");
	return 0;
}
