#include <stdio.h>
 
int main(void)
{
 
  
  float S;
 
  
  float a, b;
 
  
  printf("直角三角形の辺と高さを入力:\n");
  printf("辺 a = ");
  scanf("%f", &a);
  printf("辺 b = 高さ h = ");
  scanf("%f", &b);
 
  
  S  = a * b / 2.0;
 
  printf("面積 S = %.3f\n", S);
 
  return 0;
}
