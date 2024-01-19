#include <stdio.h>
#include<stdlib.h>
int main(){
 struct car{
 	char * name;
 	int seats;
 	float price;
 };
 int main()
{
	struct car myCar;
	myCar.name = "Reanult";
	myCar.price=500000;
	myCar.seats = 2;
	printf("car_name=%s car_price = %f car_seats = %d\n",myCar.name,myCar.price,myCar.seats);
}
