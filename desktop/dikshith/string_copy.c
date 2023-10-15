#include<stdio.h>
void main()
{
	char src[22],dest[22];
	int i;
	printf("enter strings\n");
	scanf("%s",src);
	for(i=0; dest[i]=src[i]; i++)
	{
		//dest[i]=src[i];
	}
	dest[i]= '\0';
	printf("dest=%s",dest);
}
