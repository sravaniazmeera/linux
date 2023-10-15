#include<stdio.h>
void main()
{
	int n,binary=0,rem,j=1,sum;
	printf("enter rthe num\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=rem*j;
		binary=binary+sum;
		j=j*2;
		n=n/10;
	}
	printf("%d",binary);
}
