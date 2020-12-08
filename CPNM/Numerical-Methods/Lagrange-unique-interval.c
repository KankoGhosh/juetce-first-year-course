#include <stdio.h>
float fax(float x[], float gues, int p, int n)
{
    float mul1 = 1, mul2 = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == p)
            continue;
        else
        {
            mul1 = mul1 * (gues - x[i]);
            mul2 = mul2 * (x[p] - x[i]);
        }
    }
    return (mul1 / mul2);
}
int main()
{
    float x[10], y[10], gues, sum;
    int i, n;
    printf("Enter no of data:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("x=");
        scanf("%f", &x[i]);
        printf("y=");
        scanf("%f", &y[i]);
    }
    printf("Enter the point x=");
    scanf("%f", &gues);
    for (i = 0; i < n; i++)
        sum = sum + y[i] * fax(x, gues, i, n);
    printf("The y corresponding to x is y(%f)=%f", gues, sum);
    return 0;
}