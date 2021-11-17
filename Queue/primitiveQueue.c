#include <stdio.h>
int size = 10, frount = -1, rare = -1;
int co = 0;

void enqueue(int data, int *Queue)
{
    if (rare == size - 1)
    {
        printf("overflow\nelement not enqueue\n");
    }
    else
    {
        if (co == 0)
        {
            frount++;
            co++;
        }

        rare++;

        Queue[rare] = data;
    }
}
void dequeue(int *Queue)
{
    if (rare == -1)
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        printf("element dequeue is : %d\n", Queue[frount]);
        frount++;
        return;
    }
}
void isempty(int *Queue)
{
    if (rare == -1)
    {
        printf("isempty\n");
        return;
    }
    return;
}
void isfull(int *Queue)
{
    if (rare == size - 1)
    {
        printf("isfull\n");
        return;
    }
    return;
}
void pick(int *Queue)
{
    if (rare == -1)
    {
        printf("Queue is empty\n");
    }
    else if (frount > size - 1)
    {
        printf("Queue is empty\n");
    }
    else
    {

        printf("pick of Queue is %d", Queue[frount]);
        return;
    }
}
int main()
{
    int data;
    int queue[size];
    isempty(queue);
    printf("Enter the 10 enqueued element\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data);
        enqueue(data, queue);
    }
    isfull(queue);
    printf("Enter the  enqueued element\n");
    scanf("%d", &data);
    enqueue(data, queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    pick(queue);

    return 0;
}