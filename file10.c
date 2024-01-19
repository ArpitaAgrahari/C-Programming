#include <stdio.h>
int main()
{
	FILE * fp;
	fp = fopen("hello.txt", "r");
	if(!fp)
	{
		printf("Error : File cannot be opened\n");
		return 0;
	}
	// Move forward 6 bytes, thus we won't be seeing the first 6 bytes
	fseek(fp,-1,0);
	char ch;
	while(fread(&ch,sizeof(ch),1,fp)==1)
	{
		// Here we transverse the entire file and print its content until 
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
