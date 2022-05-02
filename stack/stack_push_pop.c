#include <stdio.h>
int size = 5, top = -1;
void push(int data, int *stack)
{
    if (top == size - 1)
    {
        printf("stack are full\n");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
void pop(int *stack)
{
    int data;
    if (top == -1)
    {
        printf("stack are Empty\n");
        return;
    }
    else
    {
        data = stack[top];
        printf("POP DATA %d",data);
        top--;
        return;
    }
}
void pick(int *stack)
{
    printf("Top element of stack is %d", stack[top]);
    return;
}
void isempty()
{
    if (top == -1)
    {

        printf("stack are empty\n");
        return;
    }
    return;
}
void isfull()
{
    if (top == size - 1)
    {
        printf("stack are full");
        return;
    }
    return;
}
int main()
{
    int stack[size];
    isempty();
    printf("Enter the push element\n");
    int data;
    scanf("%d", &data);
    push(data, stack);
    scanf("%d", &data);
    push(data, stack);
    scanf("%d", &data);
    push(data, stack);
    scanf("%d", &data);
    push(data, stack);
    scanf("%d", &data);
    push(data, stack);
    scanf("%d", &data);
    push(data, stack);
    pop(stack);
    pop(stack);
    isempty();
    isfull();
    pick(stack);

    return 0;
}