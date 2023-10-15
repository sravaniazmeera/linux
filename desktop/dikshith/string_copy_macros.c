#include<stdio.h>
#define s "sravani"
void main()
{
	char str[]="sindhuazmeera";
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		str[i]=s[i];
	}
	//printf("%s",s);
	printf("%s",str);
}
