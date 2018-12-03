#include <stdlib.h>
#include <stdio.h>
#include<math.h>
void bsort(int a[], int n)
{
  int i, j;

  for(i = 0; i < n-1; i++){
    for(j= n - 1; j > i; j--){
      if(abs(a[j - 1]) <abs(a [j])){
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] =temp;
      }
    }
  }
}
int main(void)
{ 
  int s,i;
  int num[100] = {0};
  do{
   scanf("%d",&s);
   for(i = 0;i < s;i++)
     scanf("%d", &num[i]);
   bsort(num,s);
   for(i = 0;i < s;i++)
     printf(" %d",num[i]);
  }while(s > 0);
 return 0;
}
