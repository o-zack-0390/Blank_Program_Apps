#include <stdio.h>
 
int main(void){
 
  float length_cm, length_in;
 
  
  printf("長さを入力（cm）= ");
  scanf("%f", &length_cm);
 
  
  length_in = length_cm * 0.3937007874;
 
  
  printf("%f cm\n", length_cm);
  printf("%f inch\n", length_in);
 
  return 0;
}
