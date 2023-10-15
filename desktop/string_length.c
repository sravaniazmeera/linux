#include<stdio.h>
#include<string.h>
void concat(char*,char*);
void main()
{
	char a[11],b[11];
	printf("enter the string\n");
	scanf("%s",a);
	printf("enter the second string\n");
	scanf("%s",b);
	concat(a,b);
}
void concat(char *a,char *b)
{
	int i,j;
	strcat(a,b);
	printf("%s",a);
}

	/*int i,j;
	for(i=0; a[i]!='\0';i++);
	{
		for(j=0; b[j]!='\0'; j++)
		{
			a[i]=b[j];
			i++;
		}
		a[i]='\0';
	}
	printf("%s",a);
}*/
