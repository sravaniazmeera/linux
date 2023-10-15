#include<stdio.h>
void main()
{
	int num,c=0;
	printf("enter the num\n");
	scanf("%d",&num);
	if(num&&(num&(num-1))==0)
	{
		c++;
		while(num>1)
		{
			
		
			num=num>>1;
			c++;
		}
		
	}
	if(c%2)
	{
		printf("power of four\n");
	}
	else
	{
		printf("not power of four\n");
	}
}
