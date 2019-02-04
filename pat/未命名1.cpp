#include<stdio.h>
#include<string.h>
 
int main(void){
	int num,a = 0,b = 0,c = 0;
	int i = 0,j = 0,t = 0,q = 0;
	char str[10][100];
	scanf("%d",&num);
	while(num--){
		scanf("%s",str[i]);
		j = 0;
		while(str[i][j]){
			if(str[i][j] == 'P'){
			t = j;
			a = j;
		}
		else if(str[i][j]=='T'){
			q = j;
			b = q - t - 1;
		}else if(str[i][j] != 'A'){
		a=0;b=0;
		break;
		}
	j++;
	}
		c = strlen(str[i]) - a - b- 2;
		if((a * b == c)&&(a!=0||b!=0||c!=0)){
		printf("YES\n");
	}	else {
		printf("NO\n");
	}
}
return 0;
}
