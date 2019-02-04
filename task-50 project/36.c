#include<stdio.h>
#include <string.h>

int main(void){
	int m,i, t = 0;
	int month,year,day;
	char name[1000][6],min[6],max[6];
	int a = 6,b = 9,c = 2014,d = 1814, e = 9,f = 6;
	scanf("%d",&m);
		for(i = 0;i < m;i++){
			scanf("%s",name[i]);
			scanf("%d/%d/%d",&year,&month,&day);
			if(year > 1814 && year < 2014){
				t++;
				if((c > year)||((c == year && b > month)||((c == year && b == month)&&(a > day)))){
					a = day;
					b = month;
					c = year;
					strcpy(max,name[i]);
				}
				if((d < year)||(d == year && e < month)||((d == year && e == month)&&(f < day))){
					f = day;
					e = month;
					d = year;
					strcpy(min,name[i]);
				}
			}
			else if(year == 1814 && month > 9){
				t++;
				if((b > month) || ((b == month) && (a > day))){
					a = day;
					b = month;
					c = year;
					strcpy(max,name[i]);
			}
				if((e < month) || ((e == month) && (f < day))){
					f = day;
					e = month;
					d = year;
					strcpy(min,name[i]);
				}
			}
			else if((year == 1814 && month == 9) && day >= 6){
				t++;
				if(a > day){
					a = day;
					b = month;
					c = year;
					strcpy(max,name[i]);
				}
				if(f < day){
					f = day;
					e = month;
					d = year;
					strcpy(min,name[i]);
				}
			}
		}
		printf("%d %s %s", t, max, min);
		return 0;
	}
