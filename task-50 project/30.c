#include<stdio.h>

int main(void){
	int i = 0, j = 0,rt,rx;
	int t1, t2;
	int sum1 = 0,sum2 = 0;
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char a[100] = {0};
	char b[100] = {0};
	char da, db;
	scanf("%s %c %s %c",a, da, b, db);
	int k = ( da -'0');
	int s = ( db -'0');
	while(a[i]){
	if(a[i] == da){
	t1++;
	i++;
	}
	i = 0;
	while(b[i]){
	if(b[i] == db){
	t2++;
	i++;
	}
	rt = k;
	rx = s;
	for(i = 0;i < t;i++){
	rt = rt*10;
}
	for(i = 0;i < t;i++)
	sum1 = rt;
	for(j = 0;j < t;j++){
	sum1 += rt/10;
	}
