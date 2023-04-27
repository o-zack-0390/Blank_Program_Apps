#include <stdio.h>
 
int main(void)
{
  
  int number;
 
  
  printf("整数を入力 = ");
  scanf("%d", &number);
 
  
  if (number > 0)
    printf("%d は 正です。\n", number);
  else if (number == 0)
    printf("%d は 正・負のどちらでもありません。\n", number);
  else
    printf("%d は 負です。\n", number);
 
  return 0;
}
