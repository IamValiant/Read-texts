# Text_Reading-Writing
1.char_reading: while (!feof(fp))

2.read_a_list:while (fgets(line, sizeof(line), file))

3.write_a file:FILE *fpWrite = fopen("data.txt", "a+");
				          fprintf(fpWrite, "%f\n", a[i]);
			         fclose(fpWrite);
