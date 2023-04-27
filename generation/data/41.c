#include <stdio.h>
 
int main(void)
{
 
  
  float ippen;
 
  
  float volume;
 
  
  float surface;
 
  
  printf("立方体の一辺の長さを入力:\n");
  printf("一辺 = ");
  scanf("%f", &ippen);
 
  
  volume = ippen * ippen * ippen;
  printf("立方体の体積: V = %.3f\n", volume);
 
  
  surface =  6 * (ippen * ippen);
  printf("立方体の表面積: S = %.3f\n", surface);
 
  return 0;
}
