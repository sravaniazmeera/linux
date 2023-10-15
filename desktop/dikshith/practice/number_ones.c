#include<stdio.h>
void main()
{
	int num,c=0;
	printf("enter the num\n");
	scanf("%x",&num);
	while(num!=0)
	{
		c++;
		num=num&(num-1);
	}
	printf("%d",c);
}
