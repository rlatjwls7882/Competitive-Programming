#include<stdio.h>

int main () {
   char S[4]; scanf("%s", S);

   int cnt=0;
   for(int i=0;i<3;i++) {
      if(S[i]=='A') {
         cnt++;
      }
   }
   printf("%s", cnt==1||cnt==2?"Yes":"No");
}