# include<stdio.h>
# include<string.h>
int main()
{
	char str[30];
	int i,len;
	printf("enter the sentence :");
	scanf("%s",str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		printf("\n %c",str[i]);
	}
	return 0;
}
