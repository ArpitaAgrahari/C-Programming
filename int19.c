// question :  program to show use of break command
# include<stdio.h>              output : answer is 0,1,2,3
int main()
{
	int i;
	for (i=0; i < 6; i++)
	{
		if (i==4) {
			break;
	}
		printf("%d\n", i);
}
return 0;
}
