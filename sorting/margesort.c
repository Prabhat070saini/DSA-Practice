#include <stdio.h>
void marge(int *A, int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int b[h + 1];
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            b[k] = A[i];
            i++;
        }
        else
        {
            b[k] = A[j];
            j++;
        }
        k++;
    }


    while (i <= mid)
    {
        b[k] = A[i];
        i++;
        k++;
    }
    
    while (j <= h)
    {
        b[k] = A[j];
        k++;
        j++;
    }

    for (int k = l; k <= h; k++)
    {
        A[k] = b[k];
    }
}
void margesort(int *A, int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        margesort(A, l, mid);
        margesort(A, mid + 1, h);
        marge(A, l, mid, h);
    }
}
int main()
{
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    int A[size];
    printf("Enter the  element\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }

    int length = sizeof(A) / sizeof(A[0]);
    margesort(A, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}