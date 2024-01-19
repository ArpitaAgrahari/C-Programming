/* creating  a file : fopen()  ;  fopen("file_name,"mode)
there are 3 types of modes : 
   w - writes to a file
   a - append new data to a file ; open for append only
   r - read from a file
   rb - only used for reading purpose in binary mode only
   wb - open for writing in binary mode 
   r+ - used to read and write both  */
#include<stdio.h>
int main(){
	FILE * file;
	if(file = fopen("hello.txt","w")){
		if(fputs("WELCOME....",file) >= 0)
		printf("File opened successfully in write mofde or a new file is created");
	}
	else
	printf("Error!");
	fclose(file);
	return 0;
}
