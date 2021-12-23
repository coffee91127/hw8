#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *in,*out;
	char str[100];
	int cnt;
	in = fopen("C://Users/八斗/Desktop/高階程式語言/110360207_林桔慶hw8/P18/P18/text.txt", "r");
	out = fopen("C://Users/八斗/Desktop/高階程式語言/110360207_林桔慶hw8/P18/P18/output.txt", "w");
	while (!feof(in))
		{
		cnt = fscanf(in,"%s", str);
		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
		}
	fclose(in);
	fclose(out);
		
	
	system("pause");
	return 0;
}
