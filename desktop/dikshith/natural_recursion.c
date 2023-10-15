#include<stdio.h>
int nat(int,int);
void main()
{
	int a=10,b=1;
	nat(a,b);
}
int nat(int a,int b)
{
	if(b>a)
	{
		return 0;
	}
	else
	{
		printf("%d",a);
		nat(a-1,b);
	}
}
