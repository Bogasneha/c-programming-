#include<stdio.h>
struct student
{
	int n,r,m;
	char s;
}stu[10];
int main()
{
	printf("enter the number of students:");
	scanf("%d",&stu[10].n);
	printf("\nenter the roll number:");
	scanf("%d",&stu[10].r);
	printf("enter the name of the student:");
	scanf("%s",&stu[10].s);
	printf("enter the marks:");
	scanf("%d",&stu[10].m);
	return 0;
}
