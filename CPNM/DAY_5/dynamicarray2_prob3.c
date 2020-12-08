#include<stdio.h>
#include<stdlib.h>



int main()
{
	int arr[20],n,i;
	
	printf("Enter the number of elements ");
	scanf("%d",&n);
	
	printf("Enter the elements\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
 
	       func1(arr,n);		
    printf("\nThe array elements are\n");
	
	for(i=0;i<n;i++)
	 printf("%d ",arr[i]);
	printf("\n");
			for(i=0;i<n;i++)
			  func2(arr[i]);	
	printf("\nThe array elements are\n");
	
	
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
		  
		  
		  
		  for(i=0;i<n;i++)
			  func3(&arr[i]);	
  printf("\nThe array elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
				
	
	return EXIT_SUCCESS;
}


void func1(int ar[],int n)
{
	int i;
	for(i=0;i<n;i++)
		ar[i]= ar[i]*ar[i];
}
void func2(int element)
{
	element=element*element;
}
void func3(int *element)
{
	*element = (*element)*(*element);
}


