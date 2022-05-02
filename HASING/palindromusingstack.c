#include <stdio.h>
int size = 10, top = -1;
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
int pop(int *stack)
{
    int data;
    if (top == -1)
    {
        printf("stack are Empty\n");
        return 0;
    }
    else
    {
        data = stack[top];
        top--;
        return data;
    }
}
int main()
{
    int stack[size];
    // isempty();
    int num;
    scanf("%d", &num);
    int st = num;
    int rev = 0, c = 0;
    int numck = num;
    while (numck > 0)
    {
        int store = numck % 10;
        rev = rev * 10 + store;
        numck = numck / 10;
    }
    while (rev > 0)
    {
        int sto = rev % 10;

        push(sto, stack);
        rev = rev / 10;
    }
    int temp = 0;
    while (top > -1)
    {
        int value = pop(stack);
        temp = temp * 10 + value;
    }
    if (num == temp)
    {
        printf("Number is Palindrom\n");
    }
    else
    {
        printf("Number is not  Palindrome");
    }

    return 0;
}