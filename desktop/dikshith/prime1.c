#include<stdio.h>
void main()
{
	int n,i,j,c;
	printf("enter the num\n");
	scanf("%d",&n);
	for(i=2; i<=n; i++)
	{
		c=0;
		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==0)
		{
			printf("%d",i);
		}
	}
}
