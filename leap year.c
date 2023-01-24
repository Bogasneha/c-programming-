#include<stdio.h>
int main()
{
	int m,d,y;
	printf("enter the date,month, year:");
	scanf("%d%d%d",&d,&m,&y);
	if (y%4==0)
	{
		printf("%d is leap year",y);
	}
	else if(y%400==0)
	{
			printf("%d is leap year",y);
	}
	else if(y%100==0)
	{
			printf("%d is leap year",y);
	}
	else
	{
		printf("%d is not leap year",y);
	}
	return 0;
}
