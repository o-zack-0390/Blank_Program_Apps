#include <stdio.h>
 
int main(void)
{
 
  int a, b, r, x, tmp;
 
  printf("2つの自然数を入力してください。\n");
  printf("1つ目の自然数 = ");
  scanf("%d", &a);
  printf("2つ目の自然数 = ");
  scanf("%d", &b);
 
  x = a * b;
 
  
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 
  
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
 
  
  printf("最小公倍数 = %d\n", x/b);
 
  return 0;
}
