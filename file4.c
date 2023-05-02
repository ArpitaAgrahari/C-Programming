#include<stdio.h>
int main(){
	FILE * file;
	if(file = fopen("hello.txt","r+")){
				if(fputs("work hard arpita...",file) >= 0)
		printf("File opened successfully in read mode and write mode both");
	}
	else
	printf("The file is not present !");
	fclose(file);
	return 0;
}
