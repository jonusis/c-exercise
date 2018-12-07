#include<stdio.h>

int main(void){
  int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
  int i, x, y, z;
  int max;
  while(scanf("%d/%d/%d",&x, &y, &z) != EOF){
    max = z;
    if((x%4 == 0 && x%100 != 0)||( x%400 == 0)){
      for(i = 0;i < y;i++)
        max += a[1][i];
      printf("%d",max);break;
      }else{
        max = z;
        for(i = 0;i < y;i++)
          max += a[0][i];
        printf("%d",max);
      }
    }
  return 0;
}
        
    
