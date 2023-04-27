#include <stdio.h>
#include <math.h>
  
int main(void)
{
 
  
  float radius;
 
  
  float volume;
 
  
  float surface;
 
  
  printf("球の半径を入力: r = ");
  scanf("%f", &radius);
 
  
  volume = (4.0/3) * M_PI * radius * radius * radius;
  printf("球の体積: V = %.3f\n", volume);
 
  
  surface =  4 * M_PI * radius * radius;
  printf("球の表面積: S = %.3f\n", surface);
 
  return 0;
}
