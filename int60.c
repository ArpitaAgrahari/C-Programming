#include<stdio.h>
int main(){
	int max,min,n,i;
	printf("\n Enter n: ");
	scanf("%d",&n);
	max=n[0];
	for(i=0;i<n;i++){
	if(max<n[i])
	{	
		max=n[i]
}
	}
	for(i=0;i<n;i++){
	if(min>n[i])
	{
		min=n[i]
	}
}
printf("Max :",max);
}  
