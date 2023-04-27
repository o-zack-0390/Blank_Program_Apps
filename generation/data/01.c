#include <stdio.h>
 
int main(void)
{
  
  int number;
  int digit = 0;
 
  
  printf("数値 = ");
  scanf("%d", &number);
 
  
  while(number!=0){
    number = number / 10;
    ++digit;
  }
 
  
  printf("桁数 = %d\n", digit);
 
  return 0;
}
