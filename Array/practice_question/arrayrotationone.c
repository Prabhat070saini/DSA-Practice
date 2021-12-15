#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of Element in array\n");
    scanf("%d", &n);
    int A[n];
    printf("Enter the element of array\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int a=A[n-1];
    for (int  i = n-1; i >= 0; i--)
    {
        A[i]=A[i-1];
    }
    A[0]=a;
    for (int i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }
    
    
    return 0;
}