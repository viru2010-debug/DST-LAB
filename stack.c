#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX -1)
    {
        printf("Stack overflow");
        return;
    }
    top++;
    stack[top]=data;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
        exit(0);
    }
    int value = stack[top];
    top--;
    return value;
}

void display()
{
    int i;
    for (i=top; i>=0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int ch, data;
    while(1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit     \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            printf("Enter the value to be pushed: ");
            scanf("%d",&data);
            push(data);
            break;

            case 2:
            {
                int value = pop();
                printf("The popped item is %d\n", value);
                break;
            }

            case 3: 
            display();
            break;

            case 4: 
            exit(0);

            default: 
            printf("Invalid choice");
        }
    }
}