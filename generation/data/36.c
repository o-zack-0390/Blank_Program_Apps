#include <stdio.h>
  
int main(void)
{
 
  
  float area;
 
  
  float base;
  float height;
 
  
  printf("三角形の底辺の長さを入力: a = ");
  scanf("%f", &base);
 
  
  printf("三角形の高さを入力: h = ");
  scanf("%f", &height);
 
  
  area = 0.5 * base * height;
  printf("三角形の面積: S = %.3f\n", area);
 
  return 0;
}
