#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int i,c;
	for(i=0; i<argc; i++)
	{
		printf("argv[i]=%s\n",argv[i]);
	}
	printf("argc=%d\n",argc);
	c=atoi(argv[1])+atoi(argv[2]);
	printf("c=%d\n",c);
}
