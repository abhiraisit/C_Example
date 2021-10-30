#include<stdio.h>
int main()
{
	int i=1,num;
	printf("enter a number");
	scanf("%d",&num);
	do
	{
		printf("\n %d",i*num);
		i++;
	}
	while(i<=10);
	return 0;	
}
