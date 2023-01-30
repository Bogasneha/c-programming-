#include<stdio.h>
int main()
{
	int t,su,nt;
	printf("enter the total users:");
	scanf("%d",&t);
	if(t<=0)
	{
		printf("enter the positive number");
	}	`
	else
	{
		printf("enter the staffusers:");
		scanf("%d",&su);
	}
	if(t>su)
	{
		nt=su/3;
		printf("student users=%d",t-su-nt);
	}
	else if(t==su)
	{
		printf("student user=0");
	}
	else
	{
		printf("enter appropriate number");
	}
	return 0;
}
