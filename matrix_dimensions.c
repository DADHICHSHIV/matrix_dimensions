#include <stdio.h>
int main()
{
    int row, colum, i, j, k, sum;
    printf("Enter two dimention array size:\n");
    scanf("%d%d", &row, &colum);
    printf("rows:%d colum:%d", row, colum);

    int metrix_a[row][colum];
    int metrix_b[row][colum];
    int multy[row][colum];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("Enter metrix_a[%d][%d]", i, j);
            scanf("%d", &metrix_a[i][j]);
        }
    }

    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("Enter metrix_b[%d][%d]", i, j);
            scanf("%d", &metrix_b[i][j]);
        }
    }

    printf(" metrix_a two dimention array element:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d ", metrix_a[i][j]);
        }
        printf("\n");
    }

    printf("metrix_b two dimention array element:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d ", metrix_b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            sum = 0;
            for (k = 0; k < row; k++)
            {

                sum = sum + metrix_a[i][k] * metrix_b[k][j];
                multy[i][j] = sum;
            }
        }
    }

    printf("\n\n metrix_a * metrix_b = :\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colum; j++)
        {

            printf("%d ", multy[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}