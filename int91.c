#include <stdio.h> //output : 6 7
void m(int*p,int *q)
{
	p=q;
	*p=8;
	*q=7;
}
int main(){
	int a=6,b=5;
	m(&a,&b);
	printf("%d %d\n",a,b);
}
