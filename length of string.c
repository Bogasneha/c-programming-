#include<stdio.h>
int main()
{
	char s[20],*p=s;
	int count=0;
	printf("enter the string:");
	scanf("%s",&s);
	while(*p!='\0')
	{
		count++;
		p++;
	}
	printf("length of string=%d",count);
	return 0;
}
