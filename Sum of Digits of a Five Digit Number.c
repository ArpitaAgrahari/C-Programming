#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    printf("%d\n",sum);
    return 0;
}
