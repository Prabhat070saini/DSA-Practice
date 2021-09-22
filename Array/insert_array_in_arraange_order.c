#include<stdio.h>
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
void arrangeinsert(int *A, int size, int max, int element)
{
    int store;
    for (int i = 0; i < size; i++)
    {
        if (A[i] > element)
        {
            store = i;
        // printf("stire %d\n",store);
            break;
        }
    }
    for (int i = size; i >= store; i--)
    {
        A[i + 1] = A[i];
    }
    A[store] = element;
}
int main(){
int array[100];
    int size;
    printf("Enter the size of array\n");
      scanf("%d",&size);
     
     printf("Enter the element of array\n");
     for (int  i = 0; i < size; i++)
     {
         scanf("%d",&array[i]);
     }
     int element;
     printf("Enter the element you insert\n");
     scanf("%d",&element);
     bubblesort(array,size);
     arrangeinsert(array,size,100,element);
     for (int  i = 0; i < size+1; i++)
     {
         printf("%d ",array[i]);
     }
     
 return 0;
}