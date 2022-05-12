/*Write a C program to enter any number and calculate its square root.*/
#include<stdio.h>
#include<math.h>
void main()
{
	unsigned int a;
	float s;
	printf("enter the value of a");
	scanf("%d",&a);
	s=sqrt(a);
	printf("square root of %d is %f",a,s);
}

