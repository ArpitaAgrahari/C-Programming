#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int rem=0,dig=0,n,*arr,i;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(n));
    for(i=0;i<n;i++){
        scanf("%d",(arr+i));
        rem = *(arr+i) % 10;
        dig = (dig * 10)+ rem;
    }
    if(dig%10 == 0){
        printf("Yes\n");
    }
    else
        printf("No");
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
