#include<stdio.h>
struct student
{
	char name[20];
	int id;
	float gpa;
}S1;
 void main()
{
	printf("enter the name\n");
	scanf("%s",&S1.name);
	printf("enter the id\n");
	scanf("%d",&S1.id);
	printf("enter the gpa\n");
	scanf("%d",&S1.gpa);
}
