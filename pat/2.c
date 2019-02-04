#include<stdio.h>

int main(void){
	char name[100][100],num[100][100];
	int m, i, k[100], t, s = 0, p, q = 0;
		scanf("%d",&m);
		scanf("%s %s %d",name[0],num[0],&k[0]);
		t = k[0];
		p = k[0];
	for(i = 1;i < m;i++){
		scanf("%s %s %d",name[i],num[i],&k[i]);
		if(t > k[i]){
		t = k[i];
		s = i;
	}
		if(p < k[i]){
		p = k[i];
		q = i;
		}
	}
	printf("%s %s\n",name[q],num[q]);
	printf("%s %s",name[s],num[s]);
}
