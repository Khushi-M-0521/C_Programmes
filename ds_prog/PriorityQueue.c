#include<stdio.h>
#include<stdlib.h>
#define max 4
int q[max];
int rear=-1,front=-1;
void Enqueue()
{
    int item,j;
    if(rear==max-1)
        printf("Queue Overflow\n");
    else
    {
        if(front==-1)
            front=0;
        j=rear;
        printf("Enter the element to be inserted: ");
        scanf("%d",&item);
        while(j>=front&&item<q[j])
         {   q[j+1]=q[j];
            j--;
         }
        q[j+1]=item;
        rear++;
    }
}
void Dequeue()
{
    if(front==-1||front>rear)
        printf("Queue Underflow\n");
    else
        printf("Element deleted=%d\n",q[front++]);
}
void Display()
{
    int i;
    if(front==-1||rear<front)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue Elements are: ");
        for(i=front;i<=rear;i++)
            printf("%d ",q[i]);
        printf("\n");
    }
}
void main()
{
     int choice;
    printf("Priority Queue Operations\n");
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