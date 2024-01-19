#include<stdio.h>
int main(){
	int array[100],max,min,c,n;
	printf("define the size of an array :\n");
	scanf("%d",&n);
	printf("Enter no. of elemnents in your array :\n ");
	for (c=0;c<n;c++){
		scanf("%d",&array[c]);
	}
	min=array[0];
	for(c=0;c<n;c++){
		if(min>array[c]){
			min=array[c];
		}
	}
	max=array[0];
	for(c=0;c<n;c++){
	if(max<array[c]){
			max=array[c];
		}
	}
printf("Minimum number of an array : %d \n",min);
printf("Maximum number of an array : %d \n",max);
}
