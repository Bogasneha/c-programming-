#include<stdio.h>
typedef struct complex
{
	float real;
	float imag;
}complex;
complex subtraction(complex num1,complex num2);
int main()
{
	complex num1,num2,value;
	printf("enter the real and imaginary part of 1 ");
	scanf("%f%f",&num1.real,&num1.imag);
	printf("enter the real and imaginary part of 2");
	scanf("%f%f",&num2.real,&num2.imag);
	value=subtraction(num1,num2);
	printf("result=%f+%fi",value.real,value.imag);
	return 0;
}
complex subtraction(complex num1,complex num2)
{
	complex temp;
	temp.real=num1.real-num2.real;
	temp.imag=num1.imag-num2.imag;
	return (temp);
}
