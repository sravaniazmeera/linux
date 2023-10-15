/*#include<stdio.h>
void main()
{
	int num,rev=0;
	printf("enter the num\n");
	scanf("%x",&num);
	while(num>0)
	{
		rev=rev<<1;
		if(num&1)
		{
			rev=rev^1;
		}
		num=num>>1;
	}
	printf("%x",rev);
}*/
#include<stdio.h>
void main()
{
      int n,i,k;
        printf("enter the num\n");
        scanf("%x",&n);
      for(i=0; i<=7; i++)
        {
                k=((n>>i)&0x01);

                        printf("%x",k);
        }
}
