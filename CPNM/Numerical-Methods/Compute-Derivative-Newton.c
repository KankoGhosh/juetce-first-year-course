#include <stdio.h>
int fact(int i);

float factop(float x, int n);
float factres(float x, int n);

int main()
{
    float p, h, x[10], y[10], temp[10], guess, sum;
    int n, i, j, loop, row;
    printf("Enter the no of data :\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
        printf("y[%d]=", i);
        scanf("%f", &y[i]);
    }
    temp[0] = y[0];
    for (loop = 1; loop < n; loop++)
    {
        for (row = 0; row < n - loop; row++)
        {
            y[row] = y[row + 1] - y[row];
            printf("%f\t", y[row]);
        }
        temp[loop] = y[0];
        printf("\n");
    }
    printf("Enter the guess:\n");
    scanf("%f", &guess);
    h = x[1] - x[0];
    p = (guess - x[0]) / h;
    sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + ((factop(p, i) * temp[i]) / fact(i));
    printf("\ny(%f)=%f", guess, sum);
    sum = 0;
    for (i = 1; i < n; i++)
    {
        printf("\n%f\n", temp[i]);
        sum = sum + ((temp[i] * factres(p, i)) / fact(i));
    }
    printf("\ny'(%f)=%f", guess, sum / h);
    return 0;
}
float factop(float x, int n)
{

    int i;
    float mul = 1;
    if (n == 0)
        return 1;
    else
    {
        for (i = 0; i < n; i++)
            mul = mul * (x - i);
        return mul;
    }
}
int fact(int i)
{
    if (i == 0)
        return 1;
    else
        return i * fact(i - 1);
}
float factres(float x, int n)
{
    int i, j;
    float sum = 0, mul;
    for (i = 0; i < n; i++)
    {
        mul = 1;
        for (j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            else
                mul = mul * (x - j);
        }
        sum = sum + mul;
    }
    return sum;
}