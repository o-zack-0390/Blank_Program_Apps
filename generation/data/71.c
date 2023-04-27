#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int s;
 
  
  srand(time(NULL));
 
  
  s = rand() % 6 + 1;
 
  
  printf("サイコロの出目 = %d \n", s);
 
  return 0;
}
