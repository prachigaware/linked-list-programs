#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
 struct node * create(struct node * list)
{
	int i,n;
	struct node *newnode,*temp;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		if(list==NULL)
		{ 
		   list=newnode;
		   temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
void disp(struct node *list)
{
	struct node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
struct node *insertbeg(struct node *list,int num)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=list;
	list=newnode;
	return list;
}
struct node *insertend(struct node *list,int num)
{
	struct node *newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->data=num;
   for(temp=list;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   return list;
}

int main()
{
	int ch,num,pos;
	struct node *list=NULL;
	do
	{
		printf("\n 1-create \n 2-disp \n 3-insert begining \n 4-insert end");
	    printf("enter choice");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:list=create(list);
	    	       break;
	        case 2:disp(list);
	               break;
	        case 3:printf("enter number");
	               scanf("%d",&num);
	                list=insertbeg(list,num);
	                break;
	        case 4:printf("enter number");
	               scanf("%d",&num);
	                list=insertend(list,num);
	                break;
		}
	}while(ch<5);
}
