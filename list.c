#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node * create(struct node * head)
{
	int i,n;
	struct node *newnode,*temp;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
 {
	newnode=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}	
}
return head;
}
void disp(struct node *head)
 {
 	struct node *temp;
 	for(temp=head;temp!=NULL;temp=temp->next)
 	{ 
 	    printf("linked elements are:");
 		printf("%d\t",temp->data);
	 }
 }
 int main()
 {
 	struct node *head=NULL;
 	head=create(head);
 	disp(head);
 }
