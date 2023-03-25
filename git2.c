// question :  print cube and square of user defined number as a , b, c
#include<stdio.h>
int main( )
{
	int a,b,c;
	printf("Enter the number: ");
	scanf("%d",&a);
	b=a*a*a;
	printf("Cube of no: %d",b);
	c=a*a;
	printf("\nSquare of no: %d",c);
	return 0;
}
