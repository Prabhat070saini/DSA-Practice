#include <stdio.h>
void swap(int *A, int a, int b)
{
    int c;
    c = A[a];
    A[a] = A[b];
    A[b] = c;
}
int partition(int l, int h, int *A)
{
    int pivot = A[l];
    int i = l, j = h;
    while (i < j)
    {
        while (pivot >= A[i])
        {
            i++;
        }
        while (pivot < A[j])
        {
            j--;
        }
        if (i < j)
        {
            swap(A, i, j);
        }
    }
    swap(A, l, j);
    return j;
}

void Quicksort(int *A, int l, int h)
{
    if (l < h)
    {
        int pivot = partition(l, h, A);
        Quicksort(A, l, pivot - 1);
        Quicksort(A, pivot + 1, h);
    }
}
int main()
{
    int size;
    // printf("Enter the size of array\n");
    scanf("%d", &size);
    int A[size];
    // printf("Enter the  element\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }

    int length = sizeof(A) / sizeof(A[0]);
    Quicksort(A, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}