
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int temp_stack[MAX_SIZE];
int top = -1;
int temp_top = -1;

void push(int element)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack overflow\n");
        return;
    }

    top++;
    stack[top] = element;

}

int pop()
{
    if (top < 0)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    int element = stack[top];
    top--;
    return element;
}

void sort_stack()
{
    while (top >= 0)
    {
        int element = pop();
        while (temp_top >= 0 && temp_stack[temp_top] < element)
        {
            push(temp_stack[temp_top]);
            temp_top--;
        }
        temp_top++;
        temp_stack[temp_top] = element;
    }
    while (temp_top >= 0)
    {
        push(temp_stack[temp_top]);
        temp_top--;
    }
}

void print_stack() {
    printf("Stack: ");
    int i;
    for ( i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(4);
    push(5);
    push(3);
    push(1);
    push(2);

    printf("Before sorting:\n");
    print_stack();

    sort_stack();

    printf("After sorting:\n");
    print_stack();

    return 0;
}
