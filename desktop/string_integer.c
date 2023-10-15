#include<stdio.h>
void main()
{
	char str[]="1234a";
	int i,j,length=0,n;
	for(i=0; str[i]!='\0'; i++)
	{
		length++;
	}
	j=length;
	for(i=0; i<j; i++)
	{
		n=n*10+(str[i]-48);
	}
	printf("%d",n);
}
