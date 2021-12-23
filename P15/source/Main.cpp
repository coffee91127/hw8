#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1,*fptr2;
	char b;
	
	fptr1 = fopen("C://Users/八斗/Desktop/高階程式語言/110360207_林桔慶hw8/P15/P15/text.txt", "r");
	fptr2 = fopen("C://Users/八斗/Desktop/高階程式語言/110360207_林桔慶hw8/P15/P15/output.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL)
	{
		printf("失敗");
	}
	else
	{
		while ((b = getc(fptr1)) != EOF)
		{
			putc(b, fptr2);
			
			
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("成功");
		
		
	}
	system("pause");
	return 0;
}