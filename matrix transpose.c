#include<stdio.h>
int main()
{
	int m,i,j,a[10][10],t[10][10];
	printf("enter the size of the matrix ");
	scanf("%d",&m);
	printf("enter the elements of matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("tranpose of matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
