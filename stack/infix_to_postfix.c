#include <stdio.h>
#include <ctype.h>
int size = 8, top = -1;
void push(char data, char *stack)
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
        // data = stack[top];
        top--;
        return;
    }
}
void pick(char *stack)
{
    printf("Top element of stack is %c\n", stack[top]);
    return;
}
void isempty()
{
    if (top == -1)
    {

        // printf("stack are empty\n");
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
void tocheck(char *A, int n)
{
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = A[i];

        if (isalnum(ch))
        {
            printf("%c", ch);
        }
        else
        {
            push(ch, A);
        }
    }
}
void prec(char m, char n)
{
    if m==
}
int main()
{

    char stack[size];
    isempty();
    // printf("Enter the push element\n");
    int n = 9;
    // printf("Enter the no of expression\n");
    // scanf("%d",&n);
    char A[100];
    printf("Enter the expression\n");
    fgets(A, 100, stdin);
    //  for (int  i = 0; i < n; i++)
    // {
    //     printf("%c",A[i]);
    // }
    tocheck(A, n);
    // tocheck(A,n);
    // for (int  i = 0; i < n; i++)
    // {
    //     printf("%d",A[i]);
    // }

    return 0;
}