#include<stdio.h>

void str_dcount( char s[]){
  int cnt[5] = {0};
  char t[] = "aeiou";
  int i = 0;
  int x = 0;
  while(s[i]){
  	for (x = 0;x < 5;x++){
  	  if (s[i] == t[x])
  	    cnt[x]++;
     }
     i++;
  }
  for(i = 0;i < 5; i++)
  printf("%c£º%d\n",t[i], cnt[i]);
}

int main(void){
  int a, b, i, t;
  char str[100][110], s[110];
  while(scanf("%d", &a) != EOF){
  	for(i = 0;i < a; i++)
  	  scanf("%s", str[i]);
  	  for(t = 0;t < a;t++){
  	  	i = 0;
  	    while(str[t][i]){
  	      s[i] = str[t][i];
   	      i++;
        }
        str_dcount(s);
   	      if(t < a - 1 )
   	      printf("\n");
      }
   }
return 0;
}
