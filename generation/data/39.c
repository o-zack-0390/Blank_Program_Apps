#include <stdio.h>
#include <math.h>
  
int main(void)
{
 
  
  float radius;
 
  
  float area;
 
  
  float length;
 
  
  printf("円の半径を入力: r = ");
  scanf("%f", &radius);
 
  
  area = M_PI * radius * radius;
  printf("円の面積: S = %.3f\n", area);
 
  
  length =  2 * M_PI * radius;
  printf("円周の長さ: L = %.3f\n", length);
 
  return 0;
}
