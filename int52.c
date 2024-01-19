/* arrays:  collection of related data items of same data types 
   it is static entity : remain the same same size throughout program till execution
 there are 3 ways to pass array : &array,array,&array[0]  
 types of array : one dimensional */
#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<7;i++){
			scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
