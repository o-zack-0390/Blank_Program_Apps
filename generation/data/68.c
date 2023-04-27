#include <stdio.h>
 
int main(void){
 
  
  char ch[100];
 
  
  FILE *fp;
 
  
  fp = fopen("file.txt", "w");
 
  
  if( fp == NULL ) {
     perror("ファイルの読み込みに失敗！\n");
     return 1;
  }
 
  
  printf("文字列を入力してください = ");
  fgets(ch, sizeof(ch), stdin);
 
  
  fprintf(fp, "%s", ch);
  fclose(fp);
 
  return 0;
}
