#include<stdio.h>
int main()
{
	int i,n,t,r;
	printf("enter the table:");
	scanf("%d",&t);
	printf("enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=t*i;
		printf("%d x %d=%d",t,n,r);
	}
	return 0;
}
