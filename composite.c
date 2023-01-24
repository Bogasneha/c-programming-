#include<stdio.h>
int main()
{
	int a[20],n,count=0,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if(a[i]==2)
		{
			continue;
		}
		else if(a[i]%2==0)
		{
			count++;
		}
	}
	if (count>2)
	{
	}
	printf("number of composite numbers=%d",count);
	return 0;
}
