//C program to check three points are collinear or not.


#include<stdio.h>
#include<stdlib.h>	

main()
{
	float x1,y1,x2,y2,x3,y3,check_1,check_2;
	
	printf("\nEnter the co-ordinate x1 : ");
	scanf("%f",&x1);
	printf("\nEnter the co-ordinate y1 : ");
	scanf("%f",&y1);
	printf("\nEnter the co-ordinate x2 : ");
	scanf("%f",&x2);
	printf("\nEnter the co-ordinate y2 : ");
	scanf("%f",&y2);
	printf("\nEnter the co-ordinate x3 : ");
	scanf("%f",&x3);
	printf("\nEnter the co-ordinate y3 : ");
	scanf("%f",&y3);
	
	check_1=(y3-y2)/(x3-x2);
	check_2=(y2-y1)/(x2-x1);

if(check_1==check_2)	
	{
	printf("\n Three points are collinear.");
	}
	else
	{
	printf("\n Three points are not collinear.");	
	}
	return EXIT_SUCCESS;
}
