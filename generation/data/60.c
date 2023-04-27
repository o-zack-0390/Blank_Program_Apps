#include<stdio.h>
 
int main(void)
{
 
  
  int i;
 
  
  printf( "10進: 8進:16進:文字\n");
 
  
  for( i=33;i<=126;i++ ){
 
    
    printf( "%4d:%4o:%4x:%4c\n", i, i, i, i);
 
  }
 
  return 0;
}
