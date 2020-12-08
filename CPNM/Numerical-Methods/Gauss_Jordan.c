#include <stdio.h>
int main()
{
    int i, j, k;
    float a[5][5], temp, tempkk, x, y, z, b[5], sum;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the coefficients of eq %d\n", i + 1);
        for (j = 0; j < 3; j++)
            scanf("%f", &a[i][j]);
        printf("Enter the constant term of the equaioin:\n");
        scanf("%f", &a[i][3]);
    }

    for (k = 0; k < 3; k++)
    {
        if (a[k][k] == 0)
        {
            if (a[k + 1][k] != 0)
                for (j = 0; j < 4; j++)
                {
                    temp = a[k][j];
                    a[k][j] = a[k + 1][j];
                    a[k + 1][j] = temp;
                }
            else
                break;
        }
        tempkk = a[k][k];
        for (j = 0; j < 4; j++)
        {
            a[k][j] = a[k][j] / tempkk;
        }
        for (i = k + 1; i < 3; i++)
        {
            temp = a[i][k];
            for (j = 0; j < 4; j++)
            {
                a[i][j] = a[i][j] - a[k][j] * temp;
            }
        }

    } /*Row reduced echolen form*/

    for (i = 2; i > 0; i--)
    {
        for (j = 0; j < 4; j++)
        {
            sum = 0;
            for (k = 2; k >= i; k--)
            {
                sum = sum + a[k][j] * a[i - 1][k];
            }
            b[j] = sum;
        }
        for (j = 0; j < 4; j++)
            a[i - 1][j] = a[i - 1][j] - b[j];
    } /*Row reduced normal form*/

    printf("\n\nThe TRANSFORMED augmented matrix is:\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("| ");
        for (j = 0; j < 4; j++)
            printf("%f\t", a[i][j]);
        printf(" |");
        printf("\n");
    }
    printf("\nThe solution of the equation is:\nx=%f\ny=%f\nz=%f\n", a[0][3], a[1][3], a[2][3]);
    return 0;
}