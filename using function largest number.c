#include <stdio.h>    
     
int main()    
{     
    int arr[10],n,i;  
	int length = sizeof(arr)/sizeof(arr[0]);     
    int max = arr[0];    
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}   
    for (i = 0; i < length; i++) 
	{     
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return 0;    
}    
