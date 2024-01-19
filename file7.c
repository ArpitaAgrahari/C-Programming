/* reading data from an existing file :: 
   fscanf() : used to read charcter set i.e string from file .
   it returns the EOF , when all the xontent the file already exist */
#include<stdio.h>
int main(){
    FILE *file;
   char str;
    if(file = fopen("hello.txt","r"))
        while(str=fgetc(file)!=EOF){
            printf("%c",str);
        }
    
    fclose(file);
    return 0;
}
