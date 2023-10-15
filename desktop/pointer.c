#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n;
	printf("enter the arry size\n");
	scanf("%d",&n);
	ptr=(int*)malloc(5*sizeof(int));
	ptr=(int*)calloc(n,sizeof(int));
	ptr=(int*)realloc(ptr,177);

}
