							// fputc()
//> The fputc() function is used to write a single character to the file.


#include <stdio.h>
int main()
{
	FILE * file;
	if (file = fopen("hello.txt" , "w"))
	{
		fputc('A',file);
	}
	fclose(file);
	return 0;
}
