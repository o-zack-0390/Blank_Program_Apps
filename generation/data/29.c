#include <stdio.h>
 
int main(void){
 
  float number, amount, rate, percent;
 
  
    printf("くらべる数 = ");
    scanf("%f", &number);
    printf("もとの数 = ");
    scanf("%f", &amount);
 
  
  rate = number / amount;
  printf("割合 = %.2f\n", rate);
 
  
  percent = rate * 100;
  printf("百分率 = %.2f ％\n", percent);
 
  return 0;
