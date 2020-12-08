#include <stdio.h>
float f(float x, float y)
{
    return -x * pow(y, 2);
}
float g(float x, float y, float h)
{
    return y + h * f(x, y);
}
int main()
{
    float a, b, x, y, h;
    int n, i;
    printf("Enter the initial pair of x and y respectively:\n");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("Enter the value of x at which you want to find y:\n");
    scanf("%f", &a);
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    h = (a - x) / n;
    for (i = 0; i < n; i++)
    {
        y = g(x, y, h);
        x = x + (i + 1) * h;
    }
    printf("\ny(%0.2f)=%f", a, y);
    return 0;
}