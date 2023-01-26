#include<stdio.h>
int main()
{
	int n,a[10],sum=0,i;
	float avg;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("sum=%d",sum);
	printf("avg=%f",avg);
	return 0;
}
