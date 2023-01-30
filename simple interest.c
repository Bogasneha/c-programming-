#include<stdio.h>
int main()
{
	int p,n,r,si;
	printf("enter the principal amount:");
	scanf("%d",&p);
	printf("enter the number of years:");
	scanf("%d",&n);
	printf("enter the rate of interest:");
	scanf("%d",&r);
	si=p*n*r/100;
	printf("the simple interest=%d",si);
	return 0;
}
