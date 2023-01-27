#include<Stdio.h>
struct student
{
	int rollno;
	char name;
	float mark;
}cse,mech,ece;
int main()
{
	struct student cse;
	printf("enter rollno");
	scanf("%d",&cse.rollno);
	printf("enter name");
	scanf("%s",&cse.name);
	printf("enter the marks");
	scanf("%f",&cse.mark);
	printf("rollno=%dname=%smark=%f",cse.rollno,cse.name,cse.mark);
	return 0;
}
