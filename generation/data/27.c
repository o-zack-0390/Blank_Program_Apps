#include <stdio.h>
 
int main()
{
 
  int i;
 
  
  int num;
 
  
  int fact = 1;
 
  
  printf("自然数を入力してください = ");
  scanf("%d", &num);
 
  
  for(i=1; i<=num; ++i) {
    fact = fact * i;
  };
 
  
  printf("「%d」の階乗は「%d」です。\n", num, fact);
 
  return 0;
}
