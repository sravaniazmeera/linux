#include<stdio.h>
void main()
{
	int a[10],i;
	printf("enter the array elements\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(i=1; i<5; i++)
	{
		if(min > a[i])
		{
			min=a[i];
		}
	}
	
	printf("min element are\n");
	printf("%d",min);
}
