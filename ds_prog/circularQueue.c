#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1;
int cq[max];
void Enqueue()
{
    int item;
    if((front==0 && rear==max-1)||front==rear+1)
        printf("\nCircular queue is full\n");
    else 
    {
        printf("Enter the element to be inserted in teh circular queue: ");
        scanf("%d",&item);
        if(front==-1)
            front=0;
        rear=(rear+1)%max;
        cq[rear]=item;
        
    }
}
void Dequeue()
{
    if(front==-1 && rear==-1)
        printf("\nCircular Queue is empty\n");
    else if(front==rear)
    {
        printf("\n The dequeued element =%d",cq[front]);
        front=-1;
        rear=-1;   
    }
    else
    {
        printf("\n The dequeued element =%d",cq[front]);
        front=(front+1)%max;
    }
}
void Display()
{
    int i;
    if(front==-1 && rear==-1)
        printf("\nThe Circular queue is empty\n");
    else
    {
        printf("Elements in the circular queue are: ");
        if(front>rear)
        {
            for(i=front;i<=max-1;i++)
                printf("%d ",cq[i]);
            for(i=0;i<=rear;i++)
                printf("%d ",cq[i]);
        }
        else
        {
            for(i=front;i<=rear;i++)
                printf("%d ",cq[i]);
        }
    }
}
void main()
{
    int choice;
    printf("Circular Queue Operations\n");
    printf("1. INSERT\n2. DELETE \n3. DISPLAY \n4.EXIT\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:Enqueue();
                    break;
            case 2:Dequeue();
                    break;
            case 3:Display();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}