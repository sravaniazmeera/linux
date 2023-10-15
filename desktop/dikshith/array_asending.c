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
        printf("asending order of the arry elements\n");
        for(i=0;i<n;i++)    
        {
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])//if(a[i]<a[j]) desending order
			{
                           temp=a[i];
                           a[i]=a[j];
                           a[j]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
}

