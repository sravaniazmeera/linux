#include<stdio.h>
#include<stdlib.h>
#define size 5
void push();
void pop();
void display();
void peek();
int stack[size],i,top=-1,data;
int main()
{
	int  a;//,stack[size],data,i,top=-1;
	while(1)
	{
	printf("enter 1 .push,2.pop,3.disply,4.peek\n");
	scanf("%d",&a);      
	switch(a)
	{
		case 1:push();
		       break;
		case 2:pop();
		       break;
		case 3:display();
		       break;
		case 4:peek();
		       break;

	}
      }
     // }while(a!=0);
//	return 0;

}
void push()
{
	if(top>= size-1)
	{
		printf("stack is overflow\n");
	}
	else
	{

		int i,a[5];
		printf("enter the data\n");
		scanf("%d",&data);
/*	for(i=0; i<5; i++)
		{
			scanf("%d",&a[i]);
			top++;
			stack[top]=a[i];
*///		}
		top++;
		stack[top]=data;
	}
}
void pop()
{
	int iteam;
	if(top==-1)
	{
		printf("there is no elements in array\n");
	}
	else
	{
		iteam=top;
		top--;
	}
}
void display()
{
	int i;

	for(i=top; i>=0; i--)
	{
		printf("%d\n",stack[i]);
        }

}
void peek()
{
	if(top==-1)
	{
		printf("there is no elements of the array\n");
	}
	else
	{
		printf("%d",stack[top]);
	}
}
