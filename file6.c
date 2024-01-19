/* reading data from an existing file :: 
   fgets() : used to read string from stream .*/
#include<stdio.h>
int main(){
	FILE *file;
	char str[500];
	if(file = fopen("hello.txt","r")){
			printf("%s",fgets(str,100,file));
	}
	fclose(file);
	return 0;
}
