/*#include<stdio.h>
struct kk
{
	int a;
	int b;
}c;

void main()
{
	struct kk *p=&c;
	scanf("%d",&(*p).a);
	scanf("%d",&p->b);
	printf("%d",(*p).a);
        printf("%d",p->b);
}*/
#include<stdio.h>
struct kk
{
        int a;
        int *b;
}c;

void main()
{
        struct kk *p=&c;
        scanf("%d",&p->a);
        scanf("%d",&p->b);
        printf("%d",p->a);
        printf("%d",p->b);
}
