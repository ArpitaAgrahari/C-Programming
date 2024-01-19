// continue statemnet : * in while and do .. while loop, the continue statemnet transfer the control to the loop condition.
//                      * in for loop, the continue statement transfer the control to the updating part.
# include<stdio.h>
int main()
{
	int i;
	for (i=1; i <=10; i++)
	{
		if (i==5){
			continue;
		}	printf("%d\n", i);
}
return 0;
}
