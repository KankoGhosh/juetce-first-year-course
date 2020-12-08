#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float dist_bw_two_pt(float x1,float y1,float x2,float y2)
{
	float dist;
	dist=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	
	return dist;
	
}

float area_of_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
	float s,a,b,c,area;
	
	a=dist_bw_two_pt(x1,y1,x2,y2);
	b=dist_bw_two_pt(x2,y2,x3,y3);
	c=dist_bw_two_pt(x3,y3,x1,y1);
	s= (a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
	
}

float check_inside_or_outside(float x,float y,float x1,float y1,float x2,float y2,float x3,float y3)
{
  float area_1,area_2,area_3,actual_area,p;
  
  actual_area= area_of_triangle(x1,y1,x2,y2,x3,y3);
  
  area_1=area_of_triangle(x,y,x2,y2,x3,y3);
  area_2=area_of_triangle(x1,y1,x,y,x3,y3);
  area_3=area_of_triangle(x1,y1,x2,y2,x,y);
  
  p=(area_1+area_2+area_3);
  
  if(p==actual_area)
  {
  	return 1;
	  }	
	else
	{
		return 0;
	}
	
}




main()
{
	float x1,x2,y1,y2,x3,y3,x,y;
	
	printf("\n Enter the points of the triangle : ");
	printf("\n Enter the point x1 : ");
	scanf("%f",&x1);
	printf("\n Enter the point y1 : ");
	scanf("%f",&y1);
	printf("\n Enter the point x2 : ");
	scanf("%f",&x2);
	printf("\n Enter the point y2 : ");
	scanf("%f",&y2);
	printf("\n Enter the point x3 : ");
	scanf("%f",&x3);
	printf("\n Enter the point y3 : ");
	scanf("%f",&y3);
	
    printf("\n\n The distance between (x1,y1) and (x2,y2) is : %f units)",dist_bw_two_pt(x1,y1,x2,y2) );
    printf("\n The distance between (x2,y2) and (x3,y3) is : %f units)",dist_bw_two_pt(x2,y2,x3,y3) );
    printf("\n The distance between (x3,y3) and (x1,y1) is : %f units)",dist_bw_two_pt(x3,y3,x1,y1) );
    
    printf("\n\n The area of the triangle is %f square units",area_of_triangle(x1,y1,x2,y2,x3,y3));
    
    printf("\n\n Enter the point you want to check if it is inside or outside of the triangle.");
    printf("\n Enter the co-ordinate x :");
    scanf("%f",&x);
    
    printf("\n Enter the co-ordinate y :");
    scanf("%f",&y);
    
    printf("\n The returned value after computing is : %f",check_inside_or_outside(x,y,x1,y1,x2,y2,x3,y3));
    
    return EXIT_SUCCESS;
    
    


}
