/*#include <stdio.h>
#include <string.h>
struct kk
{
	int a;
	int *b;
};
void main()
{
	int c=10;
	struct kk s;
	s.a=100;
	s.b=&c;
	printf("%d\n",s.a);
	printf("%d",*(s.b));

}*/
/*#include<stdio.h>
#include<string.h>
struct kk {
    int a;
    int* p;
}s;

int main() {
    struct kk* b = &s; // Pointer to struct kk

    int x=10;
      s.a = 5;
      s.p = &x;
     b->a=100;
     b->p=&x;

    printf("Value of a: %d\n", b->a);
    printf("Value of p: %d\n", *(b->p));
    printf("value of p:%d\n",*(s.p));
    printf("value of a:%d\n",(s.a));

   
}*/
#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int age;
	float marks;
};
void main()
{
	struct student b,a={"sravani",20,100};
	 //struct student b="sindhu";
//	 strcpy(b.name,"sindhu");
         b.name ="sindhu";
	 b.age=100;
	 b.marks=999;
	 //char s[]="sravani"

         struct student	c={"siri",22,80};
	printf("%s%d%f",a.name,a.age,a.marks);
        printf("%s%d%f",b.name,b.age,b.marks);
        printf("%s%d%f",c.name,c.age,c.marks);

}
