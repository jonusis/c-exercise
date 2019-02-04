#include<stdio.h>

int main(void){
	int m, n, i, j;
	int k[100],t[100];
	int a[100][100] = {0};
	int num[100] = {0};
	scanf("%d %d",&m,&n);
	for(i = 0;i < n;i++){
		scanf("%d",&k[i]); 
	}
	for(i = 0;i < n;i++){
		scanf("%d",&t[i]); 
	}
	for(j = 0;j < m;j++){
		for(i = 0;i < n;i++){
			scanf("%d",&a[j][i]);
			if(a[j][i] == t[i])
			num[j] += k[i];
		}
	}
	for(i = 0;i < m;i++)
	printf("%d\n",num[i]);
	return 0;
} 
