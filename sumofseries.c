#include<stdio.h>
int fact(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int sum=0,i,n;
	
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(fact(i)/i);
	}
	printf("%d \n",sum);
	return 0;
}
