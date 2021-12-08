#include <stdio.h>
int main()
{
    int matrix[25][25];
    int r, c;
    printf("Enter the no of row and cloumn\n");
    scanf("%d %d",&r,&c);
    printf("Enter the element of matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
int m=0,n=0;
while(m<r&&n<c)
{
    for (int i = m; i < c; i++)
    {
       printf("%d",matrix[m][i]);
    }
    m++;
    for (int i = m; i < r; i++)
    {
         printf("%d",matrix[i][c-1]);
    }
    c--;
    for (int  i = c-1; i <= n; i--)
    {
         printf("%d",matrix[r-1][i]);
    }
    r--;
    for (int  i = r-1; i < m; i)
    {
        printf("%d",matrix[i][n]);
    }
    n++;
    
    
}
    return 0;
}