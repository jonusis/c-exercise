#include<stdio.h>

int main (void){
  int m ,i ,j ,s[100008] = {0},k[10000]={0},u = 0;
  scanf("%d",&m);
  for(i = 3;i <= m;i++){
    s[i] = 1;
    for(j = 2;j < i;j++){
      if(i % j == 0){
        s[i] = 0;
        break;
      }
    }
  }
  for(i = 0;i <= m;i++){
    if(s[i] != 0){
      k[u] = i;
      u++;
    }
  }
  int t = 0;
  for(i = 0;i < u;i++){
    if( k[i+1] - k[i] == 2)
    t++;
  }
  printf("%d",t);
}
