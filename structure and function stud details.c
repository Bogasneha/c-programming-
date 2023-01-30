#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int n;
};
int student(int n,int roll,char name)
{
	printf("%d",n);
	printf("%d",roll);
	printf("%s",name);
}
int main()
{
    struct student s;
	printf("Enter The Information of Students :\n\n");
    printf("Enter number of students : ");
    scanf("%d",&s.n);
    printf("Enter Name : ");
    scanf("%s",s.name);
    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);   
    printf("\nDisplaying Information\n");
    printf("number of students: %d\n",s.n);
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    return 0;
}
