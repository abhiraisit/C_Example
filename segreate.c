#include<stdio.h>
int main(void){
	int arr[]={0,1,1,0,1,0,1,0,1,1,1,0};
	int len=12,i,j=0;

	 for(i=0;i<len;i++){
	 	if(arr[i]==0)
	 	arr[j++]=arr[i];
	 }
}
for(j<len){
	arr[j++]=1;
}
for(int k=0;k<len;k++);{
printf("%d",arr[k]);

}
return 0;
}
