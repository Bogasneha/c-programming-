#include<stdio.h>
int main()
{
	int n,r,rev;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse number=%d",rev);
	return 0;
}
