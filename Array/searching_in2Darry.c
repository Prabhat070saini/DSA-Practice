#include <stdio.h>
int main()
{
    printf("Enter The dimension of 2Darry\n");
    int n, m, searching = 0, co = 0;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    printf("Enter the %d element of arry\n",n*m);
    //loop for input elements of array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("this is a array\n");
    //loop for print array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number which you want to search in this array \n");
    scanf("%d", &searching);
    //loop for searching element 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == searching)
            {
                co++;
                goto lable;
            }
        }
    }
lable:
    if (co)
    {
        printf("***** Number are present ***** ");
    }
    else
    {
        printf(" ***** Number are not present ***** ");
    }

    return 0;
}