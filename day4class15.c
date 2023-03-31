#include<stdio.h>
struct employee
{
	char name[10];
	int age;
	float salary;
	char department[5];
}S1;
 void main()
{
	printf("enter the name\n");
	scanf("%s",&S1.name);
	printf("enter the age\n");
	scanf("%d",&S1.age);
	printf("enter the department\n");
	scanf("%s",&S1.department);
	printf("enter the salary\n");
	scanf("%d<50,000=%d",&S1.salary);
}
	
