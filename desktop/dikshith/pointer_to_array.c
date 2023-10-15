#include<stdio.h>
void main()
{
	int *p;
	int a[5],i;
	printf("enter the array elements\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a;
	for(i=0; i<5; i++)
	{
		printf("%d\n",*(p+i));
		printf("%d",a[i]);
		printf("%p\n",&p[i]);
	}
}

