#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],ch;
	int i,count=0;
	printf("enter a string : ");  //Take the input from user
	gets(a);   // To sore the char
	                  
	printf("enter a character to determine a frequency : "); //  To enter the char to find the frequency
	scanf("%c",&ch); // To store the char
	for( i=0;a[i]!='\0';i++) // Traversing the loop
	{
		if (a[i]==ch) // check the char enter by the user 
		count++; //count how many times char came that was given by the user
	}
	printf("frequency of %c=%d",ch,count); //print the result
	return 0;
}
