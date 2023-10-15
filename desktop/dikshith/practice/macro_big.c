#include<stdio.h>
#define max(x,y,z) ((x>y&&x>z)?x:y>z?y:z)
void main()
{
	int a,b,c,d;
	printf("enter any numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	d=max(a,b,c);
	printf("%d",d);
}
