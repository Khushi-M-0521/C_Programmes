#include<stdio.h>
#define size 5
int dq[size],front=-1,rear=-1;
void insert_rear()
{
    int item;
    if((front==0&&rear==size-1)|| front==rear+1)
    {   printf("QueueOverflow\n");
        return;
    }
    if(front==-1)
        front=rear=0;
    else if(rear==size-1)
        rear=0;
    else
        rear++;
    printf("Enter the item to be inserted: ");
    scanf("%d",&item);
    dq[rear]=item;
}
void insert_front()
{
    int item;
    if((front==0 && rear==size-1)|| front==rear+1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if(front==-1)
        front=rear=0;
    else if(front==0)
        front=size-1;
    else
        front--;
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    dq[front]=item;
}
void delete_front()
{
    if(front==-1)
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Element deleted from queue=%d\n",dq[front]);
    if(front==rear)
        front=rear=-1;
    else if(front==size-1)
        front=0;
    else
        front++;
}
void delete_rear()
{
    if(front==-1)
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Element deleted=%d\n",dq[rear]);
    if(front==rear)
        front=rear=-1;
    else if(rear==0)
        rear=size-1;
    else
        --rear;
}
void display()
{
    int fp=front,rp=rear;
    if(front==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    if(fp<=rp)
        while (fp<=rp)
            printf("%d ",dq[fp++]);
    else
    {
        while (fp<=size-1)
            printf("%d ",dq[fp++]);
        fp=0;
        while (fp<=rp)
            printf("%d ",dq[fp++]);
    }
    printf("\n");
}
void inputRestricted()
{
    int choice;
    printf("\n1. Insert at rear\n2. Delete from front\n3. Delete from rear\n4. Display\n5. Quit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:insert_rear();
            break;
        case 2:delete_front();
            break;
        case 3:delete_rear();
            break;
        case 4:display();
            break;
        case 5:break;
        default:printf("Invalid Choice\n");
        }
    } while (choice!=5);
}
void outputRestricted()
{
    int choice;
    printf("\n1. Insert at rear\n2. Insert at front\n3. Delete from front\n4. Display\n5. Quit\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:insert_rear();
            break;
        case 2:insert_front();
            break;
        case 3:delete_front();
            break;
        case 4:display();
            break;
        case 5:break;
        default:printf("Invalid Choice\n");
        }
    } while (choice!=5);
}
void main()
{
    int choice;
    printf("Double Ended Queue Using Circular Array\n");
    printf("1. Input Restricted deque\n2. Output Restricted deque\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: inputRestricted();
            break;
        case 2: outputRestricted();
            break;
        default:printf("Invald Choice\n");
    }
}