#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE* file = fopen("10.691m8h_20171127_gps.txt", "r");
	char line[256];   //save a line
	char str[20];    //save the second list
	double result;   //save the value of the second list(changed to double first)
	if (file == NULL)
	{
		return 0;
	}
	while (fgets(line, sizeof(line), file)) { //fgets read file by lines, ended by while circle at the end of the file
		sscanf(line, "%*s %s", str);//sscanf analysis the data by lines, pass the first line(see the usage of sscanf)
		result = atof(str); //change to double
		printf("%f\n", result);
	}
	fclose(file);
	getchar();     //keep waiting
	return 0;
}