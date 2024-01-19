#include <stdio.h>
int main()
{
	FILE * file;
	if (file = fopen("hello.txt", "w"))
	{
		if (fprintf(file, "Yogi Aadtiyanath...") >= 0)
		printf("Write operation successful");
	}
	fclose(file);
	return 0;
}
