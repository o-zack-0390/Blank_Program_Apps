#include <stdio.h>
 
int main(void){
 
  int i, j;
 
  
  int a[2][2];
 
  
  int det;
 
  printf("◆ 2x2の行列を入力\n");
  for(i=0;i<2;++i){
    for(j=0;j<2;++j){
      printf("A[%d][%d] = ", i+1, j+1);
      scanf("%d", &a[i][j]);
    }
  }
 
  
  det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
 
  
  printf("◆ 行列式の計算結果\n");
  printf("det A = %d\n", det);
 
  return 0;
}
