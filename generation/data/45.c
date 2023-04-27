#include <stdio.h>
#include <math.h>
 
int main(void)
{
 
  
  float a, b, c;
 
  
  float discriminant;
 
  
  float kai1, kai2;
 
  
  float real, imag;
 
  
  printf("2次方程式の定数を入力してください。\n");
 
  printf("a = ");
  scanf("%f", &a);
 
  printf("b = ");
  scanf("%f", &b);
 
  printf("c = ");
  scanf("%f", &c);
 
  
  discriminant = b * b - 4 * a * c;
 
  
  if ( discriminant > 0 ) {
 
    
    kai1 = ( -b + sqrt(discriminant) ) / (2*a) ;
    kai2 = ( -b - sqrt(discriminant) ) / (2*a);
 
    
    printf("2次方程式の解: x = %.2f, %.2f\n", kai1, kai2);
 
  } else if ( discriminant == 0 ) {
 
    
    kai1 = kai2 = -b / ( 2 * a );
 
    
    printf("2次方程式の解: x = %.2f, %.2f\n", kai1, kai2);
 
  } else {
 
    
    real = -b / (2*a);
    imag = sqrt(-discriminant) / (2*a);
 
    
    printf("2次方程式の解: %.2f+%.2fi, %.2f-%.2fi\n", real, imag, real, imag);
  }
 
  return 0;
}
