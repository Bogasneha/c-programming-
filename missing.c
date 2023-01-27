#include<stdio.h>  
int main()
{  
	int i,n,m,o; 
	printf("enter the value of n:");
	scanf("%d",&n); 
	printf("enter the value of o:");
	scanf("%d",&o);
	printf("enter the number:");
	scanf("%d",&m);
	for(i=n;i<=o;i++)
	{
		if(i%10==m)
		{
			continue;    
		}    
		printf("%d \n",i);    
	}  
	return 0;  
} 
