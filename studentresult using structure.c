#include<stdio.h>
struct marks
{
	int p,c,m,ph,i;
	int total;
	float avg;
}std;
int main()
{
	printf("enter the marks of python:");
	scanf("%d",&std.p);
	printf("enter the marks of c programming:");
	scanf("%d",&std.c);
	printf("enter the marks of mathematics:");
	scanf("%d",&std.m);
	printf("enter the marks of physics:");
	scanf("%d",&std.ph);
	std.total=std.p+std.c+std.m+std.ph;
	std.avg=std.total/4;
	printf("sum=%d",std.total);
	printf("avg=%f",std.avg);
	if(std.avg>=75)
	{
		printf("DISTINCTON");
	}
	else if(std.avg >=60 && std.avg<75)
	{
		printf("FIRST DIVISION");
	}
	else if(std.avg>=50 && std.avg<60)
	{
		printf("SECOND DIVISION");
	}
	else if(std.avg>=40 && std.avg<50)
	{
		printf("THIRD DIVISION");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
}
