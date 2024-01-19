#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,i,fac=1;
    scanf("%d",&a);
    for(i=1;i<a+1;i++){
        fac*=i;
    }
    printf("%d",fac);
    return 0;
}
