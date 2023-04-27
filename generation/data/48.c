#include <stdio.h>
#include <math.h>
 
int main() {
 
  
  float a, b, c;
 
  
  printf("三角形の3辺の長さを入力:\n");
  printf("辺 a = ");
  scanf("%f", &a);
  printf("辺 b = ");
  scanf("%f", &b);
  printf("辺 c = ");
  scanf("%f", &c);
 
  
  if ((a + b > c && a + c > b && b + c > a)
      && (a > 0 && b > 0 && c > 0)) {
    if (a == b && b == c) {
      printf("正三角形\n");
    } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
      printf("直角二等辺三角形\n");
    } else if (a == b || b == c || a == b) {
      printf("二等辺三角形\n");
    } else {
      printf("不等辺三角形\n");
    }
  } else {
    printf("その3辺では三角形をつくれません。\n");
  }
 
   return 0;
}
