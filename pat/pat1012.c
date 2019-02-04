#include<stdio.h>

int main(void){
	int m,num,sum1 = 0,sum2 = 0,sum3 = 0,k1 = 0,k2 = 0,k3 = 0,max = 0;
	float t = 0;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&num);
		if((num % 5 == 0)&&(num % 2 == 0)){
			sum1 = sum1 + num;
		}
		if(num % 5 == 1){
			if(k1 % 2 == 0){
				sum2 = sum2 + num;
				k1++;
			}else if(k1 % 2 == 1){
				sum2 = sum2 - num;
				k1++;
			}
		}
		if(num % 5 == 2){
			k2++;
		}
		if(num % 5 == 3){
			sum3 += num;
			k3++;
		}
		if(num % 5 == 4){
		 	if(max < num){
		 		max = num;
			 }
		}
	}
	if(k3 != 0)
	t = (float)sum3 / k3;
	if(sum1 == 0){
		printf("N");
	}else{
		printf("%d",sum1);
	}
	
	if(sum2 == 0){
		printf(" N");
	}else{
		printf(" %d",sum2);
	}
	
	if(k2 == 0){
		printf(" N");
	}else{
		printf(" %d",k2);
	}
	
	if(t == 0){
		printf(" N");
	}else{
		printf(" %.1f",t);
	}
	
	if(max == 0){
		printf(" N");
	}else{
		printf(" %d",max);
	}
	return 0;
} 
