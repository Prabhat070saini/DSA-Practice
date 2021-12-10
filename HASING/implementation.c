#include <stdio.h>
// 50, 700, 76, 85, 92, 73, 101.
void Display(int *Ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (Ar[i] == -1)
        {
            printf("key:%d|value:\n", i);
            continue;
        }

        printf("key:%d|value:%d\n", i, Ar[i]);
    }
}
void Hashmap(int *A, int size, int n)
{
    int key = 0, value = 0;
    int i = 0;
    printf("Enter the values\n");
    for (int j = 0; j < n; j++)
    {
        i = 0;
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
    int size = 10;
    int n, j = 0;
    printf("Enter the number of value which you want to store\n");
    scanf("%d", &n);
    int hashmap[size];
    for (int i = 0; i < size; i++)
    {
        hashmap[i] = -1;
    }

    Hashmap(hashmap, size, n);

    Display(hashmap, size);
    int search;
    scanf("%d", &search);
    int key = 0;
    for (int i = 0; i < size; i++)
    {
        j = 0;
    labale:
        key = (search + j) % size;
        if (hashmap[key] == search)
        {
            printf("found");
            break;
        }
        else
        {
            if (key == size - 1)
            {
                printf("Not found");
                break;
            }
            j++;
            goto labale;
        }
        if (i == size - 1)
        {
            printf("Not found");
        }
    }

    return 0;
}