// question : print area of circle using user defined radius
#include<stdio.h>
int main( )
{
	float radius,area;
	printf("enter the radius of circle: ",radius);
	scanf("%f",&radius);
	area = 3.14* (radius* radius);
	printf("the area of circle is: %f",area);
	return 0;
}
