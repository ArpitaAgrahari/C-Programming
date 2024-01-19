/* data type of pointer variable and variable whose address it will store should be same . */
#include<stdio.h>
int main(){
	int x  = 10;
	float y =2.0;
	float *px;
	px = &y;// valid since both ptr and y are of same data type
	int *ptr;
	ptr = &x;// valid since both ptr and x are of same data type
	printf("value of  y = %f",*px);
	printf("\nvalue of x = %d",*ptr);
	return 0;
	
}
