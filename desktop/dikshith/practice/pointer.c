#include<stdio.h>
#include<stdlib.h>
int* swap(int,int);
void main()
{
	int a=10,b=20;
	int *c;
	c=swap(a,b);
	 printf("%d\n%d",*c,*(c+1));
	
}
int* swap(int a,int b)
{
	int *p;
	p=(int*)malloc(sizeof(int));
	p[0]=b;
	p[1]=a;
	printf("%d%d",*p,*(p+1));
	return p;
}
