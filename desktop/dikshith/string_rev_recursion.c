/*#include<stdio.h>
void reverse(char*);
void main()
{
	char str[55];
	printf("enter the string\n");
	scanf("%s",str);
	reverse(str);
}
void reverse(char *str)
{
	if(*str)
	{
		reverse(str+1);
		printf("%c",*str);
	}
}*/
#include<stdio.h>
void reverse(char*);
void main()
{
        char str[55];
        printf("enter the string\n");
        scanf("%s",str);
        reverse(str);
}
void reverse(char *str)
{
        if(*str)
        {
                reverse(str+1);
                printf("%c",*str);
        }
}


