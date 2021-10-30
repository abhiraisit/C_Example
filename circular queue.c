/* OPERATIONS ON CIRCULAR QUEUE */
#include<stdio.h>
#define MAX 5
int cq[MAX];
int front=-1,rear=-1;
int choice;
void insert();
void delete();
void traverse();
char ch;
int main()
{
	printf("\n 1. insert");
	printf("\n 2. delete");
	printf("\n 3. traverse");
	printf("\n 4. Exit");
		printf("\n Enter your choice (1 to4):");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			insert();
			break;
			case 2:
			delete();
			break;
			case 3:
			traverse();
			break;
			case 4:
			printf("End of queue application : \n ");
			break;
			default:
			printf("\n you have entered wrong choice");
}

while(choice!=4);
}
void insert()
{
	int num;
	printf("enter the element to be inserted");
	scanf("%d",&num);
	if(front==(rear+1)%MAX)
	{
		printf("queue is full \n");
		return ;
	}
	if(front==-1)
	{
		front=0;
	}
	rear=(rear+1)%MAX;
	cq[rear]=num;
}
void delete()
{
	int N;
	if(front==-1)
	{
		printf("queue is empty\n");
		return ;
	}
	N=cq[front];
	if(front==rear)
	front=rear=-1;
	else
	front=(front+1)%MAX;
	printf("DELETED ELEMENT IS=%d\n",N);
}
void traverse()
{
	int temp;
	if(front==-1)
	{
		printf("\n queue is empty :");
		return ;
	}
	temp=front;
	printf("ELEMENT OF C_QUEUE");
	while(temp<=rear)
	{
		printf("%d",cq[temp]);
		temp=temp+1;
	}
}
