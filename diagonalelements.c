#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j,d;
	printf("enter the number of rows:");
	scanf("%d",&m);
	printf("enter the number of columns:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(m==n)
	{
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==j)
				{
					printf("diagonal elements=%d\t",a[i][j]);
				}
				else
				{
					printf("\n");
				}
			}
		}
	}
	else
	{
		printf("it is not a square matrix");
	}
	return 0;
}
