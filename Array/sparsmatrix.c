#include <stdio.h>
int main()
{
    int r, c, co = 0;
    printf("Enter the no of row and column\n");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    printf("Enter the element of matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] != 0)
            {
                co++;
            }
        }
        // printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);

        }
        printf("\n");
    }
int sparsmatrix[3][co],k=0;
for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // scanf("%d", &matrix[i][j]);

            if (matrix[i][j] != 0)
            {
               sparsmatrix[0][k]=i;
               sparsmatrix[1][k]=j;
               sparsmatrix[2][k]=matrix[i][j];
               k++;
            }
        }
    }
    printf("compactmatrix are\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < co; j++)
        {
            printf("%d ", sparsmatrix[i][j]);

        }
        printf("\n");
    }
    return 0;
}