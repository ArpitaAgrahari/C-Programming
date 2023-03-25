// question : print the sum, sub, div, mul, mod, (arthmetic operations)  of user defined input
#include<stdio.h>
int main( )
{
	int a,b;
	printf("Enter the number a and b: ");
	scanf("%d %d",&a,&b);
	printf("sum of no: %d",a+b);
	printf("\nsub of no: %d",a-b);
	printf("\ndiv of no: %d",a/b);
	printf("\nmul of no: %d",a*b);
	printf("\nmod of no: %d",a%b);
	return 0;
}
