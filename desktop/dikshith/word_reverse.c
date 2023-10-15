#include<stdio.h>
#include<string.h>
void main()
{
	char str[22],b[22];
	int k,j,i,s=0;
	printf("enter the string\n");
	gets(str);
	i=strlen(str);
	for(j=i-1; j>=0; j--)
	{
		if(j==0 || str[j]==32)
		{
	             if(j==0)
		     {
			     j=j-1;
		     }
		
		      for(k=j+1; str[k]!='\0'&& str[k]!=32;k++,s++)
		      {
			b[s]=str[k];
		      }
		
		         b[s]=32;
		         s++;
		}
	}
	b[s]='\0';
	
              printf("%s",b);
}
