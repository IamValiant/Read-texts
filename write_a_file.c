#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define NUM 10

int main(void)
{
	FILE* file = fopen("10.691m8h_20171127_gps.txt", "r");
	char line[256];   //save a line
	char str[20];    //save the second list
	//double y;   //the value of the second list(changed to double first)
	//double mean,std,sum = 0,sum_square = 0;
	int i = 0,j;
	if (file == NULL)
	{
		printf("There is no file.");
		getchar();
		return 0;
	}
	
	while (fgets(line, sizeof(line), file)) { //fgets read file by lines, ended by while circle at the end of the file
		sscanf(line, "%*s %s", str);//sscanf analysis the data by lines, pass the first line(see the usage of sscanf)
		double y;
		y = atof(str);     //change to double
		double a[NUM];
		if (i < NUM) {
			a[i] = y;
			//write a line
			printf("a[%d]=%f\n",i,a[i]);
			FILE *fpWrite = fopen("data.txt", "a+");
				fprintf(fpWrite, "%f\n", a[i]);
			fclose(fpWrite);
		}
		else {
			for (j=0;j<NUM-1;j++)
				a[j] = a[j+1];    //add a number in the end and wipe the first number
			a[NUM-1] = y;
			printf("%f\n", a[NUM-1]);
			FILE *fpWrite = fopen("data.txt", "a+");
			fprintf(fpWrite, "%f\n", a[j]);
			fclose(fpWrite);		
		}
		i = i + 1;
		}

	fclose(file);
	getchar();     //keep waiting
	return 0;
}
