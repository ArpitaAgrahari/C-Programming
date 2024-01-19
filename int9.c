#include<stdio.h>     //   #output : hello will print infinite loop
int main()
{
	int i;
	for (i=1; i!=10; i+=2){
		printf("hello\n");
	}
	return 0;
}
