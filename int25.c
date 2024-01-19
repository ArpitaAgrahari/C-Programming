// unformatted function works on the character data type; unformatted function are: getchar(),putchar()-getch() and putch()-gets() anf puts
// recursion :  that call themselves until the base condition returns
// questions  : question of factorial code (recurssion example)
#include<stdio.h>
int fact(int x);
int main()
{
	int n, result;
	printf("Enter the number : ");
	scanf("%d",&n);
	result=fact(n);
	printf("%d",result);
	return 0;
}
