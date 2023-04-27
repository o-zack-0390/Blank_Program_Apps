#include <stdio.h>
 
int main(void){
 
  int i;
 
  
  int n, sum;
 
  
  printf("級数（1^2+2^2+…+n^2）の和を計算します。\n");
  printf("nを入力してください = ");
  scanf("%d", &n);
 
  
  sum = (n * (n + 1) * (2 * n + 1 )) / 6;
 
  printf("級数の和 = %d\n", sum);
 
  return 0;
}
