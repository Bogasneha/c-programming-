#include<stdio.h>
#include<math.h>
int pythagoreanTriplets(int limit)
{
	int a,b,c=0,m=2,i;
	printf("pythagorean triplets:");
	while(c<limit)
	{
		for(i=1;i<m;++i)
		{
			a=m*m-i*i;
			b=2*m*i;
			c=m*m+i*i;
			if(c>limit)
			{
				break;
			}
			printf("%d\t%d\t%d\n",a,b,c);
		}
		m++;
	}
}
int main()
{
	int limit;
	printf("enter the limit:");
	scanf("%d",&limit);
	pythagoreanTriplets(limit);
	return 0;
}
