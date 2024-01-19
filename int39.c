int x =20;
#include<stdio.h>
#include<math.h>
void fun2();
void main(){
	extern int x;
	printf("%d\n",x);
	fun2();
}
fun2(){
	printf("x = %d\n",x);
}
