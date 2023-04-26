//questions  : finding area  and circumference of circle using pointers
#include<stdio.h>
int main(){
	double radius,area,circumference =0.0;
	double *pradius=&radius, *parea=&area, *pcircumference=&circumference;
	printf("\nEnter the radius of circle : ");
	scanf("%lf",pradius);
	*parea = 3.14 *(*pradius)*(*pradius);
	*pcircumference = 2* 3.14 *(*pradius);
	printf("\nThe area of the circle with radius %0.2lf = %0.2lf",*pradius,*parea);
	printf("\nThe area of the circle with radius %0.2lf = %0.2lf",*pradius,*pcircumference);
	return 0;	
}
