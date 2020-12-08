// C program to find maximum and minimum among three integers.
#include<stdio.h>
#include<stdlib.h>

main()
{
 int num_1,num_2,num_3;
 printf("\nEnter first number : ");
 scanf("%d",&num_1);
 
 printf("\nEnter second number : ");
 scanf("%d",&num_2);
 
 printf("\nEnter third number : ");
 scanf("%d",&num_3);
 
 
 if(num_1>num_2 && num_1>num_3)
  printf("\nMaximum number is first number  :  %d",num_1);
 else if(num_2>num_1 && num_2>num_3)
  printf("\nMaximum number is second number :  %d",num_2);
 else
   printf("\nMaximum number is third number :  %d",num_3);
 if(num_1<num_2 && num_1<num_3)
  printf("\nMinimum number is first number :  %d",num_1);
 else if(num_2<num_1 && num_2<num_3)
  printf("\nMinimum number is second number :  %d",num_2);
 else
   printf("\nMinimum number is third number :  %d",num_3);


return EXIT_SUCCESS;
}
