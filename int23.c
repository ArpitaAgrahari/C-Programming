// introduction :  the standard i/o function:
//   there are many library functions available for standard i/o.
//  these function are divided into two categories: -unformatted function-- formatted function(prinf and scanf is included)
// with formatted
// question :  run the code and find the output 
# include<stdio.h>      //output :  *000123*  
int main()
{
	int a=123;
	printf("*%06d",a);
	return 0;
}
