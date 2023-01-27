#include<stdio.h>
int main()
{
	int a[10],n,i,j;
	int *ptr=a;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=a;
	for(i=0;i<n;i++)
	{
		printf("array elements=%d",*ptr);
		ptr++;
	}
	return 0;
}
