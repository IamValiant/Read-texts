#include <stdio.h>  

int main()
{  
	char data[30];
	FILE *fp = fopen("10.691m8h_20171127_gps.txt", "r");
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
	getchar();//µÈ´ý  
	return 0;
}