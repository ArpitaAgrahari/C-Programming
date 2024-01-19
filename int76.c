// define the variables of the structure with pointers
//struct Employee emp1, emp2 , *ptr1, *ptr2;
int main()
{
	// store the address of the employee1 and employee 2 structure variable
	ptr1 = &emp1;
	ptr2 = &emp2;
	printf("Enter the name of the employee 1(emp1)  : ");
	scanf("%s",&ptr1->name);
	printf("Enter the id of the employee 1(emp1)  : ");
	scanf("%d",&ptr1->id);
	printf("Enter the gender of the employee 1(emp1)  : ");
	scanf("%s",&ptr1->gender);
	printf("Enter the city of the employee 1(emp1)  : ");
	scanf("%s",&ptr1->city);
		
	printf(" \n Second Employee :  \n")
	ptr1 = &emp1;
	ptr2 = &emp2;
	printf("Enter the name of the employee 2(emp2)  : ");
	scanf("%s",&ptr2->name);
	printf("Enter the id of the employee 2(emp2)  : ");
	scanf("%d",&ptr2->id);
	printf("Enter the gender of the employee 2(emp2)  : ");
	scanf("%s",&ptr2->gender);
	printf("Enter the city of the employee 2(emp2)  : ");
	scanf("%s",&ptr2->city);
	
	printf("\n display the Details of the Employee usinf=g Structure");
	printf("\n Details of the employee (emp 1)\n");
	printf("Name : %s\n",ptr1->name);
	printf("id : %d\n",ptr1->id);
	printf("Gender : %s\n",ptr1->gender);
	printf("City : %s\n",ptr1->city);
	
		printf("\n display the Details of the Employee usinfg Structure");
	printf("\n Details of the employee (emp 2)\n");
	printf("Name : %s\n",ptr2->name);
	printf("id : %d\n",ptr2->id);
	printf("Gender : %s\n",ptr2->gender);
	printf("City : %s\n",ptr2->city);
}
	return 0;
}
