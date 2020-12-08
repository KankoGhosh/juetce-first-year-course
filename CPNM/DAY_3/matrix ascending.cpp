//C program to arrange the elements of an integer array in ascending order.

#include <stdio.h>
#include<stdlib.h>
#define MAX 500
 
int main()
{
  int array[MAX], num, c, d, swap; // variable decelaration.
 
  printf("\nEnter number of elements : "); // take input from user for the size of array
  scanf("%d", &num);
 
  printf("\nEnter %d integers to store in the array : ", num); //taking input for all the inputs.
 
  for (c = 0; c < num; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < num - 1; c++)
  {
    for (d = 0 ; d < num - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("\nSorted list in ascending order: ");
 
  for (c = 0; c < num; c++)
     printf("\n %d", array[c]);
 
  return EXIT_SUCCESS;
}
