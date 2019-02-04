#include<stdio.h>

int main (void){
  int num1[1005],num2[1005],i = 0,j = 0;
  do{
    scanf("%d %d ",&num1[i],&num2[i]);
    num1[i] = num1[i] * num2[i];
    num2[i] = num2[i] - 1;
    i++;
  }while(num2[i - 1] != -1);
    if((num2[0] == -1)&&(num1[0] == 0)){
    	printf("0 0");
	}
    if((num2[0] != -1)){
    if(num1[0] == 0){
      printf("%d",num1[0]);
      printf(" %d",num1[0]);
    }else{
      printf("%d",num1[0]);
      printf(" %d",num2[0]);
	}
}
  for(j = 1;j < i; j++){
    if((num2[j] == -1)){
    	continue; 
    }else if(num1[j] == 0){
      printf(" %d",num1[j]);
      printf(" %d",num1[j]);
    }else{
      printf(" %d",num1[j]);
      printf(" %d",num2[j]);
	}
  }
  return 0;
}
