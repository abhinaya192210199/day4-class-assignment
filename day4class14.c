#include<stdio.h>
struct rectangle
{
	int length;
	int width;
	float area;
}S1;
 void main()
{
	printf("enter the length\n");
	scanf("%d",&S1.length);
	printf("enter the width\n");
	scanf("%d",&S1.length);
	S1.area=S1.length*S1.width;
	printf("\n%d",S1.area);
}
