#include<stdio.h>
int add(int,void(*fp)(int));
int sub(int);
void main()
{
	void (*fp)(int);
	fp=sub;
	add(10,fp);
}
int add(int a,void(*fp)(int b))
{
	printf("my name is sravani");
	fp(19);
}
int sub(int c)
{
	printf("my name is sravanthi");
	printf("%d",c);
}
