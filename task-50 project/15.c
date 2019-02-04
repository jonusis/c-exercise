#include<stdio.h>

int main(void){
    int a, i;
    int b[1000];
    scanf("%d", &a);
        for(i = 0;i < a; i++)
        scanf("%d",&b[i]);
        for(i = 0;i < a; i++)
        printf("%c",b[i]);
return 0;
}

