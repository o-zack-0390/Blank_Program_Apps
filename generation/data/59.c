#include <stdio.h>
 
int main(void)
{
  
  int binary;
  int decimal = 0;
  int base = 1;
 
  
  printf(" 2進数 = ");
  scanf("%d", &binary);
 
  
  while(binary>0){
    decimal = decimal + ( binary % 10 ) * base;
    binary = binary / 10;
    base = base * 2;
  }
 
  
  printf("10進数 = %d\n", decimal);
 
  return 0;
}
