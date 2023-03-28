// Conditional statement ( control statements )
#include<stdio.h>
int main()
{
	int age; 
	printf("Enter your age: ");
	scanf("%d",&age);
	(age>=18)?printf("%d can vote.",age):printf("%d cannot vote.",age); 
	//(condition)? true : false
	return 0;		
}
