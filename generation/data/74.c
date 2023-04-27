#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int i;
  int count = 0;
  int max = 100000;
  double x,y,z,pi;
 
  
  srand(time(NULL));
 
  
  for(i=0;i<max;i++){
    x = (double)rand()/RAND_MAX;
    y = (double)rand()/RAND_MAX;
    z = x*x + y*y;
    if(z<1)
      count++;
  }
 
  
  pi = (double)count / max * 4;
  printf("%f\n", pi);
 
  return 0;
}
