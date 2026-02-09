#include<stdio.h>

int main () {
   char S[4]; scanf("%s", S);

   int chk=0;
   for(int i=0;i<3;i++) {
      if(S[i]=='7') {
         chk=1;
         break;
      }
   }
   printf("%s", chk?"Yes":"No");
}