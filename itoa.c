/* itoa: converts int into to string data type */
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=123;
	char str[100];
	itoa(a,str,2);
	printf("\nBinary values : %s",str);
		itoa(a,str,10);
	printf("\nDecimal values : %s",str);
		itoa(a,str,16);
	printf("\nHexadecimal values : %s",str);
		itoa(a,str,8);
	printf("\nOctal values : %s",str);
	return 0;
}
