#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,choice,p,a,b,c,d;
	printf("enter a value of x and y");
	scanf("%d%d",&x,&y);
	printf("1.pow");
	printf("2.add");
	printf("3.sub");
	printf("4.mul");
	printf("5.div");
	printf("enter choice");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			p=pow(x,y);
			printf("power=%d",p);
			break;
		case 2:
			a=x+y;
			printf("add=%d",a);
			break;
		case 3:
			b=x-y;
			printf("sub=%d",b);
			break;
		case 4:
			c=x*y;
			printf("mul=%d",c);
			break;
		case 5:
			d=x/y;
			printf("div=%d",d);
		default:
			printf("enter correct choice");
			break;
	}
	return 0;
}
