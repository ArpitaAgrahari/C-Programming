/* calloc :  contiguous allocation " 
        it allocates multiple blocks of memory and each block of same size.
         syntax  :  void * calloc(size_t_nitems, size_t size);
         syntax of malloc : void* malloc(size_in_byte)
 main difference between them is taht the value stored in allocated memory space is zero by default. with malloc the allocated value
 may have garbage value. 
 memory allocated by calloc by default contain zero value  */
#include<stdio.h>
#include<stdlib.h> // required for dynamic memory
void main()
{
	float *x;
	int n,i;
	printf("How many elements do you want ?");
	scanf("%d",&n);
	x = (float*)calloc(n, sizeof(float)); // allocate memory
	if(x!=NULL) {
		printf("data is = \n");
		for(i=0; i < n ; i++)
		printf("\n x[%d]=%d",i,*(x + i ));
	}
	else{
		printf("calloc failed");
		getch();
	}
	return 0;
}
