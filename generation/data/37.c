#include <stdio.h>
#include <math.h>
 
int main(void)
{
 
  
  float S;
 
  
  float a, b;
 
  
  float angle;
 
  
  printf("三角形の2辺と角度（°）を入力:\n");
  printf("辺 a = ");
  scanf("%f", &a);
  printf("辺 b = ");
  scanf("%f", &b);
  printf("角度（°）= ");
  scanf("%f", &angle);
 
  
  S  = (a * b * sin((M_PI / 180) * angle)) / 2.0;
 
  printf("面積 S = %.3f\n", S);
 
  return 0;
}
