#include <stdio.h> //output : 2 2
int main()
{
	int a[]={1,2,3,4};
	int *p1=a,*p2=&a[3];
	p1++;
	printf("\n%d %d",p2-p1,*p2-*p1);
	return 0;
}
