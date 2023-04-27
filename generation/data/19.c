#include <stdio.h>
 
int main()
{
 
  
  char moji;
 
  
  for(moji='A'; moji<='Z'; ++moji)
    printf("%c", moji);
 
  printf("\n");
 
  
  for(moji='a'; moji<='z'; ++moji)
    printf("%c", moji);
 
  printf("\n");
 
  
  for(moji='0'; moji<='9'; ++moji)
    printf("%c", moji);
 
  printf("\n");
 
  return 0;
}
