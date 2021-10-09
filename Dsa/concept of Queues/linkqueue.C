#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
  int val;
   struct node *next;
}node;
void ordered(node **,int x);
void display(node *);
void ordered2(node **,int x);
//void display2(node *);
//void display3(node *);
node *getnode(int y);
void merge(node *,node * ,node**);
void main()
{
 node *start=NULL;
 node *start2=NULL;
 node *start3=NULL;
 int ch,n,q;
 clrscr();

 printf("MENU\n1.Enter element in linked list\n2.Enter elements of ordered list\n3.Insert in sec\n4>display sec\n5Merge list\n6Display merged\n7.Exit\n");
 do
 {
  printf("Enter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter element to insert in first list \n");
	  scanf("%d",&n);
	  ordered(&start,n);
	  break;
   case 2:display(start);
	  break;
   case 3:printf("Enter element to insert in sec list \n");
	  scanf("%d",&q);
	  ordered2(&start2,q);
	  break;
   case 4:display(start2);
	  break;
   case 5:merge(start,start2,&start3);
	  break;
   case 6:display(start3);
	  break;
   case 7:exit(0);
	  break;
   default:printf("Invalid choicee\n");
  }
 }
 while(ch!=7);
 getch();
}
node *getnode(int y)
{
 node *nn;
 nn=(node*)malloc(sizeof(node));
 nn->val=y;
 nn->next=NULL;
 return nn;
}
void ordered(node **start,int x)
{
 node *nn,*p;
 nn=getnode(x);

 if(*start==NULL)
	   (*start)=nn;
 else if((*start)->val>nn->val)
	   {
	   nn->next=(*start);
	   (*start)=nn;

	   }

 else
 {
   p=*start;
   while(p->next!=NULL&&p->next->val<nn->val)
    p=p->next;
   nn->next=p->next;
   p->next=nn;
 }
}
void ordered2(node **start2,int x)
{
 node *nn,*p;
 nn=getnode(x);

 if(*start2==NULL)
	   (*start2)=nn;
 else if((*start2)->val>nn->val)
	   {
	   nn->next=(*start2);
	   (*start2)=nn;

	   }

 else
 {
   p=*start2;
   while(p->next!=NULL&&p->next->val<nn->val)
    p=p->next;
   nn->next=p->next;
   p->next=nn;
 }
}
void display(node *start)
{
 node *p;
 if((start)==NULL)
  {
   printf("Nothing to display\n");
   return ;
  }
 printf("Your ordered list is -\n");
 p=start;
 while(p!=NULL)
 {
  printf("%d\n",p->val);
  p=p->next;
 }
}
/*void display2(node *start2)
{
 node *p;
 if((start2)==NULL)
  {
   printf("Nothing to display\n");
   return ;
  }
 printf("Your ordered list is -\n");
 p=start2;
 while(p!=NULL)
 {
  printf("%d\n",p->val);
  p=p->next;
 }
}
/*void display3(node *start3)
{
 node *p;
 if((start3)==NULL)
  {
   printf("Nothing to display\n");
   return ;
  }
 printf("Your ordered list is -\n");
 p=start3;
 while(p!=NULL)
 {
  printf("%d\n",p->val);
  p=p->next;
 }
}*/
void merge(node *start,node *start2,node **start3)
{
 node *p1=start,*p2=start2,*p3,*nn;
 int n;
 while(p1!=NULL&&p2!=NULL)
 {
  if(p1->val<p2->val)
  {
   n=p1->val;
   p1=p1->next;
  }
 else if(p1->val>p2->val)
 {
  n=p2->val;
  p2=p2->next;
 }
 else
 {
  n=p1->val;
  p1=p1->next;
  p2=p2->next;
 }
 nn=getnode(n);
 if((*start3)==NULL)
 {
  (*start3)=nn;
  p3=(*start3);
 }
 else
 {
  p3->next=nn;
  p3=nn;
 }
}
if(p1!=NULL)
{
 while(p1!=NULL)
 {
  nn=getnode(p1->val);
  p3->next=nn;
  p3=nn;
  p1=p1->next;
 }
}
else
{
 while(p2!=NULL)
 {
 nn=getnode(p2->val);
 p3->next=nn;
 p3=nn;
 p2=p2->next;
 }
}
}






