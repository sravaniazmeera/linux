#include<stdio.h>
void main()
{
	int a[5],even[5],odd[5];
	int i,j=0,k=0;
	printf("enter the array elements\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else
		{
			odd[k]=a[i];
			k++;
		}

	}
	for(i=0; i<j; i++)
	{
		printf("even=%d\n",even[i]);
	}
	for(i=0; i<k; i++)
        {       
                printf("odd=%d\n",odd[i]);
        }
}
