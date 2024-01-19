// There are 2 argument in calloc and 1 in malloc.
// realloc: function returns a pointer to the first location of newly allocates block of memory .
// realloc :  takes 2 argument;  passing zero as the second argument is called 
#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,i;
    ptr=(int*)calloc(5, sizeof(int));
    *ptr=1;
    *(ptr+1)=2;
    ptr[2]=4;
    ptr[3]=8;
    ptr[4]=16;
    ptr=(int*)realloc(ptr, 7*sizeof(int));
    printf("noe allocate more memory...\n");
    ptr[5]=32;
    ptr[6]=64;
    for (i=0; i<7; i++) {
        printf("ptr[%d] holds %d\n",i,ptr[i]);
    }
}
