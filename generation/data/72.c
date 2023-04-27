#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int i;
  double num;
 
  
  srand(time(NULL));
 
  
  for(i=0;i<3;i++){
    num = (double)rand()/RAND_MAX;
    printf("%f\n", num);
  }
 
  return 0;
}
