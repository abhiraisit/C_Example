#include<stdio.h>
int main()
{
	int startyear,endyear,i;
	printf("enter the year  :");
	scanf("%d",&startyear);
	printf("enter the last year  :");
	scanf("%d",&endyear);
	printf("Leap year between %d to %d are:\n"&startyear,&endyear);
	for(i=startyear;i<=endyear;i++)
	{
		if((i%4==0)&&(i%100!==0)||(i%400==0))
		{
			printf("\n %d",&i);
		}
	}
	return 0;
	
}
