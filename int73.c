#include <stdio.h>
#include<stdlib.h>
int main(){
 struct student{
 	char * name;
 	int age, rollno;
 };
 int main()
{
	struct student myStudent;
	myStudent.name = "Arpita";
	myStudent.rollno=9;
	myStudent.age = 20;
	printf("student_name=%s student_rollno = %d student_age = %d\n",myStudent.name,myStudent.age,myStudent.rollno);
}
