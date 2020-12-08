//C program to take to 3*3 matrix input and perform addition,substraction,multipication and transpose operation to them.


#include <stdio.h>
#include<stdlib.h>
#define MAX 50
int main()

{
    int  arr_1[MAX][MAX], arr_2[MAX][MAX], sum[MAX][MAX],diff[MAX][MAX],multi[MAX][MAX],transpose[MAX][MAX] ,i,j,k,choice,mul;
    
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            printf("Enter element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&arr_1[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            printf("Enter element a[%d][%d] : ",i+1, j+1);
            scanf("%d", &arr_2[i][j]);
        }
    // Adding Two matrices
    
    printf("\n Choose your desired number and press enter.\n Press 1 for addition of two matrix : ");
    printf("\nPress 2 for difference of two matrix : ");
    printf("\nPress 3 for multipication of two matrix : ");
    printf("\nPress 4 for transpose of two matrix : ");
    scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1: for(i=0;i<3;++i)
                for(j=0;j<3;++j)
                 {
                     sum[i][j]=arr_1[i][j]+arr_2[i][j];
                 }
                  // Displaying the result
                  printf("\nSum of two matrices: \n");
                    for(i=0;i<3;++i)
                    for(j=0;j<3;++j)
                   {
                        printf("%d   ",sum[i][j]);
                         if(j==3-1)
                      {
                         printf("\n\n");
                      }
                   }
                   
                   break;
                   
        case 2 : for(i=0;i<3;i++)
                 for(j=0;j<3;j++)
                   diff[i][j]=arr_1[i][j]-arr_2[i][j];
                   printf("\nThe Subtraction of two matrix is\n");
                   for(i=0;i<3;i++)
			       {
                  printf("\n");
                  for(j=0;j<3;j++)
                  printf("%d\t",diff[i][j]);
                   }
              
                   break;
              
   case 3:        for(i=0;i<3;i++)
                  {
                   for(j=0;j<3;j++)
                   {
                     mul=0;
                     for(k=0;k<3;k++)
                    {
                     mul=mul+arr_1[i][k]*arr_2[k][j];
                    }
                       multi[i][j]=mul;
                    }
                    }
                       printf("\nProduct of two matrix is:\n\n");
                        for(i=0;i<3;i++)
                         {
                            for(j=0;j<3;j++)
                           {
                             printf("%d",multi[i][j]);
                             printf("\t");
                            }
                               printf("\n\n");
                            }
                        
                              break;
                        
    case 4 : 
 
              for (i = 0; i< 3; i++)
              for( j = 0 ; j < 3 ; j++ )
              transpose[j][i] = arr_1[i][j];
 
              printf("Transpose of the first matrix:\n");
 
              for (i= 0;i< 3; i++) 
			  {
                 for (j = 0; j < 3; j++)
                 printf("%d\t", transpose[i][j]);
                printf("\n");
              }
              
              
              for (i = 0; i< 3; i++)
              for( j = 0 ; j < 3 ; j++ )
              transpose[j][i] = arr_2[i][j];
 
              printf("\n\nTranspose of the second matrix:\n");
 
              for (i= 0;i< 3; i++) 
			  {
                 for (j = 0; j < 3; j++)
                 printf("%d\t", transpose[i][j]);
                printf("\n");
              }
              break;  
     
	default : printf("\n\n Enter the coice no between 1 to 4 !!!!");
	
	
	}
	
	return EXIT_SUCCESS;
}
