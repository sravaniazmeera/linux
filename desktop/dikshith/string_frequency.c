#include<stdio.h>
void main()
{
	char s[22];
	int i,j,c;
	printf("enter the string\n");
	scanf("%s",s);
	for(i='A'; i<='z'; i++)
	{
		c=0;
		for(j=0; s[j]!='\0'; j++)
		{
			if(s[j]== i)
			{
				c++;
			}
		}
	
		if(c>0)
		{
			printf("%c is repeted %d\n ",i,c);
		}
	}
	
}
