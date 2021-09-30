#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of element of array\n");
    scanf("%d", &n);
    int arrray[n];
    printf("Enter the  element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrray[i]);
    }
    int store;
    store = arrray[0];
    int co = 0, jump = 0;
    while (co < n-1)
    {
        for (int i = 0; (i < store && i <=n); i++)
        {
            co++;
        }
        
        jump++;
        store = arrray[co];
        

    }

    printf("jump: %d", jump);
    return 0;
}