#include <stdio.h>
#include <string.h>
int main(void){
	int m, i, j;
	int t = 0;
	int a[1000] = {0};
	scanf("%d",&m);
	for(i = 0;i < m;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i < m - 1;i++){
		for(j = i + 1;j < m;j++){
			t += (a[i]*10 + a[j]);
		}
	}
	for(i = m - 1;i > 0;i--){
		for(j = i - 1;j >= 0;j++){
			t += (a[i]*10 + a[j]);
		}
	}
	printf("%d",t);
	return 0;
}
