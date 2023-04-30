// question : swaping of number and deleting number from the array
#include<stdio.h>
int main()
{
	int array[100],position,value,c,n;
	printf("define the size of an array :\n");
	scanf("%d",&n);
	printf("Enter no. of elemnents in your array :\n ");
	for(c=0;c<n;c++){
		scanf("%d",&array[c]);
	}	
	printf("Enter the position where you want to delete no.:\n ");
	scanf("%d",&position);
	for(c=position-1;c<n-1;c++){
		array[c]=array[c+1];
	}
	printf("Resultant array\n");
	for(c=0;c<n-1;c++){
		printf("%d\n",array[c]);
}
return 0;
}
