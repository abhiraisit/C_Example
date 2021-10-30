#include<stdio.h>
#include<malloc.h>
struct queue
{
	int info;
	struct queue *next;
	
};
typedef struct queue qu;
qu *front=NULL,*rear=NULL;
int main()
{
	int ch;
	void insert();
	void delete();
	void traverse();
	printf(" \n QUEUE APPLICATION USING ");
	do
	{
		printf("\n 1.INSERTION ");
		printf("\n 2.DELETION ");
		printf("\n 3.TRAVERSE ");
		printf("\n 4.EXIT ");
		printf("\n 4.ENTER YOUR CHOICE (1TO4)  :");
		scanf("%d",&ch);
		switch(ch)
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
	    	printf("\n end of queue application");
			break;
			default:
			printf("\n you have entered wrong choice");
		}
		
	}
	while(ch!=4);
	return 0;
}
void insert()
{
qu *temp;
int x;
printf("\n enter the value of insertion :");
scanf("%d",&x);
temp=(qu*)malloc(sizeof(qu));
temp->info=x;
temp->next=NULL;
if(rear==NULL)
{
	front=temp;
	rear=temp;
	}	
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
void delete()
{
	int N;
	qu *temp;
	if(front==NULL)
	{
	
	printf("queue is empty  !!");
	return ;
}

	temp=front;
	N=front->info;
	front=temp->next;
	temp->next=NULL;
	free(temp);
	printf("\n %d is deleted :",N);	
}

void traverse()
{
	qu *temp;
	if(front==NULL)
	printf("\n queue is empty !!");
	else
	{
		temp=front;
		printf("\n element in queue :\n "  );
		while(temp->next!=NULL)
		{
			printf(" \n %d",temp->info);
			temp=temp->next;
		}
		printf(" \n %d",temp->info);
	}
}

