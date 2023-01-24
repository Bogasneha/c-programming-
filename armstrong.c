#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,d,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		d=n%10;
		sum=sum+pow(d,3);
		n=n/10;
	}
	if (temp==sum)
	{
		printf("%d is armstrong number",sum);
	}
	else
	{
		printf("%d is not armstrong number",sum);
	}
	return 0;
}
