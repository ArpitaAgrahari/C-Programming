#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch,str[100],sen[100];
    
    scanf("%c",&ch);
    scanf("%s",str);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n",ch);
    printf("%s\n",str);
    printf("%s",sen);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
