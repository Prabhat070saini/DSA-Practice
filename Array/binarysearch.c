#include <stdio.h>
void bubblesort(int *A, int n)
{

    int temp;
    int sorted;
    for (int i = 0; i < n - 1; i++)

    {
        //printf("number pof passes are:%d\n", i + 1);
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
void printarray(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
int main()
{
    int n;
    printf("Ente the lenght of array\n");
    scanf("%d", &n);
    int arr[n];
    int left = 0, lenght = sizeof(arr) / sizeof(arr[0]), right = lenght - 1;
    printf("Enter the element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);

     int searching,flag=0;
     printf("Enter the number which you want to search\n");
     scanf("%d",&searching);
          // loop for binary search 
   
     while (left<=right)
     {
           int middle = (left + right)/2;
         if (arr[middle]==searching)
         {
            flag++;
               break;
         }
         else if (searching<arr[middle])
         {
            right=middle-1;
         }
         else
         left=middle+1;
         
         
     }
     if (flag)
     {
         printf("found");
     }
     else
     printf("not found");
    
    return 0;
}