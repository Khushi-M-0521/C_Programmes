#include<stdio.h>
#include<stdlib.h>
struct list
{
    int info;
    struct list *next;
};
typedef struct list *node;
node f=NULL,r=NULL,l1=NULL,l2=NULL;
void push(int x)
{
    node new;
    new=(node)malloc(sizeof(node));
    new->info=x;
    new->next=l1;
    l1=new;
}
void pop()
{
    node temp=l1;
    if(l1==NULL)
        printf("Underflow\n");
    else
    {
        printf("Popped : %d\n",l1->info);
        l1=l1->next;
        free(temp);
    }
}
void displayStack()
{
    node p=l1;
    if(p==NULL)
        printf("Stack is empty\n");
    else
    {
        printf("Stack elements: ");
        while(p!=NULL)
        {
            printf("%d ",p->info);
            p=p->next;
        }
        printf("\n");
    }
    free(p);
}
void SLL_Stack()
{
    int choice=0,item;
    printf("\n*********** Stack Operations ***********\n");
    printf("Choose one from the following: \n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n\n");
    while (choice!=4)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter an item: ");
                    scanf("%d",&item);
                    push(item);
                    printf("Item pushed\n");
                    break;
            case 2: pop();
                    break;
            case 3: displayStack();
                    break;
            case 4: printf("Exit...\n");
                    break;
            default: printf("Invalid choice\n");
        }
    }
}
void searchStack()
{
    node p=l1;
    int item,i=0,flag=0;
    if(p==NULL)
        printf("Empty Stack\n");
    else
    {
        printf("Enter the key to be found: ");
        scanf("%d",&item);
        while(p!=NULL)
        {
            if(p->info==item)
            {
                flag=1;
                break;
            }
            i++;
            p=p->next;
        }
        if(flag==0)
            printf("Element not found\n");
        else
            printf("Element found at position: %d\n",i+1);
    }
}
void enqueue(int x)
{
    node new;
    new=(node)malloc(sizeof(node));
    new->info=x;
    new->next=NULL;
    if(f==NULL && r==NULL)
        f=r=new;
    else
    {
        r->next=new;
        r=new;
    }
}
void dequeue()
{
    node temp=f;
    if(f==NULL)
        printf("Underflow\n");
    else
    {
        printf("Dequeued element: %d\n",f->info);
        f=f->next;
        free(temp);
    }
}
void displayQueue()
{
    node p=f;
    if(f==NULL)
        printf("Empty Queue\n");
    else
    {
        printf("Queue: ");
        while(p!=NULL)
        {
            printf("%d ",p->info);
            p=p->next;
        }
        printf("\n");
    }
}
void SLL_Queue()
{
    int choice=0,item;
    printf("\n*********** Queue Operations ***********\n");
    printf("Choose one from the following: \n");
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\n");
    while (choice!=4)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter an item: ");
                    scanf("%d",&item);
                    enqueue(item);
                    printf("Inserted\n");
                    break;
            case 2: dequeue();
                    break;
            case 3: displayQueue();
                    break;
            case 4: printf("Exit...\n");
                    break;
            default: printf("Invalid choice\n");
        }
    }
}
node formList(node l)
{
    node p,prev;
    int n,i;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    l=NULL;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        p=(node)malloc(sizeof(node));
        scanf("%d",&p->info);
        p->next=NULL;
        if(l==NULL)
            l=p;
        else
            prev->next=p;
            prev=p;
    }
    return l;
}
void concatenate()
{
    node ptr;
    printf("create list 1 \n");
    l1=formList(l1);
    printf("create list 2 \n");
    l2=formList(l2);
    //l2=l1;
    ptr=l1;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=l2;
    ptr=l1;
    printf("Result: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
   // printf("%d\n",ptr->info);
}
void main()
{
    int choice;
    while(1)
    {
        printf("1. SLL Stack\n2. Search Stack\n3. SLL Queue\n4. Concatenate\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: SLL_Stack();
            break;
        case 2:searchStack();
                break;
        case 3: SLL_Queue();
                break;
        case 4: concatenate();
                break;
        case 5: exit(0);
        default:printf("Invalid choice\n");
        }
    }
}