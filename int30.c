#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Enter the number : ");
	scanf("%f",&x);
	x = log10(x);
	printf("the log10 of the number is : %f",x);
	return 0;	
}
