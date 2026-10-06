#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int element)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
        return;
    }

    if(front == -1)
    {
        front = 0;
    }
    rear ++;
    queue[rear] = element;
    return;
}

void dequeue()
{
        if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    int element = queue[front];
    printf("Dequeued item is %d\n", element);
    front ++;
    return element;
}

void display()
{
    int i;
    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queued elements are: ");
     for (i = front; i <= rear; i++)
     {
        printf("%d", queue[i]);
     }
     printf("\n");
}

int main()
{
    int ch = 0;
    while(ch != 4)
    {
        printf("1. Enqueue\n2. Dqueue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            {
                int element;
                printf("Enter the element to be insserted: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }

            case 3:
            display();
            break;

            case 4:
            exit(0);

            default:
            printf("Invalid choice\n");
        }
    }
}

