#include <stdio.h>
#include <ctype.h>

int main(void){
	int max, k, t[150] = {0};
	char str[1000];
	gets(str); 
	int i = 0;
	while(str[i]){
		str[i] = tolower(str[i]);
		t[str[i]]++;
		i++;
	}
	max = t[65];
	k = 65;
	for(i = 65;i < 90;i++){
		if(t[i] > max){
		max = t[i];
		k = i;
		}
	}
	for(i = 97;i < 123;i++){
		if(t[i] > max){
		max = t[i];
		k = i;
		}
	}
	printf("%c %d" , k, max);
	return 0;
}

