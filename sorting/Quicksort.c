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
        while (pivot <= A[i])
        {
            i++;
        }
        while (pivot > A[j])
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
    int A[6] = {
        1,
        2,
        10,
        3,
        0,
    };
    int length = sizeof(A) / sizeof(A[0]);
    Quicksort(A, 0, length);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    // printf("%d",lenght);

    return 0;
}