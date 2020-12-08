#include <stdio.h>
float f(float x, float y)
{
    return x + pow(y, 2);
}
float g(float x, float y, float h)

{
    return y + h * f(x, y);
}
int main()
{
    float a, b, x, y, h, tempf, tempy;
    int n, m, i, j;
    printf("Enter the initial pair of x and y respectively:\n");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("Enter the value of x at which you want to find y:\n");
    scanf("%f", &a);
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter number of improvement:\n");
    scanf("%d", &m);
    h = (a - x) / n;
    for (i = 0; i < n; i++)
    {
        tempy = y;
        tempf = f(x, y);
        y = g(x, y, h);
        x = x + (i + 1) * h;
        for (j = 0; j < m; j++)
        {
            y = tempy + (h * (tempf + f(x, y))) / 2;
            printf("%f\n", y);
        }
    }
    printf("\ny(%0.2f)=%f", a, y);
    return 0;
}