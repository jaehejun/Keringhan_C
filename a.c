#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
    if (top == MAX_SIZE - 1)
	{
        printf("Stack overflow! Cannot push %d\n", value);
        return;
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
	{
        printf("Stack underflow! Cannot pop\n");
        return -1;
    }
    return stack[top--];
}

int main()
{
    push(10);
    push(20);
    push(30);

    printf("Popped element: %d\n", pop()); // Output: Popped element: 30
    printf("Popped element: %d\n", pop()); // Output: Popped element: 20
    printf("Popped element: %d\n", pop()); // Output: Popped element: 10
    printf("Popped element: %d\n", pop()); // Output: Stack underflow! Cannot pop

    return 0;
}