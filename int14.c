//question :  Displaying right angled triangle for 20 rows( '*' shape right angled triangle)
#include <stdio.h>   
int main()
{
	int i,j;
	printf("Displaying right angled triangle for 20 rows\n");
	for (i=1 ; i<=20 ; i++) {
		for ( j=1 ; j<=i ; j++){
			printf("*");
		}
			printf("\n");
		}
	}
