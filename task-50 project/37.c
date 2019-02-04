#include<stdio.h>

int main(void){
	int i, j, m, n, k[1000],t[1000],num[1000];
	char str[1000][16];
	scanf("%d",&m);
	for(i = 0;i < m;i++){
		scanf("%s",str[i]);
		scanf("%d",&k[i]);
		scanf("%d",&t[i]); 
	}
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	scanf("%d",&num[i]);
	for(i = 0;i < m;i++){
		for(j = 0;j < m;j++){
			if(num[i] == k[j]){
				printf("%s %d\n",str[j],t[j]);
			}
		}
	}
	return 0;
}
