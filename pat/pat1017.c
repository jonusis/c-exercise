#include<stdio.h>
#include <string.h>

int main(){
  int n,i = 0,sum[1001],j = 0,t = 0,k,len;
  char num[1001];
  scanf("%s %d",num,&n);
  len = strlen(num);
  for(k = 0;k < len;k++){-
     sum[j] = ((t*10)+(num[i+1] - '0')) / n;
      t = (num[i] - '0') % n - 1;
      j++;
  }
  for(i = 0;i < j;i++){
    printf("%d",sum[i]);
  }
  printf(" %d",t);
  return 0;
}
