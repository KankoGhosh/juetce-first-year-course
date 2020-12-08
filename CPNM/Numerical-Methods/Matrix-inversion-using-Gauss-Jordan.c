#include <stdio.h>
int main()
{
    int i, j, k;
    float a[5][10] = {{0}, {0}, {0}, {0}, {0}}, temp, tempkk, x, y, z, b[6], sum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%f", &a[i][j]);
    }
    a[0][3] = a[1][4] = a[2][5] = 1;
    for (k = 0; k < 3; k++)
    {
        if (a[k][k] == 0)
        {
            if (a[k + 1][k] != 0)
                for (j = 0; j < 6; j++)
                {
                    temp = a[k][j];
                    a[k][j] = a[k + 1][j];
                    a[k + 1][j] = temp;
                }
            else
                break;
        }
        tempkk = a[k][k];
        for (j = 0; j < 6; j++)
        {
            a[k][j] = a[k][j] / tempkk;
        }
        for (i = k + 1; i < 3; i++)
        {
            temp = a[i][k];
            for (j = 0; j < 6; j++)
            {
                a[i][j] = a[i][j] - a[k][j] * temp;
            }
        }
    } /*Row reduced echolen form*/

    for (i = 2; i > 0; i--)
    {
        for (j = 0; j < 6; j++)
        {
            sum = 0;
            for (k = 2; k >= i; k--)
            {
                sum = sum + a[k][j] * a[i - 1][k];
            }
            b[j] = sum;
        }

        for (j = 0; j < 6; j++)
            a[i - 1][j] = a[i - 1][j] - b[j];
    } /*Row reduced normal form*/

    printf("\n\nThe TRANSFORMED augmented matrix is:\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("| ");
        for (j = 0; j < 6; j++)
            printf("%f\t", a[i][j]);
        printf(" |");
        printf("\n");
    }

    return 0;
}