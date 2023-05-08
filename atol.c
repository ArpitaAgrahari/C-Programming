/* atol : it  converts into long integer  */
#include<stdio.h>
#include<stdlib.h>
int main(){
	long int i;
	char x[]="100000000";
	i = atol(x);
	printf("%ld",i);
	return 0;
}
