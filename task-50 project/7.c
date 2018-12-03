#include<stdio.h>

int main(void)
{
  int a[100] = {0};
  int s, j, i;
  j = 1;
  while(scanf("%d",&s) != EOF){
    for(i = 0; i < s; i++){
    scanf("%d", &a[i]);
    if(a[i] % 2 != 0)
      j *= a[i];
    }
    printf("%d",j);
    j = 0;
  }
  return 0;
}
