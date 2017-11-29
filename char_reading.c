#include <stdio.h>  

int main(void)
{  
	char data[20];
	FILE *fp = fopen("textname.txt", "r");
	if (fp == NULL)
	{
		return 0;
	}
	while (!feof(fp))   //detect the terminator
	{
		fscanf(fp, "%s", data);
		printf("%2s", data);
	}
	printf("\n");
	fclose(fp);
	getchar();       //waiting time
	return 0;
}
