//*STACK OPERATION USING ARRAY*/

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int stack [MAX_SIZE];
int top=-1;
int main()
{
	int ch;
	void push();
	void pop();
	void traverse();
	void peep();
	printf("stack application menu \n");
	do
	{
		printf("\n1.PUSH \n");
		printf("\n2.POP \n ");
		printf("\n3.TRAVERSE\n");
		printf("\n4.PEEP\n");
		printf("\n5.EXIT\n");
		printf("\n ENTER YOUR CHOICE(1to4):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:traverse();
			break;
			case 4:peep();
			break;
			case 5:printf("end of stack application:");
			break;
			default:
			printf("you have entered wrong choice :");
			}
	}
	while(ch!=5);
}
void push()
{
	int item;
	if(top>=MAX_SIZE-1)
	printf("stack overflow");
	else
	{
		printf("enter the value of PUSH :");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}
void pop()
{
	int item;
	if(top<0)
	printf("stack is empty !!");
	else
	{
		item=stack[top];
		printf("%d is popped out :",item);
		stack[top]=0;
		top--;
	}
}
void traverse()
{
	int i=0,temp;
	if(top<0)
	{
		printf("stack element !!");
		return ;
	}
	else
	{
		temp=top;
		printf("stack elements :");
		while(temp>=0)
		{
			printf("\n%d",stack[temp]);
			temp=temp-1;
		}
	}
}
void peep()
	{
		int n;
		printf("enter the position :");
		scanf("%d",&n);
		if ((top-n+1)<0)
		{
		printf(" not possible :");
		return ;
}
else
{

		printf("%d isPEEP out\n",stack[top-n+1]);
	}

}


