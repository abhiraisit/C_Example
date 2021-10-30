#include<stdio.h>
void main()
{
	int num,d=1,sum=0;
	printf("enter a number...");
	scanf("%d",&num);
while(d<num)
	{
		if(num%d==0)
		sum=sum+d;
		d++;
	}
	if(sum==num)
	{
		printf("\n %d is perfect number...",num);
	}
	else
	{
		printf("\n %d is not perfect number...",num);
	}
}
