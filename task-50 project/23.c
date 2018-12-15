#include<stdio.h>

int main(void){
	int i = 0;
	char ch[10000];
	int cnt[10] = {0};
    scanf("%s",ch);
    while(ch[i]){
	if(ch[i] >= '0'&& ch[i] <= '9')
	cnt[ch[i] - '0']++;
	i++;
}
	for(i = 0;i < 10;i++){
	if(cnt[i] != 0)
	printf("%d:%d\n",i,cnt[i]);
	}
	return 0;
}
