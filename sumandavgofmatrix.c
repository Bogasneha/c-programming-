#include<stdio.h>
int main()
{
	int m,n,a[10][10],sum=0,i,j,avg;
	printf("enter th enumber of rows and columns:");
	scanf("%d%d",&m,&n);
	printf("enter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	avg=sum/(m*n);
	printf("sum=%d",sum);
	printf("avg=%d",avg);
	return 0;
}
