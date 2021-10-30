#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[30];
		printf("enter first name");
gets(name);
puts(name);
strrev(name);
printf("%s reverse",name);
    return 0;
}
