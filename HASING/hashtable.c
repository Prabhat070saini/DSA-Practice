#include <stdio.h>
struct hashtable
{
    int value;
    int key;
};
typedef struct hashtable h;
int main()
{
    int size,temp;
    printf("Enter the number of value which you want to store\n");
    scanf("%d", &size);
    h hashmap[size];
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&temp);
        hashmap[temp%size].value=temp;
        hashmap[temp%size].key=temp%size;

    }
    
    for (int  i = 0; i < size; i++)
    {
        printf("key:%d |\tvalue:%d\n",hashmap[i].key,hashmap[i].value);
    }
    

    return 0;
}