#include<stdio.h>
int main()
{
	int first,second,*p,*q,sum;
	printf("enter the two integers:");
	scanf("%d%d",&first,&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf("sum of two numbers=%d",sum);
	return 0;
}
