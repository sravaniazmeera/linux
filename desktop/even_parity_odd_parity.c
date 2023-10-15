#include<stdio.h>
void main()
{
	int n=8,c=0,i,rev=0;
	for(i=0; i<=7; i++)
	{
	       if (n&(1<<i))	//if(((n>>i)&0x01)!=0)
		{
		       rev= rev|(1<<(7-i));

		}
	}
	       printf("%d",rev);
	
	

}

/*#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="sravani";
	int i,c=0;
	for(i=0; a[i]!='\0'; i++)
	{
		c++;
	}
	for(i=c; i>=0; i--)
	{
		printf("%c",a[i]);
	}
}*/
/*#include<stdio.h>
void reverse(char*);
void main()
{
	char a[]="sravani";
	reverse(a);
}
void reverse(char *a)
{
	if(*a)
	{
		reverse(a+1);
		printf("%c",*a);
	}
}*/
/*#include<stdio.h>
void main()
{
	int n=5,i,fact=1;
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}*/
/*#include<stdio.h>
void main()
{
        int n1=5,n2=5,i,mul=0;
        for(i=n2; i>0; i--)
        {
                mul=mul+n1;

        }
	printf("%d",mul);
}*/
/*#include<stdio.h>
void main()
{
	unsigned int a=4;
	char *p=(char*)&a;
	if(*p==4)
	{
		printf("little indian");
	}
	else
	{
		printf("big indian");
	}
}*/
/*#include<stdio.h>
void array(int[],int,int);
void main()
{
	int a[22],n,i;
	printf("enter rhe array size\n");
	scanf("%d",&n);
	printf("enter the arry elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	array(a,n,i);
}
void array(int a[],int n,int i)
	
{
	int flag=0,key;
	printf("enter trhe key\n");
	scanf("%d",&key);
	for(i=0; i<n; i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}*/
/*#include<stdio.h>
void main()
{
	int n=10;
	n=n|(0x01<<2);
	printf("%d",n);
}*/
/*#include<stdio.h>
void main()
{
	char x,y;
	if((&y-&x)<0)
	{
		printf("stack down\n");
	}
	else
	{
		printf("stack up");
	}
}*/
/*#include<stdio.h>
void main()
{
	char str[]="sravani";
	int i,c=0;
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='a'| str[i]=='e'| str[i]=='i'| str[i]=='o'| str[i]=='u')
		{
			c++;
		}
	}
	printf("%d",c);
}*/
