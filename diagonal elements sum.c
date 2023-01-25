#include <stdio.h>
int main()
{
	int i, j, m, n, a = 0, sum = 0;
	int matrix[10][10];
	printf("enter the number of rows and coloumns:");
	scanf("%d%d",&m,&n);
	printf("enter the elements:");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	if (m == n) {
		printf("The matrix is \n");
		for (i = 0; i < m; ++i) {
			for (j = 0; j < n; ++j) {
				printf(" %d", matrix[i][j]);
			}
			printf("\n");
		}
		for (i = 0; i < m; ++i){
		printf("diagonal elements are %d",matrix[i][i]);
	}
		for (i = 0; i < m; ++i) {
			sum = sum + matrix[i][i];
			a = a + matrix[i][m - i - 1];
		}
		printf("\nMain diagonal elements sum is = %d\n", sum);
		printf("Off-diagonal elements sum is = %d\n", a);
	}
	else
		printf("not a square matrix\n");
	return 0;
}
