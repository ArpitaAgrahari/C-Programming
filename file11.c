#include<stdio.h>
int main(){
	struct student{
		int id;
		char name[30];
		double mob;
	}s1,s2;

FILE *ptr;
ptr = fopen("abc.bin","wb+");
if(ptr==NULL){
	printf("invalid address");
}
else{
	printf("File Created");
	printf("\nEnter id :  ");
	printf("%d",&s1.id);
	printf("\nEnter name : ");
	scanf("%s",&s1.name);
	print("\nEnter  mobile : ");
	scanf("%lf",&s1.mob);
	
	fwrite(&s1,sizeof(s1),1,ptr);
	fseek(ptr, 0, SEEK_SET);
	fread(&s2, sizeof(s2),1, ptr);
	
	printf("\n Read the file : ");
	printf("\n Your Id : %d",s2.id);
	printf("\nYour Name is : %s",s2.name);
	printf("\nYour Mob is : %lf",s2.mob);
	fclose(ptr);
}
return 0;
}
