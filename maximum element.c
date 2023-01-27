#include<stdio.h>
int main()
{
	int x,y,*p,*q;
	printf("enter the elements of x and y:");
	scanf("%d%d",&x,&y);
	p=&x;
	q=&y;
	if(*p>*q)
	{
		printf("the largest is %d",*p);
	}
	else if(*p<*q)
	{
		printf("the largest is %d",*q);
	}
	else
	{
		printf("the largest is both");
	}
	return 0;
}
