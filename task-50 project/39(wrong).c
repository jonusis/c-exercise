#include<stdio.h>

int main(void){
	int m, n, i, a[1000] = {0};
	int sum = 0;
	int k[1000] = {0}, j[1000] = {0}, l[1000] = {0}, t[1000] = {0}, u[1000] = {0}, p[1000] = {0};
	scanf("%d",&m);
	while(m != 0){
	for(i = 0;i < m;i++){
		scanf("%d",&a[i]);
		k[i] = a[i] / 100;
		j[i] = (a[i] - (100*k[i])) / 50 ;
		l[i] = (a[i] - (100*k[i]) - (50*j[i])) / 10;
		t[i] = (a[i] - (100*k[i]) - (50*j[i]) - (10*l[i])) / 5;
		u[i] = (a[i] - (100*k[i]) - (50*j[i]) - (10*l[i]) - (5*t[i])) / 2;
		p[i] = (a[i] - (100*k[i]) - (50*j[i]) - (10*l[i]) - (5*t[i]) - (2*u[i]));
	}
	for(i = 0;i < m;i++){
		sum += k[i] + j[i] + l[i] + t[i] + u[i] + p[i];
	}
		printf("%d\n",sum);
		scanf("%d",&m);
}
	return 0;
}
