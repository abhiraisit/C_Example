#include<stdio.h>
struct student
{
int roll;
char name[10];
}s1;
void main()
{
struct student *s;
printf("%d",sizeof(s));
}

