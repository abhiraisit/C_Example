/* STACK OPERATION USING LINKED LIST(POINTER)*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct stack
{
	int item;
	struct stack *next;
};
typedef struct stack st;
st*top=NULL,*start=NULL;
int main()
{
	int ch;
	void push();
	void pop();
	void traverse();
	printf("STACK APPLICATION USING POINTER");
	do
	{
	
		printf("\n 1. push");
		printf("\n 2. pop");
		printf("\n 3. traverse");
		printf("\n 4. Exist");
		printf("\n Enter your choice (1 to4):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:traverse();
			break;
			case 4: printf("End of stack application:");
			break;
			default:printf("you have entered wrong choice");
		}
	}
		while(ch!=4);
}
void push()
{
	st *node,*temp;
	int data;
	printf("Enter any data to push into stack:");
	scanf("%d",&data);
	node=(st*)malloc(sizeof(st));
	node->item =data;
	node->next=NULL;
	if(top==NULL)
	{
		top=start=node;
		return;
	}
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next; //temp is last node
	}
	temp->next=node;
	top=node;
}
void pop()
{
	int data;
	st*temp,*temp1;
	if(top==NULL)
	{
		printf("stack is already empty:\n");
		return ;
	}
	if (top==start)
	{
		data=top->item;
		printf("%d is pop out",data);
		free(top);
		top=NULL;
		start=NULL;
		return ;
	}
	temp=start;
	while(temp->next!=NULL)
	{
		temp1=temp;
		temp=temp->next;
	}
	data=top->item;
	printf("%d is pop out",data);
	free(top);
	top=temp1;
	top->next=NULL;
}
void traverse()
{
	st *temp;
	if(start==NULL)
	{
		printf("stack is empty !!");
		return ;
	}
	temp=start;
	while(temp!=NULL)
	{
		printf("%d",temp->item);
		temp=temp->next;
	}
}
