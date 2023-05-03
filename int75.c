#include<stdio.h>
#include<string.h>
struct Emmployee
{
	//define the member of the structure 
	// memory occupied by employee is 108byte
    // union of employee is 40 i.e city[40]
	char name[50];
	int id;
	char gender[30];
	char city[40];	
};
