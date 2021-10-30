#include<stdio.h>
int main()
{
	char ch;
	printf("enter the string  :");
	scanf("%c",&ch);
if ((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
	{
		printf("\n %c is an alphabhat",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("%c is a digit",ch);
	}
	else
	{
		printf("%c is a spical character",ch);
	}
	return 0;
}
