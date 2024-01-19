/* any changes made inside function , directly doesn't affects the original value.
   Function passing method :  "Pass by Value"  */
#include<stdio.h>
void reference(int[],int);
int main(){
	int arr[100],n;
	int i;
	printf("\n Enter n: ");
	scanf("%d",&n);
	printf("\n Enter array elements: ");
	for(i=0;i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Elements by reference : ");
	reference(arr,n);//Passing array by call by reference
	return 0;
}
