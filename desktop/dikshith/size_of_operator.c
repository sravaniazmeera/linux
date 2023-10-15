#include<stdio.h>
#define my_sizeof(x)({__typeof__(x)y;((char*)(&y+1)-(char*)(&y));})
int main()
{
	//int x=5;
	int size=my_sizeof(int);
	printf("%d",size);
}
