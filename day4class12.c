#include<stdio.h>
struct student
{
	char name[10];
	int id;
	float gpa;
}S[3];
 void main()
{
	int i=3;
	for(i=1;i<=3;i++)
	{
		printf("enter the name\n");
		scanf("%s",&S[3].name);
		printf("enter the id\n");
		scanf("%d",&S[3].id);
		printf("enter the gpa\n");
		scanf("%d",&S[3].gpa);
	}
}
