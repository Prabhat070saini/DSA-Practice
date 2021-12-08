#include <stdio.h>
void Display(int *Ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("key:%d|value:%d\n", i, Ar[i]);
    }
}
void Hashmap(int *A, int size)
{
    int key = 0, value = 0;
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        scanf("%d", &value);
    lable:
        key = (value + i) % size;
        if (A[key] == -1)
        {
            A[key] = value;
        }
        else
        {
            i++;
            goto lable;
        }
    }
}
int main()
{
    int size;
    printf("Enter the number of value which you want to store\n");
    scanf("%d", &size);
    int hashmap[size];
    for (int i = 0; i < size; i++)
    {
        hashmap[i] = -1;
    }

    Hashmap(hashmap, size);

    Display(hashmap, size);
    int search;
    scanf("%d",&search);
    int key=search%size;
    if (hashmap[key]==search)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
    

    return 0;
}