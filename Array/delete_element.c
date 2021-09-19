#include <stdio.h>
void delete (int *A, int size, int indx)
{
    for (int  i = indx; i < size-1; i++)
    {
        A[i]=A[i+1];
    }
    
}
void print(int *A,int size)
{
    for (int  i = 0; i < size; i++)
    {
        printf("%d",A[i]);
    }
    
}
int main()
{
    int arr[10], size;
    printf("Enter the size of element\n");
    scanf("%d", &size);
    printf("Enter nthe element of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    print(arr,size);
    printf("\n");
    int indx;
    printf("Enter the index which delete you\n");
    scanf("%d", &indx);
    delete(arr,size,indx);
    size--;
    
     print(arr,size);

    return 0;
}