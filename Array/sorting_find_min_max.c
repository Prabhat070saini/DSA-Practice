#include<stdio.h>
void printarray(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
void bubblesort(int *A, int n)
{

    int temp;
    int sorted;
    for (int i = 0; i < n - 1; i++)

    {
       // printf("number pof passes are:%d\n", i + 1);
        sorted = 1;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                sorted = 0;
            }
        }
        if (sorted)
        {
            return;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    bubblesort(array,n);
    printf("minimum = %d\nmaximum = %d",array[0],array[n-1]);

 return 0;
}