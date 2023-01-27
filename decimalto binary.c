#include<stdio.h>
void convertdtob(int);
int main()
{
	int no;
	printf("enter the decimal number:");
	scanf("%d",&no);
	printf("%d in binary form is:",no);
	convertdtob(no);
	printf("\n");
	return 0;
}
void convertdtob(int no)
{
	int binary[20],i;
	while (no>0)
	{
		binary[i]=no%2;
		i++;
		no=no/2;
	}
	i--;
	for(;i>=0;i--)
	{
		printf("%d",binary[i]);
	}
}
