#include<stdio.h>
int main()
{
	int rows;
	int i,j;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(i=0.1;i<=rows;i++)
	{
		for(j=0.1;j<=i;j++)
		{
			printf("%d",i);	
		}
		printf("\n");
	}
	return 0;
}
