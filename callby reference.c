#include<stdio.h>
int main()
{
	int n,m,p;
	printf("enter the n,m,p:");
	scanf("%d%d%d",&n,&m,&p);
	printf("before swapping=%d%d%d",n,m,p);
	swap(&n,&m,&p);
	printf("after swapping=%d%d%d",n,m,p);
	return 0;
}
int swap(int *n,int *m,int *p)
{
	int temp;
	temp=*n;
	*n=*m;
	*m=*p;
	*p=temp;
}
