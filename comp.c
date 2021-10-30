#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
int i,j,count=0;
char maxRepeatedchar ;
int maxcount=0;

printf("Enter a string : ");
gets(a);

for(i=0;i<strlen(a);i++){
count=0;
for(j=0;j<strlen(a);j++){
if(a[i]==a[j]){
	count++;
	}
}
if(maxcount<count){
maxcount=count;
maxRepeatedchar =a[i];

}
}
printf("The char %c has been repeated maximum of %d times",maxRepeatedchar,maxcount);
return 0;
}
