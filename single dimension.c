#include<stdio.h>
int main()
{
    int i;
    int arr[10],n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for (i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    for (i=0;i<5;i++)
    {
        printf("value of arr[%d]is %d\n",i,arr[i]);
    }
    return 0;
}
