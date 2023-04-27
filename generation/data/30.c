include <stdio.h>
 
int main(void){
 
  int a, b, c, d, e, sum;
  float ave;
 
  
  printf("国語 = ");
  scanf("%d", &a);
  printf("数学 = ");
  scanf("%d", &b);
  printf("英語 = ");
  scanf("%d", &c);
  printf("理科 = ");
  scanf("%d", &d);
  printf("社会 = ");
  scanf("%d", &e);
 
  
  sum = a + b + c + d + e;
  printf("合計点 = %d\n", sum);
 
  
  ave = sum / 5.0;
  printf("平均点 = %.1f\n", ave);
 
  return 0;
}
