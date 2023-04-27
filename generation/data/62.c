#include <stdio.h>
 
int main(void)
{
 
  
  int year;
 
  
  printf("西暦を入力してください= ");
  scanf("%d", &year);
 
  
  year %= 100;
 
  printf("西暦の2桁表記 = %02d\n", year);
 
  return 0;
}
