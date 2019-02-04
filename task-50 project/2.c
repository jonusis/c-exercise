#include<stdio.h>

int main(void){
  int a, b;
  printf("请输入两门课的成绩\n");
  scanf("%d %d", &a, &b);
  switch(a / 10){
    case 0:case 1:case 2:case 3: case 4: case 5: 
    printf("it not pass"); break;
    case 6:case 7:case 8:case 9:
    switch(b / 10){
      case 0:case 1:case 2:case 3: case 4: case 5:
      printf("it not pass"); break;
      case 6:case 7:case 8:case 9:
      printf("it is pass"); break;
    }
  default: printf("it is error");break;
  }
  return 0;
}


