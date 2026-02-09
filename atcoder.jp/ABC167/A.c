#include<stdio.h>
#include<string.h>

int main(void) {
   char S[11], T[12]; scanf("%s %s", S, T);

   int chk=1;
   for(int i=0;i<strlen(S);i++) {
      if(S[i]!=T[i]) {
         chk=0;
         break;
      }
   }
   printf("%s", chk?"Yes":"No");
}