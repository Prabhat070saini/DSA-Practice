#include<stdio.h>
int insert(int *A, int size, int index, int max, int element)
{
    if (size >= max)
    {
        return 0;
    }

    for (int i = size; i >= index; i--)
    {
        A[i + 1] = A[i];
    }
    // printf("%d\n", A[6]);
    A[index] = element;
    return 1;
}
int main()
{
    int array[100];
    int size;
    printf("Enter the size of array\n");
      scanf("%d",&size);
     
     printf("Enter the element of array\n");
     for (int  i = 0; i < size; i++)
     {
         scanf("%d",&array[i]);
     }
     int indx,element;
     printf("Enter the index and element you insert");
     scanf("%d %d",&indx,&element);
     insert(array,size,indx,100,element);
     for (int i = 0; i < size+1; i++)
     {
         printf("%d ",array[i]);
     }
     
 return 0;
}