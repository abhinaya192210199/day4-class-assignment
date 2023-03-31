#include<stdio.h>
struct rectangle
{
	float width;
	float height;
	float area;
}S1;
 void main()
{
	printf("\n enter the width of rectanle");
	scanf("%f",&S1.width);
	printf("\n enter the height of rectangle");
	scanf("%f",&S1.height);
	
	S1.area=S1.width*S1.height;
	printf("\n the area of the rectangle=%2f",S1.area);
	
}
