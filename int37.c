/* static defines as static specifier can hold their value multiple function cell.
   static local variable are visible only to the function or the block in ehich they are dfdinedx.
   a same static variable can be declared many times but assigned at only one time .
     syntax : static int a;   */
#include<stdio.h>
#include<math.h>
void fun(){
	static int a= 20;
	++a;
	printf("%d\n",a);
}
void main(){
	fun();
	fun();
	fun();
}
