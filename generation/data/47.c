#include <stdio.h>
#include <math.h>
 
int main(void)
{
 
 
  
  int i;
 
  
  int kaijou = 1;
 
  
  int number = 30;
 
  
  double napier = 1.0;
 
  
  for(i=1;i<number;i++){
    kaijou *= i;
    napier += 1.0 / kaijou;
  }
 
  
  printf("計算結果 e = %f\n", napier);
 
  
  printf("math.hの定数 e = %f\n", M_E);
 
  return 0;
}
