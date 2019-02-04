#include<stdio.h>

int main(void){
  int x, y;
  while(scanf("%d %d",&x, &y) != EOF){  
    int i, j, u, k;
    int a[100][100];
    float s[100] = {0};
    float t[100] = {0};
    float b, c;
    u = k = 0;
    b = c = 0;

    for(i = 0;i < x;i++){
      for(j = 0; j < y;j++)
        scanf("%d",&a[i][j]);
      }
      for(i = 0;i < x;i++){
        for(j = 0;j < y;j++){
          s[i] += a[i][j];
        }
          printf("%.2f ",(s[i]/y));
      }
      printf("\n");
      for(i = 0;i < y;i++){
        for(j = 0;j < x;j++){
          t[i] += a[j][i];
        }
      printf("%.2f ",(t[i]/x));
      }
        for(i = 0;i < x;i++){
        u = 1;
          for(j = 0; j < y;j++)
            if(a[i][j] < (t[j]/x)){
              u = 0;break;
        }
        if(u)
          k++;
      }
    printf("\n%d",k);
  }
  return 0;
}


