#include<stdio.h>
 #include<string.h>
 
int main(void)
{
 
  int i, j;
 
  
  int num = 3;
 
  
  char moji[3][20], tmp[20];
 
  
  printf("\n◆3つの文字列（半角英数字）を入力してください\n");
  for (i=0;i<num;i++) {
    printf("%dつめの文字列 = ", i+1);
    scanf("%s", moji[i]);
  }
 
  for(i=1;i<num;i++){
    for(j=1;j<num;j++){
      if(strcmp(moji[j-1], moji[j])>0){
        strcpy(tmp, moji[j-1]);
        strcpy(moji[j-1], moji[j]);
        strcpy(moji[j], tmp);
      }
    }
  }
 
  printf("\n◆文字列をソートしました。\n");
  for (i=0;i<num;i++)
    printf("%s\n", moji[i]);
 
  return 0;
}
