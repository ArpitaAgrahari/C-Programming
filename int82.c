#include<stdio.h>
int main()
{
	int arr[]=(1,2,3,4,5,6,7,8,9);
	int *p1, *p2;
	p1=arr;
	p1++; //p1 will point towards next memory location
	printf("\n%d",*p1); // 2 will be displayed
	p1--; //p1 will point towards previous memory location
	printf("\n%d",*p1); // 1 will be displayed
	p1=p1+2; //adding a constant to pointer will point towards
	printf("\n%d",*p1); // 3 will be displayed
	p1=p1-2; // subtracting a constant from a pointer(p1 will point
	printf("\n%d",*p1); //1 will be displayed
	p2=&arr[4];
	printf("\n%d",p2-p1); //Subracting two pointers(returns 4
	// comparing two pointers
	while(p1<=p2)
	{
		printf("\n%d",*p1); // comparison of two pointers(pointers
		p1++;
	}
	// following are the invalid arithemetic operations(Not allowed
//	printf("\n%d",*p1+p2); //Invalid arithemetic
//	printf("\n%d",*p1/p2); //Invalid arithemetic
//	printf("\n%d",*p1*p2); //Invalid arithemetic
//	printf("\n%d",*p1%p2); //Invalid arithemetic
//	printf("\n%d",p1/p2); //Invalid arithemetic
//	printf("\n%d",*p1*p2); //Invalid arithemetic
//	printf("\n%d",*p1/p2); //Invalid arithemetic
//	printf("\n%d",*p1/p2); //Invalid arithemetic
	return 0;
}
