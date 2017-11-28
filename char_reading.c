#include <stdio.h>  

int main()
{  
	char data[30];
	FILE *fp = fopen("textname.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	while (!feof(fp))   //detect the terminator
	{
		fscanf(fp, "%s", data);
		printf("%4s", data);
	}
	printf("\n");
	fclose(fp);
	getchar();       //waiting time
	return 0;
}
