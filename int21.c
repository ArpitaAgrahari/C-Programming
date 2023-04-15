// go to :  unconditionally transfer control.
//         goto may be used for transfering control from one place to another.
# include<stdio.h>
int main()
{
	int x;
	printf("eneter a number : ");
	scanf("%d",&x);
	if(x%2==0)
	  goto even ;
	else
	  goto odd;
	even :
		printf("%d is even",x);
		return;
	odd:
		printf("%d is odd",x);
}
