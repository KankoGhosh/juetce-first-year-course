#include <stdio.h>
float f(float x)
{
    return pow(x, 3);
}
int main()

{
    float a, b, n, h, area, sum = 0;
    int i;
    printf("Enter the limit:\na= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("Enter the number of division:\n");
    scanf("%f", &n);
    h = (b - a) / n;
    sum = (a + b) / 2;
    for (i = 1; i < n; i++)
    {
        sum = sum + f(a + h * i);
    }
    area = h * sum;
    printf("The area under the curve within the limit is :\n%f", area);
    return 0;
}