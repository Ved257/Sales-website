#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*head=NULL;
int choice;
void enqueue_beginning(); //(i)
void enqueue_end(); //(ii)
void dequeue_beginning(); //(iii)
void dequeue_end(); //(iv)
void display();
void main()
{
 while(choice!=6)
 {
 printf("1. Enqueue Beginning\n");
 printf("2. Enqueue End\n");
 printf("3. Dequeue Beginning\n");
 printf("4. Dequeue End\n");
 printf("5. Display\n");
 printf("6. Exit\n");
 printf("Enter your choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: enqueue_beginning(); break;
 case 2: enqueue_end(); break;
 case 3: dequeue_beginning(); break;
 case 4: dequeue_end(); break;
 case 5: display(); break;
 case 6: printf("Exiting...."); break;
 default: printf("Invalid input\n"); break;
 };
 }
}
void enqueue_beginning()
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter data: ");
 scanf("%d",&temp->data);
 if(head==NULL)
 {
 head=temp;
 head->next=head;
 }
 else
 {
 struct node *r;
 r=head;
 while(r->next!=head)
 {
 r=r->next;
 }
 temp->next=head;
 r->next=temp;
 head=temp;
 }
 display();
}
void enqueue_end()
{
 struct node *temp,*r;
 temp=(struct node *)malloc(sizeof(struct node));
 r=head;
 printf("Enter data: ");
 scanf("%d",&temp->data);
 if(head==NULL)
 {
 head=temp;
 head->next=NULL;
 }
 else
 {
 while(r->next!=head)
 {
 r=r->next;
 }
 r->next=temp;
 temp->next=head;
 }
 display();
 }
void dequeue_beginning()//karna hai
{
 if(head==NULL)
 {
 printf("Underflow\n");
 }
 else if(head->next==head)
 {
 head=NULL;
 printf("\n");
 }
 else
 {
 struct node *r,*p;
 r=head;
 p=head->next;
 while(r->next!=head)
 {
 r=r->next;
 }
 r->next=p;
 head=p;
 display();
 }
}
void dequeue_end()
{
 if(head==NULL)
 {
 printf("Underflow\n");
 }
 else if(head->next==NULL)
 {
 head=NULL;
 printf("\n");
 }
 else
 {
 struct node *r;
 r=head;
 while(r->next->next!=head)
 {
 r=r->next;
 }
 r->next=head;
 display();
 }
}
void display()
{
 struct node *r;
 r=head;
 while(r->next!=head)
 {
 printf("%d ",r->data);
 r=r->next;
 }
 printf("%d\n",r->data);
}
