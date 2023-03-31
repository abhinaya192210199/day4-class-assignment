#include<stdio.h>
struct person
{
	char name[10];
	int age;
	char address;
}S[3];
 void main()
{
	int i=3;
	for(i=1;i<=3;i++)
	{
		printf("enter the name\n");
		scanf("%s",&S[3].name);
		printf("enter the age\n");
		scanf("%d",&S[3].age);
		printf("enter the address\n");
		scanf("%s",&S[3].address);
	}
}

