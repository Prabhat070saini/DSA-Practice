#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of row and column of matrix\n");
    scanf("%d%d", &r, &c);
    int matrix[100][100];
    printf("Enter the element pf matrix\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
int k=0,l=0;
while (k<r&&l<c)
{
    for (int i = l; i < c; i++)
    {
        printf("%d ",matrix[k][l]);
    }
    k++;
    for (int  i = k; i < r; i++)
    {
        printf("%d",matrix[k][c-1]);
    }
    
    
    

}

    return 0;
}