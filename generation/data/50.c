#include <stdio.h>
 
int main(void){
 
  int i, j;
 
  
  int a[2][3], b[2][3], c[2][3];
 
  printf("\n1つ目の行列 A を入力\n");
  for(i=0;i<2;++i){
    for(j=0;j<3;++j){
      printf("A[%d][%d] = ", i+1, j+1);
      scanf("%d", &a[i][j]);
    }
  }
 
  printf("\n2つ目の行列 B を入力\n");
  for(i=0;i<2;++i){
    for(j=0;j<3;++j){
      printf("B[%d][%d] = ", i+1, j+1);
      scanf("%d", &b[i][j]);
    }
  }
 
  
  for(i=0;i<2;++i){
    for(j=0;j<3;++j){
      c[i][j] = a[i][j] - b[i][j];
    }
  }
 
  printf("\n行列 C = A - B\n");
  for(i=0;i<2;++i){
    for(j=0;j<3;++j){
      printf("C[%d][%d] = %d\n", i+1, j+1, c[i][j]);
    }
  }
 
  return 0;
}
