#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char b;
	int count = 0;
	fptr = fopen("C://Users/八斗/Desktop/高階程式語言/110360207_林桔慶hw8/P14/P14/text.txt", "r");
	if (fptr == NULL)
	{
		printf("失敗");
	}
	else
	{
		b = getc(fptr);
		printf("%c", b);
		while (b != EOF)
		{
			b = getc(fptr);
			printf("%c", b);
			count++;
		}
		fclose(fptr);
		printf("總共有%d個字元", count);
	}
	system("pause");
	return 0;
}
