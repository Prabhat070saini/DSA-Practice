#include <stdio.h>
void print(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void input(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
}
int main()
{
    int n1, n2, S, l = 0;
    printf("Enter the number of element in first set and second set \n");
    scanf("%d%d", &n1, &n2);
    S = n1 + n2;
    int k = 0;
    // printf("%d ", k);

    int A1[n1], A2[n2], R[S];
    printf("Enter the  elements of first set\n");
    input(A1, n1);
    printf("Enter the  elements of second set\n");
    input(A2, n2);
    for (int i = 0; i < n1; i++)
    {
        R[k] = A1[i];
        k++;
    }
    // printf("%d ", k);
    // printf("check\n");
    // print(R, n2);
    for (int i = 0; i < n2; i++)
    {
        int co = 0;
        for (int j = 0; j < n1; j++)
        {

            if (A1[i] != A2[j])
            {
                co++;
                
            }
        }
        if (co == n1)
        {
            R[k] = A2[i];
            k++;
        }
    }
    // printf("%d\n ", k);
    printf("Set 1\n");
    print(A1, n1);
    printf("Set 2\n");
    print(A2, n2);
    // print(R,k);
    printf("Union\n");
    print(R, k);
    return 0;
}