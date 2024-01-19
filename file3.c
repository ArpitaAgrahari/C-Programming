#include<stdio.h>
int main(){
	FILE * file;
	if(file = fopen("hello.txt","a")){
		if(fputs("in c language....",file) >= 0)
		printf("File opened successfully in append mode");
	}
	else
	printf("Error!");
	fclose(file);
	return 0;
}
