#include<stdio.h>
#include<string.h>
#define size 20
struct book
{
	char name[20];
	char author[20];
	int pages;
	float price;
};
int output(struct book v[],int n);
int main()
{
	struct book b[size];
	int n,i;
	printf("enter the number of books");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("book %/d detail\n",i+1);
		printf("enter the name\n");
		scanf("%s",b[i].author);
		printf("enter the author name\n");
		scanf("%s",b[i].author);
		printf("enter the pages\n");
		scanf("%d",&b[i].pages);
		printf("enter the price \n");
		scanf("%f",&b[i].price);
	}
	output(b,n);
	return 0;
}
int output(struct book v[],int n)
{
	int i,t=1;
	for(i=0;i<n;i++,t++)
	{
		printf("bookno.%d",t);
		printf("book %d name =%s",t,v[i].name);
		printf("book %d author =%s",t,v[i].author);
		printf("book %d pages =%d",t,v[i].pages);
		printf("book %d price =%f",t,v[i].price);
	}
}
