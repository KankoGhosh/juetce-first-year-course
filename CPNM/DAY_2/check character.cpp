//C program for checking the inputted character is capital or small or number or special character.

#include<stdio.h>
#include<stdlib.h>

main()
{
	char input;
	int c;
	
	
	printf("\n Enter a character to check is it number or capital letter or small letter or special character.");
	scanf("%c",&input);
	
	c=input;
	
	if(c>=65 && c<=90)
	{
		
		printf("\nThe character is a Capital letter.");
		
		}
		
		else if(c>=97 && c<=122)
		{
			printf("\nThe character is a small letter.");
		}
	else if(c>=48 && c<=57)
	{
			printf("\nThe character is a number.");
	}
	else{
		printf("\nThe character is a special character.");
	}
	
return EXIT_SUCCESS;	
	
}

