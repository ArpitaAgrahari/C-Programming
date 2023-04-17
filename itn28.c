#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Enter the number : ");
	scanf("%f",&x);
	x = exp(x);
	printf("the exponent of the number is : %f",x);
	return 0;	
}
