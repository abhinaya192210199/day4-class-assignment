#include<stdio.h>
struct employee
{
	char name[10];
	float salary;
	int age;
}S[3];
 void main()
{
	int i=3;
	for(i=1;i<=3;i++)
	{
		printf("enter the name\n");
		scanf("%s",&S[3].name);
		printf("enter the salary\n");
		scanf("%d",&S[3].salary);
		printf("enter the age\n");
		scanf("%d",&S[3].age);
	}
}
