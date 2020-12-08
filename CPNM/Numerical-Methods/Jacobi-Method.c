#include <stdio.h>
int mod(int x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}
int main()
{
    float a[3][4], x, y, z, temp;
    int row, col, loop, *check, sum;
    printf("Enter the info of the equations:\n");
    for (row = 0; row < 3; row++)
    {
        printf("Enter the coefficient of the equation %d:\n", row + 1);
        for (col = 0; col < 3; col++)
        {
            scanf("%f", &a[row][col]);
        }
        printf("Enter the constant terms:\n");

        scanf("%f", &a[row][3]);
    }
    /*check of the condition*/
    check = (int *)malloc(3 * sizeof(int));
    for (row = 0; row < 3; row++)
    {
        temp = mod(a[row][0]) + mod(a[row][1]) + mod(a[row][2]);
        sum = 0;
        for (col = 0; col < 3; col++)
            sum += (2 * mod(a[row][col]) > temp); //ifthe condition is true then it return 1 otherwise 0
        check[row] = sum;
        printf("%d\n", sum);
    }

    if (check[0] == 1 && check[1] == 1 && check[2] == 1)
    {
        free(check);
        x = y = z = 0;
        for (loop = 0; loop < 10; loop++)
        {
            x = (a[0][3] - a[0][1] * y - a[0][2] * z) / a[0][0];
            y = (a[1][3] - a[1][0] * x - a[1][2] * z) / a[1][1];
            z = (a[2][3] - a[2][0] * x - a[2][1] * y) / a[2][2];
        }
        printf("x=%f\ny=%f\nz=%f", x, y, z);
    }
    else
    {
        free(check);
        printf("The condition of the equation is not satisfied\n");
    }
    return 0;
}