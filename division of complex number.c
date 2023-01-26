#include<stdio.h>
typedef struct complex
{
	float real;
	float imag;
}complex;
complex division(complex num1,complex num2);
int main()
{
	complex num1,num2,value;
	printf("enter the real and imaginary part of first complex number:");
	scanf("%f%f",&num1.real,&num1.imag);
	printf("enter the real and imaginary part of second complex number:");
	scanf("%f%f",&num2.real,&num2.imag);
	value=division(num1,num2);
	printf("real=%f\nimaginary=%f",value.real,value.imag);
	return 0;
}
complex division(complex num1,complex num2)
{
	complex temp;
	temp.real=num1.real/num2.real;
	temp.imag=num1.imag/num2.imag;
	return (temp);
}
