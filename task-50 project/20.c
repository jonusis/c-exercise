#include<stdio.h>

void sum(float n){
  double t = 0;
  int i;
  for(i = 1; i <= n; i++){
    if(i % 2 == 0)
    t -= (double) 1/i;
    if(i % 2 != 0)
    t += (double) 1/i;
}
    printf("%.2f", t);
}

int main(void){
	int m, i;
	float t, u;
	int a[10000];
	scanf("%d",&m);
	for(i = 0;i < m; i++)
	scanf("%d", &a[i]);
	for(i = 0;i < m; i++){
	t = (float) a[i];
	sum(t);
	printf("\n");
  }
  return 0;
}
