// C program to print the sum of two numbers.
#include<stdio.h>
#include<stdlib.h>

main()
{
	float a,b,sum;
	printf("\nEnter First Number : ");
	scanf("%f",&a);
	printf("\nEnter Second Number : ");
	scanf("%f",&b);
	sum = (a+b);
	printf("\nThe sum of two numbers is : %f",sum);
	return EXIT_SUCCESS;
}
