#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char b;
	int count = 0;
	fptr = fopen("C://Users/�K��/Desktop/�����{���y��/110360207_�L�ܼyhw8/P14/P14/text.txt", "r");
	if (fptr == NULL)
	{
		printf("����");
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
		printf("�`�@��%d�Ӧr��", count);
	}
	system("pause");
	return 0;
}
