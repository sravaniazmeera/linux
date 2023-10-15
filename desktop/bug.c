#include<stdio.h>
#include<stdlib.h>
int a=10;
void main()
{
	int  i,*ptr1,*ptr2;
	ptr1=(int*)malloc(sizeof(int)*4);
	ptr2=ptr1;
	for(i=0; i<5; i++)
	{
		*ptr1 = i*20;
		ptr1++;
	}
	printf("sucess");
	free(ptr1);
}
