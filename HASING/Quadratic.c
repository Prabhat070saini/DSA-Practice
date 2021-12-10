#include <stdio.h>
//50, 700, 76, 85, 92, 73, 101. 
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
    int i = 0,c1=1,c2=1;
    for (int j = 0; j < size; j++)
    {
        i=0;
        scanf("%d", &value);
    lable:
        key = (value + (c1*i)+ (c2*i*i)) % size;
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