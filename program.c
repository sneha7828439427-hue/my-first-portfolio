#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    int item;

    printf("Enter item: ");
    scanf("%d", &item);

    if (top == MAX - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = item;

        printf("Item inserted = %d", stack[top]);
    }

    return 0;
}