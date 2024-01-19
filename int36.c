// storage classes :  auto, static, register , extern are four type of classes.
// storage classes used to determine the lifetime,location ,scope and intial value of a variable.
// auto is stored in RAM (dafault value : Garbage value)(scope :  Local) lifetime : within function
// extern is stored in RAM (dafault value : Zero) (scope : Global) lifetime:  Till the termination of program
/* automatic variable - alllocate memory automatically at runtime.
   syntax :  auto int ; or int a;
   keyword is used to define */
#include<stdio.h>
#include<math.h>
void fun()
{
	auto int a = 20;
	++a;
	pritnf("%d\n",a);
}
void main()
{
	fun();
	fun();
	fun();
}
