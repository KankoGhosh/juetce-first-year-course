// C programme to check if a year is leap year or not.

#include<stdio.h>
#include<stdlib.h>

main()
{
	int year;
	printf("\n Enter a year to check if it leap year : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
	{
	if(year%400==0)
	{
		printf("\n The year is a leap year.");
		
		
		}	
		else
		{
			
		printf("\n The year is not a leap year.");	
		}
		}	
		else
		{
		printf("\n The year is a leap year.");	
		}
		
		}
	else{
		printf("\n The year is not a leap year.");
		
	}
	
	return EXIT_SUCCESS;
	
}


