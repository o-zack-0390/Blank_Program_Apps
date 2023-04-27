#include <stdio.h>
 
int main(void)
{
 
  int i, n=3;
 
  
  int a[n], b[n], tmp[n];
 
  printf("1つ目の配列に数値を入力\n");
  for(i=0;i<n;++i) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
 
  printf("2つ目の配列に数値を入力\n");
  for(i=0;i<n;++i) {
    printf("b[%d] = ", i);
    scanf("%d", &b[i]);
  }
 
  
  for(i=0;i<n;++i) {
    tmp[i] = a[i];
    a[i] = b[i];
    b[i] = tmp[i];
  }
 
  printf("1つ目の配列を出力（交換後）\n");
  for(i=0;i<n;++i)
    printf("a[%d] = %d\n", i, a[i]);
 
  printf("2つ目の配列を出力（交換後）\n");
  for(i=0;i<n;++i)
    printf("b[%d] = %d\n", i, b[i]);
 
  return 0;
}
