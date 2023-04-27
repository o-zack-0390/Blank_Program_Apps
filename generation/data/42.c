#include <stdio.h>
 
int main(void)
{
 
  
  float length, width, height;
 
  
  float volume;
 
  
  float surface;
 
  
  printf("直方体の縦・横・高さを入力:\n");
  printf("縦 = ");
  scanf("%f", &length);
  printf("横 = ");
  scanf("%f", &width);
  printf("高さ = ");
  scanf("%f", &height);
 
  
  volume = length  * width * height;
  printf("直方体の体積: V = %.3f\n", volume);
 
  
  surface =  2 * (length * width + width * height + height * length);
  printf("直方体の表面積: S = %.3f\n", surface);
 
  return 0;
}
