/*n fibnocci numbers
#include<stdio.h>
void main()
{
	int fib1=0,fib2=1,fib3,n,i;
	printf("enter the number how many fibnocci series u want\n");
	scanf("%d",&n);
	printf("%d%d",fib1,fib2);
	for(i=2; i<n; i++)
	{
		fib3=fib1+fib2;
		fib1=fib2;
		fib2=fib3;
		printf("%d\n",fib3);
	}

}*/

#include<stdio.h>
void main()
{
        int fib1=0,fib2=1,fib3,n,i;
        printf("enter the number how many fibnocci series u want\n");
        scanf("%d",&n);
        //printf("%d%d",fib1,fib2);
        for(fib3=0;fib3<=n;)
        {
                printf("%d",fib3);
                fib1=fib2;
                fib2=fib3;
                fib3=fib1+fib2;
        }
}
