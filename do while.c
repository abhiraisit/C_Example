#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("enter a number...");
	scanf("%d",&num);
for(i=0;i<=num;)
	do
	{
		sum+=i;
		i++;
	
	}
	while(i<=num);
	printf("\n sum : %d",sum);
}
