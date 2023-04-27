#include <stdio.h>
  
int main(void)
{
 
  int i;
 
  
  int num;
 
  
  int sum = 0;
 
  
  printf("自然数を入力してください = ");
  scanf("%d", &num);
 
  
  if(num<1) {
     printf("自然数は0より大きな正の整数です。\n");
     printf("1, 2, 3, ... みたいな数です。\n");
     printf("もう一度、プログラムを動かし、数を入力しましょう。\n");
  }
  
  else {
    for(i=1;i<=num;++i){
      sum = sum + i;
    }
    
    printf("総和 = %d\n", sum);
  }
 
  return 0;
}
