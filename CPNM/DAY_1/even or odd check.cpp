// C program to check a number is even or odd.
#include<stdio.h>
#include<stdlib.h>
main()
{

int num;
printf("\nEnter a number to check wheather it is even or odd :");
scanf("%d",&num);
if(num%2==0)
{
	printf("\nThe number is an even number.");
}	
	else
	{
	printf("\nThe number is an odd number.");
    }
	return EXIT_SUCCESS;
}
