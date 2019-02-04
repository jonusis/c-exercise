#include<stdio.h>

int main(void){
  int m,num,d[90],j = 0,i = 0,k;
  int s[10600] = {0};
  scanf("%d",&m);
  for(i = 0;i < m;i++){
    scanf("%d",&num);
    if(s[num] == 0){
    s[num] = 2;
}
  while(num != 1){
    if(num % 2 == 0){
      num = num / 2;
      if(s[num] == -1){
        break;
    }else{
      s[num] = -1;
    }
  }
    if(num % 2 == 1){
      num = (num*3)+1;
      if(s[num] == -1){
      	s[num] = -1;
        break;
    }else{
      s[num] = -1;
    }
  }
}
}
  for(i = 0,k = 0;i < 105;i++){
    if(s[i] == 2){
      d[k] = i;
      k++;
    }
  }
  for (i = 0; i < k - 1; i++){
    for (j = 0; j < k - 1 - i; j++){
      if (d[j] < d[j + 1]){
        int temp = d[j];
        d[j] =d[j + 1];
        d[j + 1] = temp;
        }
      }
    }
    printf("%d",d[0]);
    for(i = 1;i < k;i++){
    	printf(" %d",d[i]);
	}
}

