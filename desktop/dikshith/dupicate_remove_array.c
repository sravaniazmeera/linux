#include<stdio.h>
void main()
{
	int a[10],i,j,k,n,c=0;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				c++;
				for(k=j; k<n; k++)
				{
					a[k+1]=a[k];
				}
			        n--;
				j--;
			}
		}
		
	}
	printf("%d\n",c);
	for(i=0; i<n;i++)
	{
		printf("%d",a[i]);
	}
}


