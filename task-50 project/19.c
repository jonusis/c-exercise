#include <stdio.h>
#include <math.h>
#define max(a,b) (((a) > (b)) ? (a) : (b)) 
int main(void){
	int m,i;
	float t = 0;
	float a[10000] = {0}; 
	float b[10000] = {0};
	scanf("%d",&m);
	for(i = 0;i < m;i++){
	  scanf("%f %f",&a[i], &b[i]);
	  t = max(t, sqrt((a[i]*a[i])+(b[i]*b[i])));
    }
    printf("%.2f", t);
    return 0;
}
