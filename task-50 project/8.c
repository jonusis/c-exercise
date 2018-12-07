#include<stdio.h>

void bsort(int a[], int n)
{
  int i, j;

  for(i = 0; i < n-1; i++){
    for(j= n - 1; j > i; j--){
      if(a[j - 1] < a [j]){
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] =temp;
      }
    }
  }
}
int main(void){
  int s, i;
  float j = 0;
  float k;
  int a[100];
  while(scanf("%d",&s) != EOF){
    for(i = 0; i < s; i++)
      scanf("%d",&a[i]);
    bsort(a, s);
    for(i = 1;i < (s - 1);i++)
      j+= a[i];
    k = j/ (s - 2);
    printf("%.2f",k);
    j = 0;
    }
  return 0;
}
