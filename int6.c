//repition statement: looping statement ;means taht we need some programm facility to repeat certain work;3 types- for , while, for-while
//the main idea of loop is to repeat an action or series of statement
// loop has two parts-body and 
//while-pretest loop; for-pretest loop;do..while-post-test loop
//while(loop repetion condition){statement;updating control;}
//while(loop repetion condition)
//{
//statements;
//}
//#while statement print number 10 down to 1
#include<stdio.h>
int main()
{
	int n=10;
	while(n>0){
		printf("%d\n",n);
		n=n-1;
	}
	return 0;
}
