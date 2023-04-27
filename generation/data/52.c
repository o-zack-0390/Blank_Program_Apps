#include <stdio.h>
 
int main(void){
 
  int i, j;
 
  
  int a[10][10], trans[10][10];
 
  
  int row, column;
 
  printf("行数 = ");
  scanf("%d", &row);
  printf("列数 = ");
  scanf("%d", &column);
 
  
  printf("\n行列を入力してください\n");
  for(i=0;i<row;++i){
    for(j=0;j<column;++j){
      printf("行列の要素 A[%d][%d] = ", i+1, j+1);
      scanf("%d", &a[i][j]);
    }
  }
 
  
  printf("\nA = \n");
  for(i=0;i<row;++i){
    for(j=0;j<column;++j){
      printf("%d  ", a[i][j]);
      if(j==column-1)
          printf("\n");
    }
  }
 
  
  for(i=0;i<row;++i){
    for(j=0;j<column;++j){
     trans[j][i]=a[i][j];
    }
  }
 
  
  printf("\n転置行列 = \n");
  for(i=0;i<column;++i){
    for(j=0;j<row;++j){
      printf("%d  ",trans[i][j]);
      if(j==row-1)
          printf("\n");
    }
  }
 
  return 0;
 
}
