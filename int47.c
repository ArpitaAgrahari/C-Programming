// questions  : finding area of rectangle using pointers
#include<stdio.h>
int main(){
	double length,breath,area =0.0;
	double *plength=&length,*pbreath=&breath,*parea=&area;
	printf("\nEnter the length of rectangle : ");
	scanf("%lf",plength);
	printf("\nEnter the breath of rectangle : ");
	scanf("%lf",pbreath);
	*parea = (*plength)*(*pbreath);
	printf("\nThe area of the retangle with length %0.2lf and breath %0.2lf = %0.2lf",*plength,*pbreath,*parea);
	return 0;	
}
