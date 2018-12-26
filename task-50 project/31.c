#include<stdio.h>

int main(void){
	int i, k,m[1000] = {0}, n[1000] = {0};
	int t[1000] = {0};
	scanf("%d",&k);
	for(i = 0;i < k;i++){
		scanf("%d %d",&m[i],&n[i]);
		t[i] = m[i] % n[i];
	}
	for(i = 0;i < (k-1);i++){
		if(t[i] == 0)
		printf("YES \n");
		if(t[i] != 0)
		printf("NO\n");
} 
		if(t[k-1] == 0)
		printf("YES");
		if(t[k-1] != 0)
		printf("NO");
		return 0;
	}
