/*#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="mirafra";
	int len=0,i,temp,j;
	//len=strlen(a);
	for(j=0; a[j]!='\0'; j++);
	{
	   for(i=0;i<j/2; i++)
        	{
		 temp=a[i];
		 a[i]=a[j-i-1];
		 a[j-i-1]=temp;
	        }
	}
	printf("%s",a);
}*/
#include<stdio.h>
#include<string.h>
void main()
{
        int a[5]={1,2,3,4,5};
        int len=0,i,temp;
        {
           for(i=0;i<5/2; i++)
                {
                 temp=a[i];
                 a[i]=a[5-i-1];
                 a[5-i-1]=temp;
                }
        }
	for(i=0; i<5; i++)
	{
         printf("%d",a[i]);
	}
}
