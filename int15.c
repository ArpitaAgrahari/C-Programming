//type conversion : to ensure that operands are of same type the complier perform type conversion
// converting  are of two types  1 : implicitly(automatically) 
//                  2. explicit (forcefully)
// question :  example of implicit type conversion
# include<stdio.h> // an example of implicit conversion
int main()
{
	int x=10;  //integer x
	char y = 'a';    //character c
	// y implicit converted into int.ASCII
	// value of 'a' is 97
	x=x+y;
	// x is implicitly converted into float
	float z = x + 1.0;
	printf("x = %d, z = %f",x,z);
	return 0; 
}
