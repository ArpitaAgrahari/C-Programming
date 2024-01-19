// questions  : finding area of circle using pointers
#include<stdio.h>
int main(){
	double radius,area =0.0;
	double *pradius=&radius, *parea=&area;
	printf("\nEnter the radius of circle : ");
	scanf("%lf",pradius);
	*parea = 3.14 *(*pradius)*(*pradius);
	printf("\nThe area of the circle with radius %0.2lf = %0.2lf",*pradius,*parea);
	return 0;	
}
