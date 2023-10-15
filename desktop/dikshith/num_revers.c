#include<stdio.h>
void main()
{
	int a=0x1234;
	int b,c,d,e;
	//b=((a&0x00ff)<<8)|((a&0xff00)>>8);
	//printf("%x\n",b);
	//c=(((b&0x0f00)<<4)|((b&0x00f0)>>4));
	//e=(((b&0xf000)>>4)|((b&0x000f)<<4));
        //d=c|e;
	a=((a&0x000f)<<12|(a&0x00f0)<<4|(a&0x0f00)>>4|(a&0xf000)>>12);
	b=(a|((a&(0x00f0)>>4)|(a&(0x000f)<<4)));

         printf("%x\n",b);
	 //printf("%x\n",d);


}
