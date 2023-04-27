#include <stdio.h>
 
int main(void){
 
  
  char ch;
 
  
  FILE *fp;
 
  
  fp = fopen(__FILE__, "r");
 
  
  if( fp == NULL ) {
     perror("読み込みに失敗！\n");
     return 1;
  }
 
  
  printf("▼===== ソースコードの内容 =====▼\n");
  while( ( ch = fgetc(fp) ) != EOF ) {
    printf("%c", ch);
  }
 
  return 0;
}
