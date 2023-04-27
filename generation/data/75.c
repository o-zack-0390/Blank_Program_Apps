#include <stdio.h>
#include <unistd.h>
 
int main(void)
{
 
  
  char hostname[128];
 
  
  gethostname(hostname, sizeof(hostname));
 
  
  printf("ホスト名: %s\n", hostname);
 
  return 0;
}
