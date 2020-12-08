#include <stdio.h>
int fact(int i)
{
    if (i > 0)
        return i * fact(i - 1);
    else
        return 1;
}
float factop(float p, int i)
{
    if (i > 0)
    {
        if (i > 1)
            return (p - i + 1) * factop(p, i - 1);
        else
            return p;
    }
    else
        return 1;
}
int main()
{
    int n, i, j;
    float data[2][10], t_arr[10], del_y[10], test, p, sum = 0;
    printf("Enter the number of data you want to input:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("x=");
        scanf("%f", &data[0][i]);
        printf("y=");
        scanf("%f", &data[1][i]);
        t_arr[i] = data[1][i];
    }
    for (i = 0; i < n; i++)
    {
        del_y[i] = t_arr[0];
        for (j = 0; j < n - i - 1; j++)
        {
            t_arr[j] = t_arr[j + 1] - t_arr[j];
        }
    }
    printf("Enter the value of x ");
    scanf("%f", &test);
    p = (test - data[0][0]) / (data[0][1] - data[0][0]);
    for (i = 0; i < n; i++)
    {
        sum += (factop(p, i) * del_y[i] / (float)fact(i));
        printf("\n%f\n", del_y[i]);
    }
    printf("The y corresponding to the x is\n y=%f", sum);
    return 0;
}