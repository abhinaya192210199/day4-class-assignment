#include<stdio.h>
struct book
{
	char title[5];
	char author[10];
	float price;
}S[5];
 void main()
{
	int i=5;
	for(i=1;i<=5;i++)
	{
	printf("enter the title\n");
	scanf("%s",&S[5].title);
	printf("enter the author name\n");
	scanf("%s",&S[5].author);
	printf("enter the price\n");
	scanf("%d",&S[5].price);
    } 
}
