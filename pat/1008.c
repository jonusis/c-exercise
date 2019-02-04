#include<stdio.h>

int main (void){
  int m, n,num[1000] = {0},i = 0;
  scanf("%d %d",&m,&n);
  while(n > m){
  	n = n - m;
  }
  for(i = 0;i < m - n;i++){
    scanf("%d",&num[i+n]);
  }
    for(i = 0;i < n;i++){
    scanf("%d",&num[i]);
  }
  printf("%d",num[0]);
  for(i = 1;i < m;i++){
    printf(" %d",num[i]);
  }
  return 0; 
}
