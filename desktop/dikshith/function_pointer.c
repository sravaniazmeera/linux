#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a=10,b=20;
	void(*fp)(int*,int*);
	fp=swap;
	fp(&a,&b);
}
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("%d%d",*a,*b);
}
