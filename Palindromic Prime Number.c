#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int is_prime(int num){
    if (num < 2)
    return 0;
    for (int i=2; i*i<=num;i++){
        if (num % i == 0)
            return 0;
    } 
    return 1;
    }
    int main(){
        int n, len ;
        scanf("%d",&n);
        char s[10];
        sprintf(s,"%d",n);
        len = strlen(s);
        int flag = 1;
        for(int i=0; i<len/2; i++){
            if(s[i]!=s[len-i-1]){
                flag = 0;
                break;
        }
    }
    if(flag && is_prime(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}
