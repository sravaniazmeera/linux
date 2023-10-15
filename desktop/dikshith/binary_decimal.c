//  binary to decimal
/*#include<stdio.h>
void main()
{
	int n,rem,binary,dec=0,base=1;
	printf("enter the binary num\n");
	scanf("%d",&binary);
	while(binary>0)
	{
		rem=binary%10;
		dec=dec+rem*base;
		binary=binary/10;
		base=base*2;
	}
	printf("%d",dec);
}*/
// decimal to binary
/*#include<stdio.h>
void main()
{
        int n,rem,binary,dec=0,base=1;
        printf("enter the binary num\n");
        scanf("%d",&binary);
        while(binary>0)
        {
                rem=binary%2;
                dec=dec+rem*base;
                binary=binary/2;
                base=base*10;
        }
        printf("%d",dec);
}*/
// decimal to octal
#include<stdio.h>
/*void main()
{
        int n,rem,binary,dec=0,base=1;
        printf("enter the binary num\n");
        scanf("%d",&binary);
        while(binary>0)
        {
                rem=binary%8;
                dec=dec+rem*base;
                binary=binary/8;
                base=base*10;
        }
        printf("%d",dec);
}*/
//binary to octal
#include<stdio.h>
void main()
{
        int n,rem,binary,dec=0,base=1;
        printf("enter the binary num\n");
        scanf("%d",&binary);
        while(binary>0)
        {
                rem=binary%2;
                dec=dec+rem*base;
                binary=binary/2;
                base=base*10;
        }
        printf("%d",dec);

}
