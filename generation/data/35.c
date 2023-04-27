#include <stdio.h>
  
int main(void)
{
 
  
  float area;
 
  
  float length_yoko;
  float length_tate;
 
  
  printf("長方形のよこの長さを入力: a = ");
  scanf("%f", &length_yoko);
  printf("長方形のたての長さを入力: b = ");
  scanf("%f", &length_tate);
 
  
  area = length_yoko * length_tate;
  printf("長方形の面積: S = %.3f\n", area);
 
  return 0;
}
