#include<stdio.h>

int main(void){
	int m, n, i, j;
	int t = 0;
	int k[10000] = {0};
	scanf("%d %d", &m, &n);
	if(m < n){
		int temp = m;
		m = n;
		n = temp;
	}
	for(i = 2;i <= 10000; i++){
	  for(j = 1;j <= i; j++){
	  	if(i % j == 0)
	  	k[i]++;
	  	if(k[i] > 2) break;
	  }
		if(k[i] == 2){
		  t++;
		if(t < m && t >= n){
		  if((t-n+1) % 10 != 0)
		  printf("%d ", i);
		  if((t-n+1) % 10 == 0)
		    printf("%d\n", i);
	}
	   if(t == m){
	   	printf("%d", i);
	   }
  }
  } 
  return 0;
}
