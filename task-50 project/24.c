#include<stdio.h>

int main(void){
  char s[10000];
	char num[][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int cnt[10] = {0};
	int i = 0;
	int t = 0;
	int x, y, z;
	scanf("%s",s);
	while(s[i]){
		if(s[i]>='0'&&s[i]<='9')
		cnt[s[i] -'0']++;
		i++; 
	}
	for(i = 0;i < 10;i++)
	t += (cnt[i]*i);
	x = t/100;
	y = ((t - 100*x)/10);
	z = (t - 100*x - 10*y);
	printf("%s %s %s",num[x], num[y], num[z]);
} 
