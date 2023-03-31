#include<stdio.h>
struct book
{
	char title[10];
	char author[10];
	int publicationyear;
	float price;
}S1;
 void main()
{
	printf("enter the title\n");
	scanf("%s",&S1.title);
	printf("enter the author\n");
	scanf("%s",&S1.author);
	printf("enter the publication year\n");
	scanf("%d<2010=%d",&S1.publicationyear);
	printf("enter the price\n");
	scanf("%d",&S1.price);
	
}
