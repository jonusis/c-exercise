#include <stdlib.h>
#include <stdio.h>
#include<math.h>
void bsort(int a[], int n){
  int i, j;
  for(i = 0; i < n-1; i++){
    for(j= n - 1; j > i; j--){
      if(a[j - 1] <a [j]){
        int temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] =temp;
      }
    }
  }
}
int main(void){
	int i, j, t[1000];
	int a, b;
	 while(scanf("%d %d", &a, &b)!= EOF){
	 	if(a == 0 || b == 0)
	 	  break;
	 	  for(i = 0;i < a; i++)
	 	  scanf("%d", &t[i]);
	 	bsort(t,a);
	 	for(j = 0;j < b;j++)
	 	printf("%d ",t[j]);
	 }
  return 0;
}
