// question :  recursion example of fabonacci series ( fabonacci series is sum of previous two terms)
#include<stdio.h>
int fibo(int x);
int main()
{
	int n, result;
	printf("Enter the number : ");
	scanf("%d",&n);
	result=fibo(n);
	printf("%d",result);
	return 0;
}
int fibo(int x)
{
if(x==0 || x==1)  
	return x;
	else
	return fibo(x-1)+ fibo (x-2);
}
