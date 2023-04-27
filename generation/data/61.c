#include <stdio.h>
 
int main(void)
{
 
  int i = 0;
  char moji[100];
 
  
  printf("文字列を入力してください = ");
  scanf("%s", moji);
 
  
  while(moji[i])
    printf("%d " , moji[i++]);
 
  printf("\n");
 
  return 0;
}
