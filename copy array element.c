#include<stdio.h>
int main()
{
	int i, size,a[10],b[10];
	printf("\n enter the size of array");
	scanf("%d",&size);
	printf("\n enter the first array element ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<size;i++)
	{
		b[i]=a[i];
	}
		printf("\n element of second array");
		for(i=0;i<size;i++)
	{
		printf("\n value inside second array b[%d]=%d",i,b[i]);
	}
		return 0;
}
