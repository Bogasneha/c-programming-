#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
	int p;
	printf("%d",p);
	p=pow(a,b);
	return (pow(a,b));
}
int mul(int a,int b)
{
	int m;
	printf("%d",m);
	m=a*b;
	return (a*b);
}
int div(int a,int b)
{
	int d;
	printf("%d",d);
	d=a/b;
	return (a/b);
}
int sum(int a,int b)
{
	int s;
	printf("%d",s);
	s=a+b;
	return (a+b);
}int sub(int a,int b)
{
	int x;
	printf("%d",x);
	x=a-b;
	return (a-b);
}
int main()
{
	int a,b,p,m,d,s,x;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	p=pow(a,b);
	printf("%d is power of %d and %d \n",p,a,b);
	m=a*b;
	printf("%d is mul of %d and %d\n",m,a,b);
	d=a/b;
	printf("%d is div of %d and %d\n",d,a,b);
	s=a+b;
	printf("%d is sum of %d and %d\n",s,a,b);
	x=a-b;
	printf("%d is sub of %d and %d\n",x,a,b);
	return 0;
}
