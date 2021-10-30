#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
struct node *emplist(struct node *start,int data);
struct node *big(struct node *start,int data);
struct node *end(struct node *start,int data);
struct node *nposition(struct node *start,int data,int position);
void disp(struct node *start);
int main()	
{
	struct node *start=0;
	int ch,data, position,null;
	while(1)
	{
printf("1. insert in an empty list\n");
printf("2. insert at begining\n");
printf("3. insert in at end\n");
printf("4. insert in at nposition\n");
printf("5.  display\n");
printf("1. End program\n");
printf(" Enter choice");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		if (start !=null)
		{
			printf("List is not empty");
			break;
		}
			printf("enter element :");
			scanf("%d",&data);
			start-emplist(start,data);
			break;
			
			case 2:	
			printf("enter element :");
			scanf("%d",&data);
			start-beg(start,data);
			break;
			
			case 3:
			printf("enter element :");
			scanf("%d",&data);
			start-end(start,data);
			break;
			
			case 4:
				
			printf("enter element :");
			scanf("%d",&data);
			printf("enter position");
			scanf("%d", &position);
			start-nposition(start,data);
			break;
			
			case 5:
				disp(start);
				break;
				
				case 6:
					printf("worng choice");
					
			}
						
}
}
struct node *emplist(struct node *start, int data)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	temp->next =start;
	start=temp;
	return start;
}
struct node *beg(struct node *start, int data)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	temp->next =start;
	start=temp;
	return start;
}
struct node *end(struct node *start, int data)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
p= start;
while(p->next !=null)
{
	p=p->next;
}
p->next=temp;
temp->next=null;
return start;
}
struct node *nposition(struct node *start, int data,int position);
{
	int i;
	struct node *temp,*p;
	temp=(struct node*)malloc(size of(struct node));
	temp->info=data;
	if (position==1)
	{
		temp->next=start;
		start=temp;
		return start;
}
p= start;
for(i=1;i<position-1&&p !=null;i++)
{
	p=p-> next;
}
if(p==null)
{
	printf(" There are less than %d elements\n",position);
}
else
{
	temp->next=p->next;
	p->next=temp;
}
return start;
}
void disp(struct node *start)
{
	struct node *p;
	if(start==null)
	{
		printf("list is empty\n");
	}
	else
	{
		p=start;
		printf("list:\n");
		while(p !=null)
		{
			printf("%d",p->info);
			p=p->next;
		}
		printf("\n");
	}
}
