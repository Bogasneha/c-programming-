#include<stdio.h>
int main()
{
	int p;
	float n,r,si;
	char response;
	printf("enter the principal amount:");
	scanf("%d",&p);
	printf("enter the number of years:");
	scanf("%f",&n);
	printf("enter the person is senior citizen(Y/N)");
	scanf("%s",&response);
	if(response=='Y')
	{
		si=(p*n*12)/100;
		printf("simple interest=%f",si);
	}
	else
	{
		si=(p*n*10)/100;
		printf("simple interest=%f",si);
	}
	return 0;
}

