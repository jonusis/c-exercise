#include<stdio.h>

int main(void){

  int i ,j, t;
  for(i = 0;i <= 2; i++){
    for(t = 0; t < i; t++)
    printf(" ");

    for(j = 5-2*i; j >= 1; j--)
    printf("*");

    printf("\n");
  }
  for(i = 1;i >= 0; i--){
    for(t = 0; t < i; t++)
    printf(" ");

    for(j = 5-2*i; j >= 1; j--)
    printf("*");

    printf("\n");
}
  return 0;
}

