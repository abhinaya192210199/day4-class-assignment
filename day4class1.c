#include<stdio.h>
struct person
{
	char name[20];
	int age;
	float height;
}S1;
 void main()
{
	printf("enter name\n");
	scanf("%s",&S1.name);
	printf("enter age\n");
	scanf("%d",&S1.age);
	printf("enter height\n");
	scanf("%d",&S1.height);
	
	
}
