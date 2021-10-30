#include<iostream>
int main()
{
	int sum(int a,int b=10,int c=15,int d=20);
	int a=2;
	int b=3;
	int c=4;
	int d=5;
	cout<<"sum="<<sum(a,b,c,d);
	cout<<"sum="<<sum(a,b,c);
	cout<<"sum="<<sum(a,b);
	cout<<"sum="<<sum(a);
	cout<<"sum="<<sum(b,c,d);
	return 0;
}
sum (int j,int k,int l,int,m)
{
	return (j+k+l+m);
}
