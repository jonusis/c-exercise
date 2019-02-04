#include<stdio.h>

int main(void){
	int i,j,m;
	float t[100] = {0};
	int n[1000] = {0};
	double a1[100][100] = {0.0};
	scanf("%d",&m);
	for(i = 0;i < m;i++){
	scanf("%d",&n[i]);	
		for(j = 0;j < n[i];j++){
			scanf("%lf",&a1[i][j]);
		t[i] = a1[i][0];
		if(t[i] < a1[i][j])
		t[i] = a1[i][j];
	}
}
	for(i = 0;i < m;i++)
		printf("%.2f\n",t[i]);
	return 0;
}
	
