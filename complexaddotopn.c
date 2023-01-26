#include<stdio.h>
typedef struct complex
{
	float real;
	float imaginary;
}complex;
complex addition(complex num1,complex num2);
complex sub(complex num1,complex num2);
complex mul(complex num1,complex num2);
complex div(complex num1,complex num2);
int main()
{
	complex num1,num2,a,b,c,d;
	printf("enter the 1st complex number:");
	scanf("%f%f",&num1.real,&num1.imaginary);
	printf("enter the 2nd complex number:");
	scanf("%f%f",&num2.real,&num2.imaginary);
	a=addition(num1,num2);
	b=sub(num1,num2);
	c=mul(num1,num2);
	d=div(num1,num2);
	printf("real=%f + imaginary=%f",a.real,a.imaginary);
	printf("\nreal=%f - imaginary=%f",b.real,b.imaginary);
	printf("\nreal=%f * imaginary=%f",c.real,c.imaginary);
	printf("\nreal=%f / imaginary=%f",d.real,d.imaginary);
	return 0;
}
complex addition(complex num1,complex num2)
{
	complex temp;
	temp.real=num1.real+num2.real;
	temp.imaginary=num1.imaginary+num2.imaginary;
	return (temp);	
}
complex sub(complex num1,complex num2)
{
	complex temp;
	temp.real=num1.real-num2.real;
	temp.imaginary=num1.imaginary-num2.imaginary;
	return (temp);	
}
complex mul(complex num1,complex num2)
{
	complex temp;
	temp.real=num1.real*num2.real;
	temp.imaginary=num1.imaginary*num2.imaginary;
	return (temp);	
}
complex div(complex num1,complex num2)
{
	complex temp;
	temp.real=num1.real/num2.real;
	temp.imaginary=num1.imaginary/num2.imaginary;
	return (temp);	
}

