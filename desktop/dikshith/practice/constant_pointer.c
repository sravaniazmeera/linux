/*#include<stdio.h>//constant pointer
void main()
{
	int a=10,b=20;
	int *const p=&a;
	//p=&a;
	printf("%d",*p);
	*p=200;
	printf("%d",*p);
}*/
/*#include<stdio.h>  //pointer to constant
void main()
{
        int a=10,b=20;
        int const *p=&a;
        //p=&a;
        printf("%d",*p);
        p=&b;
        printf("%d",*p);
}*/
#include<stdio.h>
void main()
{
        int a=10,b=20;
        const int* const p;//=&a;
        p=&a;
        printf("%d",*p);
     //   p=&b;
        
}
