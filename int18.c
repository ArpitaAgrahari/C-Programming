// control statement(jump) : another way to control the loop , using jump statement.
// there are four statement : break,continue, return , goto
// break :  keyword used to terminate loop; can be used in nested loop;cause control the transfer of first statement to another statement 
// question : find the output of following code
# include<stdio.h>    //output : 0,1,2
int main()
{
	int i;
	for (i=0; i < 10; i++)
	{
		if (i==4) {
			break;
		}
		printf("%d\n", i);
}
return 0;
}
