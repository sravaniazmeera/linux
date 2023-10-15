#include<stdio.h>
void main()
{
        int a[20],i,n,val,pos;
        printf("enter the size\n");
        scanf("%d",&n);
        printf("enter the arry elements\n");
        for(i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
	printf("enter the pos\n");
	scanf("%d",&pos);
	printf("enter the value\n");
	scanf("%d",&val);
        printf("after insert the ele of the arry elements\n");
	for(i=n-1; i>=pos; i--)//for(i=pos; i<n; i++)
	{		       //{
			       //    a[i]=a[i+1];    delete a particular pos
			       //	{
         	a[i+1]=a[i];
	}
	a[pos]=val;
	for(i=0; i<n+1; i++)
	{
		printf("%d\n",a[i]);
	}
}     
