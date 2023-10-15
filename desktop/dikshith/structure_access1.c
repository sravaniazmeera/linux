/*#include<stdio.h>
struct kk
{
	int a;
	int b;
};
void main()
{
	struct kk s,*p;
	p=&s;
	scanf("%d",&(*p).a);
	scanf("%d",&(p->a));
        scanf("%d",&(s.a));
	scanf("%d",&(*p).b);
	scanf("%d",&(s.b));
	scanf("%d",&(p->b));
        printf("%d",(s.a));
        printf("%d",(*p).a);
	printf("%d",(p->a));
}*/

#include<stdio.h>
struct kk
{
        int a;
        int *b;
};
void main()
{
	struct kk s,*p;
	p=&s;
	int c;
	p->a=10;
	p->b=&c;
	s.a=100;
	s.b=&c;
	printf("%d",(*p).a);
	printf("%d\n",(p->a));
	printf("%d\n",*(p->b));
	printf("%d\n",*((*p).b));
	printf("%d\n",(s.a));
	printf("%d\n",*(s.b));
}
