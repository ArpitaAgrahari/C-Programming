#include<stdio.h>
int main(){
	char z = 'c';
	char *pz;
	pz = &z;
	char *ptr;
	ptr =&z;
	printf("value of  z = %u",pz);
	printf("\nvalue of  z = %c",*ptr);
	return 0;
	
}
