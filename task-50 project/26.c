#include<stdio.h>

int main(void){
	int m, n, z, w, t;
	while(scanf("%d %d",&m, &n)!=EOF){
		if(m < n){
		int temp = m;
		m = n;
		n = temp;
	}
	w = m * n;
		while(n != 0){
		t = m % n;
		m = n;
		n = t;
		}
	z = w / m ;
	printf("%d\n",z);
	}
}
