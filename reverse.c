// write a program to reverse a string without using reverse conversion
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//  	char Str[100], RevStr[100];
//  	int i, j, len;
//  	printf("\n Please Enter any String :  ");
//  	gets(Str); 	
//  	j = 0;
//  	len = strlen(Str);
//  	for (i = len - 1; i >= 0; i--)
//  	{
//  		RevStr[j++] = Str[i];
//  	}
//  	RevStr[i] = '\0';
//  	printf("\n String after Reversing = %s", RevStr); 	
//  	return 0;
//}
#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100], temp;
  	int i, j;
  	printf("\n Please Enter any String :  ");
  	gets(str); 
	  i = 0;	
  	j = strlen(str)-1;
  while (i < j)
  	{
  		temp = str[i];
  		str[i] = str[j];
  		str[j] = temp;
  		i++;
  		j--;
  	}
  	printf("\n String after Reversing = %s", str); 	
  	return 0;
}
