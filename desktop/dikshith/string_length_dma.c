#include<stdio.h>
#include<stdlib.h>
void main()
{
	char str[]="mirafra";
	char *p,c=0;
	p=(char*)malloc(sizeof(char));
	if(p==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		p=&str;
		while(*p !='\0')
		{
			c++;
		
			*p++;
		}
		
		printf("%d",c);
	}
}

