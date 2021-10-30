#include<stdio.h>
int main()
{
	int  i,arr[6] = {4,5,25,84,31,63};

	// original order
	for(i=0;i<6;i++)
	{
		printf("%d",arr[i] );
	}
	printf(" \n ");
	// Reverse order
	for(i=5;i>=0;i--)
	{
		printf("%d", arr[ i ] );
	}
	return 0;
}
