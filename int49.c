#include<stdio.h>
int main(){
	double a,b,area =0.0;
	double *pa=&a, *pb=&b,*parea = &area;
	printf("\nEnter the a and b of parabola : ");
	scanf("%lf %lf",pa,pb);
	*parea = 4*(*pa)*(*pb);
	printf("\nThe area of the parabola with a (%0.2lf) and  b(%0.2lf) = %0.2lf",*pa,*pb,*parea);
	return 0;	
}
