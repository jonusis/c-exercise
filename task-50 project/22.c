#include<stdio.h>

int main(void){
	int m, n;
	float t;
	int x, y, z;
	scanf("%d %d",&m, &n);
	t = (float)(n - m)/100;
	x = (int)t/3600;
	y = (int)((t - 3600*x)/60);
	z = (int)(t - 3600*x - 60*y + 0.5);
	if(x < 10) printf("0%d:",x);
	else printf("%d:",x);
	if(y < 10) printf("0%d:",y);
	else printf("%d:",y);
	if(z < 10) printf("0%d",z);
	else printf("%d",z);
} 
