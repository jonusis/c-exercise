#include<stdio.h>

int main(void){
	int m, i, j;
	char n;
	scanf("%d %c",&m,&n);
	for(i = 0;i < m;i++)
	printf("%c",n);
	printf("\n");
	for(i = 0;i < ((m+1)/2-2);i++){
		printf("%c", n);
		for(j = 0;j < (m-2);j++)
			printf(" ");
		printf("%c\n", n);
	}
	for(i = 0;i < m;i++)
	printf("%c",n);
	return 0;
}
