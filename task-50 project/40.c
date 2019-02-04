#include<stdio.h>

int main (void){
	int T, K, i,n1[1000],b[1000],t[1000],n2[1000];
	scanf("%d %d",&T, &K);
	for(i = 0; i < K;i++){
		scanf("%d %d %d %d",&n1[i], &b[i], &t[i], &n2[i]);
	if((t[i] > T)&&(T != 0)) {
		printf("Not enough tokens.  Total = %d.\n", T);
	}
	else if((T != 0)&&((n1[i] > n2[i] && b[i] == 0)||(n2[i] > n1[i] && b[i] == 1))){
		T = t[i] + T; 
		printf("Win %d!  Total = %d.\n", t[i], T);
	}
	else if((T != 0)&&((n1[i] < n2[i] && b[i] == 0)||(n2[i] < n1[i] && b[i] == 1))){
		T = T - t[i]; 
		printf("Lose %d.  Total = %d.\n", t[i], T);	
	 if(T == 0){
		printf("Game Over.\n");
	break;
	}
}
}
	return 0;
}
