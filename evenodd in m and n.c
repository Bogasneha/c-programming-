#include<stdio.h>
int main()
{
	int M,N,i;
	printf("enter the M:");
	scanf("%d",&M);
	printf("enter the N:");
	scanf("%d",&N);
	for(i=M;i<=N;i++)
	{
		if(i%2==0)
		{
			printf("even numbers=%d\n",i);
		}
		else
		{
			printf("odd numbers=%d\n",i);
		}
	}
	return 0;
}
