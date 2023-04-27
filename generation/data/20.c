#include <stdio.h>
 
int main()
{
 
  int i;
 
  
  char moji[100];
 
  
  printf("文字列を入力してください = ");
  scanf("%s", moji);
 
  
  for(i=0; moji[i]!='\0'; ++i);
 
  
  printf("入力した文字列は「%d」文字です。\n",i);
 
  return 0;
}
