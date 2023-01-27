#include<stdio.h>
int main()
{
	int a1[20],a2[20],i,k,size1,size2,merge[20];
	printf("enter the size:");
	scanf("%d",&size1);
	printf("enter the elements:");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a1[i]);
		merge[i]=a1[i];
	}
	k=i;
	printf("enter the size2:");
	scanf("%d",&size2);
	printf("enter the elements");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&a2[i]);
		merge[k]=a2[i];
		k++;
	}
	printf("new array");
	for(i=0;i<k;i++)
	{
		printf("%d",merge[i]);
	}
	return 0;
}
