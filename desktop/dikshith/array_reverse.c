#include<stdio.h>
void main()
{
	int a[20],i,j,temp,n;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the arry elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse order of the arry elements\n");
      /*for(i=0,j=n-1; i<j; i++,j--)	//for(i=0,j=n-1; i<n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}*/
	for(i=0; i<n/2; i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
