#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 30
struct List
{
	int id;
	char name[max];
	char branch[max];
	char spl[max];
	struct List *next,*prev;
};
typedef struct List *node;
node f,r;
node getnode(node);
void display(node);

void dllStack();
node push(node);
node pop(node);

void dllQueue();
void enqueue();
void dequeue();

void main()
{
	int choice;
	while(1)
	{
		printf("DLL STACK AND QUEUE OPERATIONS\n1. STACK \n2. QUEUE\n3. EXIT\n");
		printf("Enter your choice main: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: dllStack();break;
			case 2: dllQueue();break;
			case 3:printf("Exit...\n");exit(0);
			default : printf("INvalid Choice\n");
		}
	}
}

node getnode(node q)
{
	printf("Enter the professor's details: \n");
	printf("Enter Professor ID: ");
	scanf("%d",&q->id);
	printf("Enter Professor Name: ");
	//fgets(Name,max*sizeof(char),stdin);
	scanf("%s",q->name);
	// q->id=Id;
	// strcpy(q->name,Name);
	printf("Enter Professor Branch: ");
	scanf("%s",q->branch);
	printf("Enter Professor Specialisation: ");
	scanf("%s",q->spl);

	return q;
}

void display(node topOrf)
{
	node temp=topOrf;
	int count=0;
	if(temp==NULL)
	{
		printf("List is empty\n");
		return;
	}
	while(temp!=NULL)
	{
		//printf("%d\t%s\n",temp->id,temp->name);
		printf("%d\t%s\t%s\t%s\n",temp->id,temp->name,temp->branch,temp->spl);
		temp=temp->next;
		count++;
	}
	printf("\nCount of Nodes: %d\n",count);
}

void dllStack()
{
	int ch;
	node top;
	top=NULL;
	printf("\nSTACK OPERATIONS USING DLL\n1. PUSH \n2. POP\n3. DISPLAY\n4. EXIT\n");
	while(ch !=4)
	{	
		printf("Enter your choice stack: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: top=push(top);break;
			case 2: top=pop(top);break;
			case 3: display(top);break;
			case 4:printf("Exit...\n");break;
			default : printf("INvalid Choice\n");
		}
		
		//ch = 5;
		//printf("%d",ch);
		
	}
}

node push(node top)
{
	node q=(node)malloc(sizeof(struct List));
	q=getnode(q);
	
	if(top==NULL)
	{
		q->next=NULL;
		q->prev=NULL;
		top=q;	
	}
	else
	{
		top->prev=q;
		q->next=top;
		q->prev=NULL;
		top=q;
	}
	return top;
}

node pop(node top)
{
	node temp=top;
	if (top==NULL)
	{	printf("Stack is empty\n");
		return NULL;
	}
	if(top->next==NULL)
		top=NULL;
	else 
	{
		top=top->next;
		top->prev=NULL;
	}
	printf("The popped element is \n");
	//printf("%d\t%s\n",temp->id,temp->name);
	printf("%d\t%s\t%s\t%s\n",temp->id,temp->name,temp->branch,temp->spl);
	free(temp);
	return(top);	
}

void dllQueue()
{
	int ch;
	f=r=NULL;
	while (ch!=4)
    {
		printf("\nQUEUE OPERATIONS USING DLL\n1. INSERT REAR\n2. DELETE AT FRONT\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
		switch(ch)
		{
			case 1: enqueue();break;
			case 2: dequeue();break;
			case 3: display(f);break;
			case 4: printf("Exit...\n");break;
			default: printf("Invalid choice\n");
		}
	}
}

void enqueue()
{
	node q;
	q=(node)malloc(sizeof(struct List));
	q=getnode(q);
	q->prev=NULL;
	q->next=NULL;
	if(f==NULL)
	{
		f=r=q;
		return;
	}
	q->prev=r;
	r->next=q;
	r=q;
}

void dequeue()
{
	node temp;
	if(f==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	temp=f;
	f=f->next;
	//printf("%d\t%s\n",temp->id,temp->name);
	printf("%d\t%s\t%s\t%s\n",temp->id,temp->name,temp->branch,temp->spl);
	free(temp);
}
