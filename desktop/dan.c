#include<stdio.h>
int *add(int);
void main()
{
	int n,*c;
	printf("enter the any valiue\n");
	scanf("%d",&n);
        c=add(n);
	printf("%d",*c);

}
int *add(int n)
{
	n=1000;
	return &n;
}
