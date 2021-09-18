#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int Total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myarray *array, int Tsize, int Usize)
{
    array->Total_size = Tsize;
    array->used_size = Usize;
    array->ptr = (int *)malloc(Tsize * sizeof(int));
}
void inputarray(struct myarray *array)
{
    for (int i = 0; i < array->used_size; i++)
    {
        //printf("Enter the element of array");
        scanf("%d", &(array->ptr)[i]);
    }
}
void printarray(struct myarray *array)
{
    for (int i = 0; i < array->used_size; i++)
    {
        printf("%d\n", (array->ptr)[i]);
    }
}
int main()
{
    struct myarray marks;
    int Tsize = 15, Usize;
    printf("Enter the size of array");
    scanf("%d",&Usize);
    createarray(&marks, Tsize, Usize);
   printf("running take inputarray");
    inputarray(&marks);
    printf("running take outputarray");
    printarray(&marks);
    
    return 0;
}