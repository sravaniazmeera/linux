#include<stdio.h>
void main()
{
    int num ,p1,p2,res;
    printf("enter the num");
    scanf("%d",&num);
    printf("enter the pos");
    scanf("%d%d",&p1,&p2);
  //  if(((num>>p1)&1)!=((num>>p2)&1))
   // {
        res=num^((0x03<<p1)^(0x03<<p2));
   // }
    printf("%d",res);
    
//swap nibble
  // res= (((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1));
  // printf("%d",res);
   //input = 10101101
   //out put = 01011110
}
