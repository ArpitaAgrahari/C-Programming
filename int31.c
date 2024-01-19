#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("Enter the number : ");
	scanf("%f",&x);
	x = ceil(x);
	printf("the ceil of the number is : %f",x);
	return 0;	
}
