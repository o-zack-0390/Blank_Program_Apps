#include <stdio.h>
 
int main(void){
 
  int i, j;
 
  
  int a[3][3];
 
  
  int det = 0;
 
  printf("◆ 3x3の行列を入力\n");
  for(i=0;i<3;++i){
    for(j=0;j<3;++j){
      printf("A[%d][%d] = ", i+1, j+1);
      scanf("%d", &a[i][j]);
    }
  }
 
  
  for(i=0;i<3;++i){
    det = det + a[0][i] * ( a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3] );
  }
 
  
  printf("◆ 行列式の計算結果\n");
  printf("det A = %d\n", det);
 
  return 0;
}
