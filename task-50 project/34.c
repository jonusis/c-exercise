#include<stdio.h>

int main(void){
	int m, i,k = 0,t = 0,z = 0;
	int a1[100] = {0}, a2[100] = {0}, b1[100] = {0}, b2[100] = {0};
	scanf("%d",&m);
	for(i = 0;i < m;i++){
		scanf("%d %d %d %d",&a1[i],&a2[i],&b1[i],&b2[i]);
		if(a2[i] == (a1[i]+b1[i]) && b2[i] == (a1[i]+b1[i])){
			z++;
		}
		else if(a2[i] == (a1[i]+b1[i])){
			k++;
		}
		else if(b2[i] == (a1[i]+b1[i])){
			t++;
		}
	}
	printf("%d %d",t, k);
}

