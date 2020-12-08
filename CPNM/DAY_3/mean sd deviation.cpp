// C program to compute the mean and standrd deviation of some numbers.
#include <stdio.h>
#include <math.h>
#define MAXSIZE 100
 
int main()
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    printf("Enter the  no of numbers you want to compute :   \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    printf("Average of all elements = %.2f\n", average);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
    return 0;
}
