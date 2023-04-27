#include <stdio.h>
 
int main(void){
 
  
  char ch[100];
 
  
  FILE *fp;
 
  
  fp = fopen("file.txt", "a");
 
  
  if( fp == NULL ) {
     perror("ファイルの読み込みに失敗！\n");
     return 1;
  }
 
  
  printf("追記する文字列 = ");
  fgets(ch, sizeof(ch), stdin);
 
  
  fprintf(fp, "%s", ch);
  fclose(fp);
 
  return 0;
}
