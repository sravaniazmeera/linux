#include<stdio.h>
void main()
{
	int a[5];
	int *p[5],i;
	printf("enter the array elements\n");

	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	printf("array elements");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p[i]);
		printf("%d\t",*(a+i));
		printf("%d\t",*(i+a));
		printf("%d\t",i[a]);
	
	}
}
