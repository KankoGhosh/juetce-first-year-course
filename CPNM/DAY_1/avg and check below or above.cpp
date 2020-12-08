//C programme to compute the average of three numbers and check which number is above and below of average.

#include<stdio.h>
#include<stdlib.h>

main()
{
	float num_1,num_2,num_3,avg;
	
	printf("\n Enter the first number : ");
	scanf("%f",&num_1);
	printf("\n Enter the second number : ");
	scanf("%f",&num_2);
	printf("\n Enter the third number : ");
	scanf("%f",&num_3);
	
	avg=(num_1+num_2+num_3)/3 ;
	
	printf("\n The average of three numbers is : %f",avg);
	
	if(num_1>=avg)
	{
		if(num_1>avg)
		{
		printf("\n %f is above the average.",num_1);
	}
	else{
	printf("\n %f is equal to the average.",num_1);	
	}
	}
	
	else{
		printf("\n %f is below the average.",num_1);
	}
	
	
	
if(num_2>=avg)
	{
		if(num_2>avg)
		{
		printf("\n %f is above the average.",num_2);
	}
	else{
	printf("\n %f is equal to the average.",num_2);	
	}
	}
	
	else{
		printf("\n %f is below the average.",num_2);
	}

if(num_3>=avg)
	{
		if(num_3>avg)
		{
		printf("\n %f is above the average.",num_3);
	}
	else{
	printf("\n %f is equal to the average.",num_3);	
	}
	}
	
	else{
		printf("\n %f is below the average.",num_3);
	}



return EXIT_SUCCESS;
	
}
