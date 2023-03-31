#include<stdio.h>
union my_union
{
	int integer;
	float floating_point;
}S1;
 void main()
 {
 	printf("enter the integer\n");
 	scanf("%d",&S1.integer);
 	printf("enter the floating_point\n");
 	scanf("%d",&S1.floating_point);
 }
