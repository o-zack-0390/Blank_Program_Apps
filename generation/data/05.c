int main(void)
{
 
  
  int a, b;
 
  
  printf("1つ目の整数を入力してください: a = ");
  scanf("%d", &a);
  printf("2つ目の整数を入力してください: b = ");
  scanf("%d", &b);
 
  
  if( a==b )
    printf("同じ！\n");
  if( a!=b )
    printf("ちがーう！\n");
 
  return 0;
}
