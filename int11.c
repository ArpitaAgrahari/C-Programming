// nested loop consist of an outer loop with one or more inner loop
#include <stdio.h>             //output :  this code will run for 100*50 iteration of hello
int main()
{
	int i,j;
	for (i=1; i<=100; i++){   //outer loop
		for(j=1;j<=50;j++)  //iner loop
		printf("hello\n",i);
	}
	return 0;
}
