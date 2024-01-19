// syntax for do-while statement in c: 
//           do 
//           {
//              statement or repeated-action;
//          } while (condition);
// also known as exit-controlled loop , as loop body excutes first and then the condition is checked
//statement executed at least one time (even if condition is false) 
//question:  this do - while statement print number 10 down to 1
#include <stdio.h>   // output : number 10 down to 1 
int main()
{
	int n=10;
	do {
		printf("%d\n",n);
		n=n-1;
	} while (n>0);
	return 0;
}
