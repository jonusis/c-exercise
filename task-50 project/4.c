#include<stdio.h>

int main(void){
  int a, b, c;
  int temp,i;
  printf("请输入两个数\n");
  scanf("%d %d",&a, &b);
  if(b > a){
  temp = b;
  b = a;
  a = temp;
  }
  while(a % b != 0){
  c = a % b;
  a = b;
  b = c;
  }
  printf("\n他们的最大公约数是%d",b);
  return 0;
}
