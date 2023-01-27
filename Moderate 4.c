#include<stdio.h>
int main()
{
	int M,N,i;
	printf("enter M");
	scanf("%d",&M);
	printf("enter N");
	scanf("%d",&N);
	for(i=M;i<=N;i++)
	{
		if(i%2==0)
		{
			printf("\nalleven numbers=%d",i);
		}
		else
		{
			printf("\nall odd numbers=%d",i);
		}
	}
	return 0;
}
