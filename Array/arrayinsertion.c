#include <stdio.h>
void print(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
}
int insert(int *A, int size, int index, int max, int element)
{
    if (size >= max)
    {
        return 0;
    }

    for (int i = size; i >= index; i--)
    {
      //  printf("%d",A[i+1]);
        // break;
        A[i + 1] = A[i];
    }
    // printf("%d\n", A[6]);
     A[index] = element;
    return 1;
}
// void arrangeinsert(int *A, int size, int max, int element)
// {
//     int store;
//     for (int i = 0; i < size; i++)
//     {
//         if (A[i] > element)
//         {
//             store = i;
//         printf("stire %d\n",store);
//             break;
//         }
//     }
//     for (int i = size; i >= store; i--)
//     {
//         A[i + 1] = A[i];
//     }
//     A[store] = element;
// }
int main()
{
    int array[7] = {1, 2, 3, 4, 5, 8};
    int size = 6,store;
    print(array, 6);
    store = insert(array, size, 3, 7, 7);
    size++;printf("\n");
    if (store)
    {
        print(array, size);
    }
    else
        printf("not insert");
    // printf("\n");
    // printf("assending insertion \n");
//    int  aarray[7] = {1, 2, 3, 4, 5, 8};
    // arrangeinsert(aarray, 6 , 7, 6);
    // int ad=7;
    // print(aarray,ad);
    return 0;
}