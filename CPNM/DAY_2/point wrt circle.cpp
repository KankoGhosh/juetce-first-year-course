// C program to check a point (x,y) is on ,out or in the circle.

#include<stdio.h>
#include<stdlib.h>

main()
{
	float x,y,x1,y1,radius,dis,rad;
	
	printf("\n Enter x coordinate of circle :");
	scanf("%f",&x);
	printf("\n Enter y coordinate of circle :");
	scanf("%f",&y);
	printf("\nEnter the radius of circle : ");
	scanf("%f",&radius);
	printf("\n Enter the x coordinate of point to check it's position wrt circle : ");
	scanf("%f",&x1);
	printf("\n Enter the y coordinate of point to check it's position wrt circle: ");
	scanf("%f",&y1);
	dis=((x1-x)*(x1-x) + (y1-y)*(y1-y));
	rad= radius*radius;
	
	if(dis>=rad)
	{
	if(dis==rad)
	{
		printf("\n\nThe point is on the cirlce.");
		}
		else
		{
			printf("\n\nThe point is outside the circle");
			}	
		
		
	}
	else{
		
		printf("\n\nThe point is inside the circle.");
	}
	
	return EXIT_SUCCESS;
	
	
 } 
