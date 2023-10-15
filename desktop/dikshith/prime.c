#include<stdio.h>
void main()
{
	int n1,n2,i,j,count;
	printf("enter the two numbers\n");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<n2; i++)
	{
		count=0;
		for(j=2;j<=i/2; j++)
		{
			if(i%j==0)
			{
				count++;
		//		break;
			}
		}
		if(count==0)
		{
			printf("%d\n",i);
		}
	}
}
