#include<stdio.h>
#include<string.h>

int main(void){
	int t, j, k, l, i;
	char str[10];
	scanf("%s",str);
	t = strlen(str);
	if(t == 3){
	k =	(str[0] - '0');
	j = (str[1] - '0');
	l = (str[2] - '0');
	for(i = 0;i < k;i++)
	printf("B");
	for(i = 0;i < j;i++)
	printf("S");
	for(i = 0;i < l;i++)
	printf("%d",i+1);
	} 
	else if(t == 2){
	k =	(str[0] - '0');
	j = (str[1] - '0');
	for(i = 0;i < k;i++)
	printf("S");
	for(i = 0;i < j;i++)
	printf("%d",i+1);
	}
	else if(t == 1){
	k =	(str[0] - '0');
	for(i = 0;i < k;i++)
	printf("%d",i+1);
	}
	return 0;
} 
