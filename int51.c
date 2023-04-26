#include<stdio.h>
int main(){
	int *ptr=NULL;
	int a = 10;
	printf("%u",ptr);// 0 will be displayed
	printf("%d",*ptr);//invalid(derefrencing ),as ptr is null at this point
	ptr=&a;
	printf("\n%d",*ptr);//Now it is allowed, as null pointer has starting pointing somewhere
	return 0;	
}
