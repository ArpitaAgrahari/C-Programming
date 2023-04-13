#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,*arr,i,mul=1;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(n));
    for(i = 0;i<n;i++){
        scanf("%d",(arr + i));
        mul *= *(arr + i);
    }
    printf("%d",mul);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
