#include<stdio.h>

union endian{

  int i;

  char c[5];

};

int main(){

  union endian u;

  u.i = 1;
 
  if(u.c[0] == 1)

     printf("Little Endian\n");

  else

     printf("Big Endian\n");

  return 0;

}
