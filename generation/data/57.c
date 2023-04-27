#include <stdio.h>
#include <math.h>
 
int main(void){
 
  int i;
 
  
  int n, sum;
 
  
  printf("級数（1^3+2^3+…+n^3）の和を計算します。\n");
  printf("nを入力してください = ");
  scanf("%d", &n);
 
  
  sum = pow(((n * (n + 1) ) / 2),2);
 
  printf("級数の和 = %d\n", sum);
 
  return 0;
}
