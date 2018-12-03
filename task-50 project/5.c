#include<stdio.h>

int main(void){
  int i, j, k;
  k = 0;
  int num[100] = {0};
  for(i = 1; i <= 100; i++){
    for(j = i;j > 0; j--){
      if(i % j == 0)
        num[i]++;
      }
      if(num[i] == 2){
        printf(" %d",i);
        k++;
        }
      if(k % 5 == 0)
         printf("\n");
    }
  return 0;
}
