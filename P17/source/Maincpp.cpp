#include<stdio.h>
#include<stdlib.h>
#define MAX 80
int main()
{
	FILE *fptr;
	char str[MAX];
	int bytes=0;
	fptr = fopen("C://Users/�K��/Desktop/�����{���y��/110360207_�L�ܼyhw8/P17/P17/output.txt", "r");
	
		while (!feof(fptr))
		{
			bytes = fread(str,sizeof(char), MAX - 1, fptr);
			str[bytes] = '\0';
			printf("%s\n", str);
		}
		fclose(fptr);
		printf("%d",bytes);
	
	system("pause");
	return 0;
}
