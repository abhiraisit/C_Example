#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	printf("enter the number : ");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z'))
	{
	printf("this is alphabhat");
}
else
	printf("this is not alphabhat");
	return 0;
}
