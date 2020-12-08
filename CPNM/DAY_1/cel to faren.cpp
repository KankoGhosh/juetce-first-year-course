//C program for converting temaprature from centigrade to farenhite

#include<stdio.h>
#include<stdlib.h>

main()

{
	float cel,faren;
	
	printf("\nEnter temparature in centigrade : ");
	scanf("%f",&cel);
	
	faren=(32+(9.0/5.0)*cel);
	
	printf("\n The temparature in farenhite is : %f",faren);
	
	return EXIT_SUCCESS;
	
	
	
	
	
}

