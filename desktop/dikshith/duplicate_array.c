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
                c=0;
                for(j=i+1; j<n; j++)
                {
                        if(a[i]==a[j])
                        {
		           c++;  
			}
		}
	

		if( c ==1 )
		{
			printf("duplicte elements are=%d\n",a[i]);
	
	        }
	}
}
