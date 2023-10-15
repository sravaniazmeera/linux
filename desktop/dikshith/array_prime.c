#include<stdio.h>
void main()
{
	int a[10],b[10],i,j,k=0,c;
	printf("enter the arry elements\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1; i<=10; i++)
	{
		if(a[i]>1)
		{
			c=0;
			for(j=2; j<=a[i]/2; j++)
			{
				if(a[i]%j==0)
				{
					c++;
				}
			}
			if(c==0)
			{
				b[k]=a[i];
				printf("%d",b[k]);
				k++;
			}
		}
	}
	printf("\n");
}
