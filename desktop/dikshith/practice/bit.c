#include<stdio.h>
void main()
{
	int n,p,c;
	printf("enter the any num\n");
	scanf("%d%d",&n,&p);
	c=(n>>p);
	printf("%d",c);
}
