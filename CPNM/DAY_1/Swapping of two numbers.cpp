// C Program to read two inputs(numbers) and swap them 
#include<stdio.h>
#include<stdlib.h>
main()
{
float num_1,num_2,swap;
printf("\nEnter the first number : ");
scanf("%f",&num_1);
printf("\nEnter the second number : ");
scanf("%f",&num_2);
swap=num_2;
num_2=num_1;
num_1=swap;
printf("\n After swapping The first number is %f and the second number is %f .",num_1,num_2);
return EXIT_SUCCESS;
}
