#include <stdio.h>
  
int main(void)
{
 
  
  float area;
 
  
  float length;
 
  
  printf("正方形の一辺の長さを入力: a = ");
  scanf("%f", &length);
 
  
  area = length * length;
  printf("正方形の面積: S = %.3f\n", area);
 
  return 0;
}
