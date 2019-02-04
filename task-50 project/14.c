#include<stdio.h>

int main(void){
	int a, b[100];
	int temp, x, i, t;
	while(scanf("%d ",&a) != EOF){
		for(i = 0;i < a;i++) 
		scanf("%d",&b[i]);
		t = b[0];
		for(i = 1;i < a;i++){
			if(b[i] < t){
			t = b[i];
			temp = i;
		}
	}
	b[temp] = b[0];
	b[0] = t;
	for(i = 0;i < a;i++)
	printf("%d ",b[i]);	
	printf("\n");	
	}
	return 0; 
} 
