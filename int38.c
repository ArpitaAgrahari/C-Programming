/* extern :  it is avbiable through out the program they are declare outside the block.
  the default intital value of external integral typoe is 0.
  a functiom pr variable can be declared any number oif times, but it can be defined only once.
  we can only intialize the external variable globally , i.e we not intialize the extrenal variable within any block. */
#include<stdio.h>
#include<math.h>
void fun1();
void main(){
	extern int x;
	printf("x = %d\n",x);
	fun1();
}
fun1(){
	int x= 1;
	x+=5;
	printf("x = %d\n",x);
}
