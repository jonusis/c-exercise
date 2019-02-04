#include <stdio.h>

int main(void){
  int i = 0,k = 0, t = 0, m = 0, n = 0, p = 0;
  char a[61], b[61], c[61], d[61];
  char s[8][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
  scanf("%s %s %s %s",a,b,c,d);
  for(i = 0;i < 60;i++){
    if((t == 1)&&(a[i] == b[i])){
      if(a[i]<='N'&&a[i]>='A'){
        t++;
        m = (a[i] - 'A')+10;
      }else if(a[i]<='n'&&a[i]>='a'){
        t++;
        m = (a[i] - 'a')+10;
      }else if(a[i]<='9'&&a[i]>='0'){
        t++;
        m = a[i] - '0';
      }
    }
    if((a[i] == b[i])&&((a[i]<='G' && a[i]>='A')&&(t == 0))){
      t++;
      k = (a[i] - 'A');
    }
    if((c[i] == d[i]) && (n == 0)&&((c[i]<='z'&&c[i]>='a')||(c[i]<='Z'&&c[i]>='A'))){
      p = i;n++;
    }
    if(t == 2&& n==1) break;
  }
  if(m > 9 && p > 9)
    printf("%s %d:%d",s[k],m,p);
  if(m <= 9 && p > 9)
    printf("%s 0%d:%d",s[k],m,p);
  if(m > 9 && p <= 9)
    printf("%s %d:0%d",s[k],m,p);
  if(m <= 9 && p <= 9)
    printf("%s 0%d:0%d",s[k],m,p);
  return 0;
}
