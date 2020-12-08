//C program to built a simple calculator using switch case.

#include<stdio.h>
#include<stdlib.h>
main()
{
	
	float num_1,num_2,div;
	int optn;
	
	printf("\n Choose your option from the list and press enter.");
	printf ("\n Choose 1 for addition");
	printf ("\n Choose 2 for substraction");
	printf ("\n Choose 3 for multipication");
	printf ("\n Choose 4 for division");
	printf ("\n Choose 5 for modulo");
	
	printf("\nEnter your chosen option : ");
	
	scanf("%d",&optn);
	
	switch(optn)
	{
		case 1 : printf("\nEnter first number to add : ");
		         scanf("%f",&num_1);
		         printf("\nEnter second number to add : ");
		         scanf("%f",&num_2);
		         printf("\n The summation is : %f", num_1+num_2);
		         break;
		         
	    case 2 : printf("\nEnter first number to substract : ");
		         scanf("%f",&num_1);
		         printf("\nEnter second number to substract : ");
		         scanf("%f",&num_2);
		         printf("\n The summation is : %f", num_1-num_2);
		         break;
		         
		case 3 : printf("\nEnter first number to multiply : ");
		         scanf("%f",&num_1);
		         printf("\nEnter second number to multiply : ");
		         scanf("%f",&num_2);
		         printf("\n The summation is : %f", num_1*num_2);
		         break;
		
		case 4 : printf("\nEnter first number to divide : ");
		         scanf("%f",&num_1);
		         printf("\nEnter second number to divide : ");
		         scanf("%f",&num_2);
		         if(num_2==0)
		         {
		         	printf("Do not enter 0 as second number please try again!!");
				 }
				 
				 else{
				 	printf("\nThe result after division is : %f",num_1/num_2);
				 }
		         break;
		         
		case 5 : printf("\nEnter first number for modulo : ");
		         scanf("%f",&num_1);
		         printf("\nEnter second number for modulo : ");
		         scanf("%f",&num_2);
		         printf("\n The modulo is : %f", (int)num_1%(int)num_2);
		         break;
		         
		         
		 
		 default : printf("\nYou have entered wrong option please re enter.");
		         
		         
		         
	}
	
return EXIT_SUCCESS;	
}
