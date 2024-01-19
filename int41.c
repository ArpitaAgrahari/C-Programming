/* pointers in c: pointer that holds the address of another variabke of same data type.*/
// question :  use of pointer  operators : &  and  *
#include<stdio.h>
int main(){
	int x  = 10,*p;
	p=&x;
	printf("%u",p);
	printf("\n%d",*p);
	return 0;
	
}
