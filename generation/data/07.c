#include <stdio.h>
 
int main(void)
{
 
  int i;
 
  
  int n;
 
  
  int num;
 
  
  int big;
 
  
  printf("入力する整数の数 = ");
  scanf("%d", &n);
 
  
  printf("1個目の整数 = ");
  scanf("%d", &num);
 
  
  big = num;
 
  for( i=2;i<=n;++i ){
    
    printf("%d個目の整数 = ", i);
    scanf("%d", &num);
 
    
    if(num>big)
      big = num;
  }
 
  
  printf("一番大きい整数 = %d\n", big);
 
  return 0;
}
