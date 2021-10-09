#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
typedef struct Node
{
	int val;
       struct Node *next;
       struct Node *prev;
}node;
node *getnode(int num)
{
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->val=num;
	newnode->next=NULL;
	return newnode;
}
void enqueright(node **rear,node **front)
{
	node *nn;
	int n;
	printf("\n enter the data in node ");
	scanf("%d",&n);
	nn=getnode(n);
	if(*rear==NULL)
	{
		*rear=nn;
		*front=nn;
	}
	else
	    {
		nn->prev=*rear;
		(*rear)->next=nn;
		*rear=nn;
	    }
}
void dequeueleft(node **rear,node **front)
{
	node *nn;
	if(*front==NULL)
	{
		printf("\n queue is empty");
	}
		nn=*front;
	if(*front==*rear)
	{
		*front=*rear=NULL;
	}
	else
	{
		(*front)=(*front)->next;
		(*front)->prev=NULL;
	}
	      nn->next=NULL;
}

void dequeueright(node **rear,node **front)
{
	node *nn;
	if(*rear==NULL)
	{
		printf("\n queue is empty");
		return NULL;
	}
		nn=*front;
	if(*front==*rear)
	{
		*front=*rear=NULL;
	}
	else
	{
		(*rear)=(*rear)->prev;
		(*rear)->next=NULL;
	}
		nn->prev=NULL;
}
void display(node *front)
{
	node *p;
	p=front;
	while(p!=NULL)
	{
		printf("\n %d",p->val);
		p=p->next;
	}
}
void main()
{
	 node *front=NULL,*rear=NULL,*nn;
	 int ch,n;
	 clrscr();
	while(1)
	{
		printf("\n menu ");
		printf("\n1 insertion fron right\n2 deletion from left\n3delete from right \n4 display\n5 exit");
		printf("\n enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: enqueright(&rear,&front);
			break;
		case 2:
			dequeueleft(&rear,&front);
			/*if(nn!=NULL)
			{
				printf("deleted value is %d",nn->val);
			}*/
			break;
		case 3: dequeueright(&rear,&front);
			/*if(nn!=NULL)
			{
				printf("deleted value is %d",nn->val);
			} */
			break;
		case 4: display(front);
			break;
		case 5:	exit(0);
		}
	}
	getch();
}