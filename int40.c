/* register :  the variable defined as the register is allocated the memory into the cpu register depending upon the size pf 
  the memory re,aing in the cpu.the intial value of register local varibale is 0. assess time pf register
   varibale is faster than the automatic variable . we can store pointers in to the registers.  */
#include<stdio.h>
void main(){
	register int x,sum =0 ;
	for (x=1;x<10000;x++){
		sum +=x ;
	}
	printf("sum =%d",sum);
}
