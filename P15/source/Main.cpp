#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1,*fptr2;
	char b;
	
	fptr1 = fopen("C://Users/�K��/Desktop/�����{���y��/110360207_�L�ܼyhw8/P15/P15/text.txt", "r");
	fptr2 = fopen("C://Users/�K��/Desktop/�����{���y��/110360207_�L�ܼyhw8/P15/P15/output.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL)
	{
		printf("����");
	}
	else
	{
		while ((b = getc(fptr1)) != EOF)
		{
			putc(b, fptr2);
			
			
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("���\");
		
		
	}
	system("pause");
	return 0;
}