#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of Element in array\n");
    scanf("%d", &n);
    int A[n];
    printf("Enter the element of array\n");
    int co0 = 0, co1 = 0, co2 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] == 0)
        {
            co0++;
        }
        else if (A[i] == 1)
        {
            co1++;
        }
        else
        {
            co2++;
        }
    }
    int a, b;
    printf("sorted array\n");
    for (int i = 0; i < co0; i++)
    {
        A[i] = 0;
    }
    a = co0 + co1;
    for (int i = co0; i < a; i++)
    {
        A[i] = 1;
    }
    b = a + co2;
    for (int i = a; i < b; i++)
    {
        A[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}