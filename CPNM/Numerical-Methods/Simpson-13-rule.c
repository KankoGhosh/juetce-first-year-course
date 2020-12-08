#include <stdio.h>

float f(float x)
{
    return sin(x);
}
int main()
{
    float a, b, n, h, area, sum = 0;
    int i;
    printf("Enter the limit:\na= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("Enter the number of division(Must be EVEN number):\n");
    scanf("%f", &n);
    h = (b - a) / n;
    sum = (a + b) / 3;
    for (i = 1; i < n; i = i + 2)
    {
        sum = sum + (f(a + h * i) * 4) / 3;
    }
    for (i = 2; i < n; i = i + 2)
    {
        sum = sum + (f(a + h * i) * 2) / 3;
    }
    area = h * sum;
    printf("The area under the curve within the limit is : %f", area);
    return 0;
}