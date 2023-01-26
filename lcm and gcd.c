#include<stdio.h>
int gcd(int x,int y)
{
	int a,b;
	int r=0;
	a=(x>y)?x:y;
	b=(x<y)?x:y;
	r=b;
	while(a%b!=0)
	{
		r=a;
		a=b;
		b=r;
	}
	return r;
}
int lcm(int x,int y)
{
	int a;
	a=(x>y)?x:y;
	while(1)
	{
		if (a%x==0 && a%y==0)
		return a;
		++a;
	}
}
int main(int argc,char**argv)
{
	int x,y;
	printf("enter the two numbers:");
	scanf("%d%d",&x,&y);
	printf("gcd of two numbers=%d",gcd(x,y));
	printf("lcm of two numbers=%d",lcm(x,y));
	return 0;
}
