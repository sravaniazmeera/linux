#include<stdio.h>
int facto(int);
void main()
{
	int num,res;
	printf("enter the num\n");
	scanf("%d",&num);
	res=facto(num);
	printf("%d",res);
}
int facto(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return(num*(facto(num-1)));
	}
}
