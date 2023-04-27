#include <stdio.h>
 
int main(void)
{
  
  int decimal;
  int binary = 0;
  int base = 1;
 
  
  printf("10進数 = ");
  scanf("%d", &decimal);
 
  
  while(decimal>0){
    binary = binary + ( decimal % 2 ) * base;
    decimal = decimal / 2;
    base = base * 10;
  }
 
  
  printf(" 2進数 = %d\n", binary);
 
  return 0;
}
