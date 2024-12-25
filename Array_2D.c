#include <stdio.h>

int main()
{

    int i, j;
    int m = 3, n = 3, a = 0;
    int sum = 0;

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    if (m == n)
    {

        printf("\nThe matrix is : \n\n");

        for (i = 0; i < m; ++i)
        {

            for (j = 0; j < n; ++j)
            {

                printf(" %d", matrix[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; ++i)
        {

            sum = sum + matrix[i][i];
            a = a + matrix[i][m - i - 1];
        }
        printf("\nMain diagonal elements sum is : %d\n", sum);
        printf("Off-diagonal elements sum is : %d\n\n", a);
    }
    else
        printf("This is not a square matrix\n");

    return 0;
}