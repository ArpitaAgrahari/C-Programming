/*       reading the file content in opened file     */
//#include<stdio.h>
//int main(){
//	FILE * file;
//	if(file = fopen("hello.txt","r")){
//		printf("File opened successfully in read mode");
//	}
//	else
//	printf("the file is not present!");
//	fclose(file);
//	return 0;
//}
/*      if file is not created, so reading the file content in  not opened file  so else condition or 
        statement in console    */
#include<stdio.h>
int main(){
	FILE * file;
	if(file = fopen("helloo.txt","r")){
		printf("File opened successfully in read mode");
	}
	else
	printf("the file is not present!");
	fclose(file);
	return 0;
}
