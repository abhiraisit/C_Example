#include<stdio.h>

int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int arr1[7],i,l,k=0;
	for(i=2;i<sizeof(arr)-1;i++)
	{
		//printf(" %d ",arr[i]);
		arr1[k]=arr[i];
	    k++;
	}  
	l=sizeof(arr1);

	for(i=0;i<2;i++)
    {
        arr1[k]=arr[i];
        k++;
    }
	for(i=0;i<sizeof(arr1)-1;i++)
		printf(" %d ",arr1[i]);
		
	return 0;
	
}
